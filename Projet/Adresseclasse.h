#pragma once
#include <string>

using namespace System;

ref class Adresseclasse
{
public :
	int^ id_Adresse;
	int^ num_rue;
	String^ nom_rue;
	String^ code_postal;
	String^ ville;

	String^ affiche() {
		return this->id_Adresse + " " + this->num_rue + " " + this->nom_rue + " " + this->code_postal + this->ville;
	}

private:
	//int^ id_Adresse

};

