#pragma once

namespace Projet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Personnel
	/// </summary>
	public ref class Personnel : public System::Windows::Forms::Form
	{
	public:
		Personnel(void)
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
		~Personnel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ tb_nom;
	protected:

	private: System::Windows::Forms::TextBox^ tb_prenom;

	private: System::Windows::Forms::TextBox^ tb_date_embauche;
	private: System::Windows::Forms::TextBox^ tb_superieur_hierarchique;
	private: System::Windows::Forms::DataGridView^ dgv_personnel;

	protected:

	protected:




	private: System::Windows::Forms::Button^ btn_Ajouter;
	private: System::Windows::Forms::Button^ btn_Modifier;
	private: System::Windows::Forms::Button^ btn_Supprimer;
	private: System::Windows::Forms::Label^ lb_nom;
	private: System::Windows::Forms::Label^ lb_prenom;
	private: System::Windows::Forms::Label^ lb_date_embauche;
	private: System::Windows::Forms::Label^ lb_poste;







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
			this->tb_date_embauche = (gcnew System::Windows::Forms::TextBox());
			this->tb_superieur_hierarchique = (gcnew System::Windows::Forms::TextBox());
			this->dgv_personnel = (gcnew System::Windows::Forms::DataGridView());
			this->btn_Ajouter = (gcnew System::Windows::Forms::Button());
			this->btn_Modifier = (gcnew System::Windows::Forms::Button());
			this->btn_Supprimer = (gcnew System::Windows::Forms::Button());
			this->lb_nom = (gcnew System::Windows::Forms::Label());
			this->lb_prenom = (gcnew System::Windows::Forms::Label());
			this->lb_date_embauche = (gcnew System::Windows::Forms::Label());
			this->lb_poste = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_personnel))->BeginInit();
			this->SuspendLayout();
			// 
			// tb_nom
			// 
			this->tb_nom->Location = System::Drawing::Point(29, 45);
			this->tb_nom->Name = L"tb_nom";
			this->tb_nom->Size = System::Drawing::Size(131, 22);
			this->tb_nom->TabIndex = 0;
			// 
			// tb_prenom
			// 
			this->tb_prenom->Location = System::Drawing::Point(29, 99);
			this->tb_prenom->Name = L"tb_prenom";
			this->tb_prenom->Size = System::Drawing::Size(131, 22);
			this->tb_prenom->TabIndex = 1;
			// 
			// tb_date_embauche
			// 
			this->tb_date_embauche->Location = System::Drawing::Point(29, 153);
			this->tb_date_embauche->Name = L"tb_date_embauche";
			this->tb_date_embauche->Size = System::Drawing::Size(131, 22);
			this->tb_date_embauche->TabIndex = 2;
			// 
			// tb_superieur_hierarchique
			// 
			this->tb_superieur_hierarchique->Location = System::Drawing::Point(29, 209);
			this->tb_superieur_hierarchique->Name = L"tb_superieur_hierarchique";
			this->tb_superieur_hierarchique->Size = System::Drawing::Size(131, 22);
			this->tb_superieur_hierarchique->TabIndex = 3;
			// 
			// dgv_personnel
			// 
			this->dgv_personnel->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_personnel->Location = System::Drawing::Point(277, 45);
			this->dgv_personnel->Name = L"dgv_personnel";
			this->dgv_personnel->RowHeadersWidth = 51;
			this->dgv_personnel->RowTemplate->Height = 24;
			this->dgv_personnel->Size = System::Drawing::Size(446, 279);
			this->dgv_personnel->TabIndex = 4;
			// 
			// btn_Ajouter
			// 
			this->btn_Ajouter->Location = System::Drawing::Point(300, 408);
			this->btn_Ajouter->Name = L"btn_Ajouter";
			this->btn_Ajouter->Size = System::Drawing::Size(101, 34);
			this->btn_Ajouter->TabIndex = 5;
			this->btn_Ajouter->Text = L"Ajouter";
			this->btn_Ajouter->UseVisualStyleBackColor = true;
			// 
			// btn_Modifier
			// 
			this->btn_Modifier->Location = System::Drawing::Point(445, 408);
			this->btn_Modifier->Name = L"btn_Modifier";
			this->btn_Modifier->Size = System::Drawing::Size(101, 31);
			this->btn_Modifier->TabIndex = 6;
			this->btn_Modifier->Text = L"Modifier";
			this->btn_Modifier->UseVisualStyleBackColor = true;
			// 
			// btn_Supprimer
			// 
			this->btn_Supprimer->Location = System::Drawing::Point(588, 408);
			this->btn_Supprimer->Name = L"btn_Supprimer";
			this->btn_Supprimer->Size = System::Drawing::Size(101, 27);
			this->btn_Supprimer->TabIndex = 7;
			this->btn_Supprimer->Text = L"Supprimer";
			this->btn_Supprimer->UseVisualStyleBackColor = true;
			// 
			// lb_nom
			// 
			this->lb_nom->AutoSize = true;
			this->lb_nom->Location = System::Drawing::Point(75, 25);
			this->lb_nom->Name = L"lb_nom";
			this->lb_nom->Size = System::Drawing::Size(35, 17);
			this->lb_nom->TabIndex = 8;
			this->lb_nom->Text = L"nom";
			// 
			// lb_prenom
			// 
			this->lb_prenom->AutoSize = true;
			this->lb_prenom->Location = System::Drawing::Point(64, 79);
			this->lb_prenom->Name = L"lb_prenom";
			this->lb_prenom->Size = System::Drawing::Size(56, 17);
			this->lb_prenom->TabIndex = 9;
			this->lb_prenom->Text = L"prénom";
			// 
			// lb_date_embauche
			// 
			this->lb_date_embauche->AutoSize = true;
			this->lb_date_embauche->Location = System::Drawing::Point(39, 129);
			this->lb_date_embauche->Name = L"lb_date_embauche";
			this->lb_date_embauche->Size = System::Drawing::Size(117, 17);
			this->lb_date_embauche->TabIndex = 10;
			this->lb_date_embauche->Text = L"date d\'embauche";
			// 
			// lb_poste
			// 
			this->lb_poste->AutoSize = true;
			this->lb_poste->Location = System::Drawing::Point(75, 189);
			this->lb_poste->Name = L"lb_poste";
			this->lb_poste->Size = System::Drawing::Size(43, 17);
			this->lb_poste->TabIndex = 11;
			this->lb_poste->Text = L"poste";
			// 
			// Personnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(746, 464);
			this->Controls->Add(this->lb_poste);
			this->Controls->Add(this->lb_date_embauche);
			this->Controls->Add(this->lb_prenom);
			this->Controls->Add(this->lb_nom);
			this->Controls->Add(this->btn_Supprimer);
			this->Controls->Add(this->btn_Modifier);
			this->Controls->Add(this->btn_Ajouter);
			this->Controls->Add(this->dgv_personnel);
			this->Controls->Add(this->tb_superieur_hierarchique);
			this->Controls->Add(this->tb_date_embauche);
			this->Controls->Add(this->tb_prenom);
			this->Controls->Add(this->tb_nom);
			this->Name = L"Personnel";
			this->Text = L"Personnel";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_personnel))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

};
}


