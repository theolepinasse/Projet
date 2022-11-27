#pragma once
#include <string>
#include "Adresseclasse.h"

using namespace System;
using namespace System::Collections::Generic;

ref class Personnelclasse
{
public :
	int^ id_personnel;
	String^ nom_personnel;
	String^ prenom_personnel;
	String^ date_embauche; 
	String^ poste;
	List<Adresseclasse^>^ adresseclasse = gcnew List<Adresseclasse^>();
	//String^ adresse_personnel;

	String^ affiche() {
		String^ retour = this->id_personnel + " " + this->nom_personnel + " " + this->prenom_personnel + " " + this->date_embauche + this->poste;
		retour += "\nAdresse :";
		for each (Adresseclasse ^ adresse in this->adresseclasse)
		{
			retour += "\n" + adresse->affiche();
		}

		return retour;

	}

private :
};

