#pragma once
#include "BDD.h"

using namespace System;
using namespace System::Data::SqlClient;

BDD::BDD()
{
    try
    {
        // Chaîne de connexion
        String^ connectString = "Server=10.151.128.232,1433;Initial Catalog =Projet;User ID=sa;Password=root";
        // Objet connection
        connection = gcnew SqlConnection(connectString);
        // Ouverture
        connection->Open();
        System::Diagnostics::Debug::WriteLine("Connexion ok");
    }
    catch (Exception^ ex)
    {
        System::Diagnostics::Debug::WriteLine(ex->ToString());
    }
}

BDD::~BDD()
{
    // Fermeture
    if (connection != nullptr)
        connection->Close();
}
System::Data::DataSet^ BDD::executeQuery(String^ sql)
{
    System::Diagnostics::Debug::WriteLine("REQSQL: " + sql);
    SqlDataAdapter^ da = gcnew SqlDataAdapter(sql, this->connection);
    // Création d'un DataSet
    System::Data::DataSet^ ds = gcnew System::Data::DataSet();
    // Remplissage du DataSet avec le SqlDataAdapter
    da->Fill(ds);

    return ds;
}

int BDD::executeNonQuery(String^ sql)
{
    System::Diagnostics::Debug::WriteLine("REQSQL: " + sql);
    SqlCommand^ command = gcnew SqlCommand(sql, this->connection);
    // Execution
    int affectedrows = command->ExecuteNonQuery();
    return affectedrows;
}

int BDD::executeInsert(String^ sql)
{
    System::Diagnostics::Debug::WriteLine("REQSQL: " + sql);
    SqlCommand^ command = gcnew SqlCommand(sql + ";SELECT @@IDENTITY", this->connection);
    // Execution
    int idGenere = Decimal::ToInt32((Decimal)command->ExecuteScalar());
    return idGenere;
}


/*

SqlDataAdapter ^ da = gcnew SqlDataAdapter("Select * from Customers", _SqlConnection);
// Création d'un DataSet
DataSet ^ds = gcnew DataSet();
// Remplissage du DataSet avec le SqlDataAdapter
da->Fill(ds, "Customers");
*/

/*

SqlCommand ^command = gcnew SqlCommand("UPDATE usr_contract set ctr_n = ctr_n + 1", connection);
// Execution
int affectedrows = command->ExecuteNonQuery();
*/

/*
SqlCommand ^command = gcnew SqlCommand("SELECT * FROM usr_contract", connection);
// Objet DataReader
SqlDataReader ^reader = command->ExecuteReader();
array<Object ^> ^row = gcnew array<Object ^>(reader->FieldCount);
while (reader->Read())
{
    reader->GetValues(row);
    for (int i=0; i<row->GetLength(0); i++)
    {
        if (row[i] != DBNull::Value)
            Console::Write(row[i]);
        else
            Console::Write("NULL");
        if (i<row->GetUpperBound(0))
            Console::Write("|");
    }
    Console::WriteLine();
}
// Fermeture reader
reader->Close();
*/
