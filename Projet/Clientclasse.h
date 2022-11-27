#pragma once

#include <string>
#include "Adresseclasse.h"

using namespace System;
using namespace System::Collections::Generic;

ref class Clientclasse
{
public:
	int^ id_client;
	String^ nom_client;
	String^ prenom_client;
	String^ date_naissance;
	int^ nb_commande;
	List<Adresseclasse^>^ adresseclasse = gcnew List<Adresseclasse^>();
	//différencier adresse livraison/facuration;

	String^ affiche() {
		String^ retour = this->id_client + " " + this->nom_client + " " + this->prenom_client + " " + this->date_naissance + this->nb_commande;
		retour += "\nAdresse :";
		for each (Adresseclasse ^ adresse in this->adresseclasse)
		{
			retour += "\n" + adresse->affiche();
		}

		return retour;

	}

private:
};

