#pragma once

namespace Projet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Client
	/// </summary>
	public ref class Client : public System::Windows::Forms::Form
	{
	public:
		Client(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Client()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ tb_nom;
	private: System::Windows::Forms::TextBox^ tb_prenom;
	private: System::Windows::Forms::TextBox^ tb_date_naissance;
	private: System::Windows::Forms::TextBox^ tb_nb_commande;
	private: System::Windows::Forms::DataGridView^ dgv_Client;

	private: System::Windows::Forms::Button^ btn_Ajouter;
	private: System::Windows::Forms::Button^ btn_Modifier;
	private: System::Windows::Forms::Button^ btn_Supprimer;
	private: System::Windows::Forms::Label^ lb_nom;
	private: System::Windows::Forms::Label^ lb_prenom;
	private: System::Windows::Forms::Label^ lb_date_naissance;
	private: System::Windows::Forms::Label^ lb_adresse;






	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tb_nom = (gcnew System::Windows::Forms::TextBox());
			this->tb_prenom = (gcnew System::Windows::Forms::TextBox());
			this->tb_date_naissance = (gcnew System::Windows::Forms::TextBox());
			this->tb_nb_commande = (gcnew System::Windows::Forms::TextBox());
			this->dgv_Client = (gcnew System::Windows::Forms::DataGridView());
			this->btn_Ajouter = (gcnew System::Windows::Forms::Button());
			this->btn_Modifier = (gcnew System::Windows::Forms::Button());
			this->btn_Supprimer = (gcnew System::Windows::Forms::Button());
			this->lb_nom = (gcnew System::Windows::Forms::Label());
			this->lb_prenom = (gcnew System::Windows::Forms::Label());
			this->lb_date_naissance = (gcnew System::Windows::Forms::Label());
			this->lb_adresse = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_Client))->BeginInit();
			this->SuspendLayout();
			// 
			// tb_nom
			// 
			this->tb_nom->Location = System::Drawing::Point(29, 37);
			this->tb_nom->Name = L"tb_nom";
			this->tb_nom->Size = System::Drawing::Size(102, 22);
			this->tb_nom->TabIndex = 0;
			// 
			// tb_prenom
			// 
			this->tb_prenom->Location = System::Drawing::Point(29, 94);
			this->tb_prenom->Name = L"tb_prenom";
			this->tb_prenom->Size = System::Drawing::Size(103, 22);
			this->tb_prenom->TabIndex = 1;
			// 
			// tb_date_naissance
			// 
			this->tb_date_naissance->Location = System::Drawing::Point(29, 153);
			this->tb_date_naissance->Name = L"tb_date_naissance";
			this->tb_date_naissance->Size = System::Drawing::Size(103, 22);
			this->tb_date_naissance->TabIndex = 2;
			// 
			// tb_nb_commande
			// 
			this->tb_nb_commande->Location = System::Drawing::Point(29, 209);
			this->tb_nb_commande->Name = L"tb_nb_commande";
			this->tb_nb_commande->Size = System::Drawing::Size(103, 22);
			this->tb_nb_commande->TabIndex = 3;
			// 
			// dgv_Client
			// 
			this->dgv_Client->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_Client->Location = System::Drawing::Point(247, 12);
			this->dgv_Client->Name = L"dgv_Client";
			this->dgv_Client->RowHeadersWidth = 51;
			this->dgv_Client->RowTemplate->Height = 24;
			this->dgv_Client->Size = System::Drawing::Size(438, 286);
			this->dgv_Client->TabIndex = 4;
			// 
			// btn_Ajouter
			// 
			this->btn_Ajouter->Location = System::Drawing::Point(287, 336);
			this->btn_Ajouter->Name = L"btn_Ajouter";
			this->btn_Ajouter->Size = System::Drawing::Size(90, 49);
			this->btn_Ajouter->TabIndex = 5;
			this->btn_Ajouter->Text = L"Ajouter";
			this->btn_Ajouter->UseVisualStyleBackColor = true;
			// 
			// btn_Modifier
			// 
			this->btn_Modifier->Location = System::Drawing::Point(414, 336);
			this->btn_Modifier->Name = L"btn_Modifier";
			this->btn_Modifier->Size = System::Drawing::Size(90, 49);
			this->btn_Modifier->TabIndex = 6;
			this->btn_Modifier->Text = L"Modifier";
			this->btn_Modifier->UseVisualStyleBackColor = true;
			// 
			// btn_Supprimer
			// 
			this->btn_Supprimer->Location = System::Drawing::Point(540, 336);
			this->btn_Supprimer->Name = L"btn_Supprimer";
			this->btn_Supprimer->Size = System::Drawing::Size(90, 49);
			this->btn_Supprimer->TabIndex = 7;
			this->btn_Supprimer->Text = L"Supprimer";
			this->btn_Supprimer->UseVisualStyleBackColor = true;
			// 
			// lb_nom
			// 
			this->lb_nom->AutoSize = true;
			this->lb_nom->Location = System::Drawing::Point(59, 17);
			this->lb_nom->Name = L"lb_nom";
			this->lb_nom->Size = System::Drawing::Size(35, 17);
			this->lb_nom->TabIndex = 8;
			this->lb_nom->Text = L"nom";
			// 
			// lb_prenom
			// 
			this->lb_prenom->AutoSize = true;
			this->lb_prenom->Location = System::Drawing::Point(49, 74);
			this->lb_prenom->Name = L"lb_prenom";
			this->lb_prenom->Size = System::Drawing::Size(56, 17);
			this->lb_prenom->TabIndex = 9;
			this->lb_prenom->Text = L"prénom";
			// 
			// lb_date_naissance
			// 
			this->lb_date_naissance->AutoSize = true;
			this->lb_date_naissance->Location = System::Drawing::Point(26, 133);
			this->lb_date_naissance->Name = L"lb_date_naissance";
			this->lb_date_naissance->Size = System::Drawing::Size(124, 17);
			this->lb_date_naissance->TabIndex = 10;
			this->lb_date_naissance->Text = L"date de naissance";
			// 
			// lb_adresse
			// 
			this->lb_adresse->AutoSize = true;
			this->lb_adresse->Location = System::Drawing::Point(49, 189);
			this->lb_adresse->Name = L"lb_adresse";
			this->lb_adresse->Size = System::Drawing::Size(59, 17);
			this->lb_adresse->TabIndex = 11;
			this->lb_adresse->Text = L"adresse";
			// 
			// Client
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(697, 443);
			this->Controls->Add(this->lb_adresse);
			this->Controls->Add(this->lb_date_naissance);
			this->Controls->Add(this->lb_prenom);
			this->Controls->Add(this->lb_nom);
			this->Controls->Add(this->btn_Supprimer);
			this->Controls->Add(this->btn_Modifier);
			this->Controls->Add(this->btn_Ajouter);
			this->Controls->Add(this->dgv_Client);
			this->Controls->Add(this->tb_nb_commande);
			this->Controls->Add(this->tb_date_naissance);
			this->Controls->Add(this->tb_prenom);
			this->Controls->Add(this->tb_nom);
			this->Name = L"Client";
			this->Text = L"Client";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_Client))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
};
}
