#pragma once
#include "BDD.h"
#include "Personnel.h"
#include "Client.h"

namespace Projet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_personnel;
	protected:

	protected:
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::Button^ btn_client;
	private: System::Windows::Forms::Button^ btn_articlestock;
	private: System::Windows::Forms::Button^ btn_statistique;





	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn_personnel = (gcnew System::Windows::Forms::Button());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->btn_client = (gcnew System::Windows::Forms::Button());
			this->btn_articlestock = (gcnew System::Windows::Forms::Button());
			this->btn_statistique = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_personnel
			// 
			this->btn_personnel->Location = System::Drawing::Point(55, 37);
			this->btn_personnel->Name = L"btn_personnel";
			this->btn_personnel->Size = System::Drawing::Size(254, 114);
			this->btn_personnel->TabIndex = 0;
			this->btn_personnel->Text = L"Personnel";
			this->btn_personnel->UseVisualStyleBackColor = true;
			this->btn_personnel->Click += gcnew System::EventHandler(this, &MyForm::btn_personnel_Click);
			// 
			// btn_client
			// 
			this->btn_client->Location = System::Drawing::Point(356, 37);
			this->btn_client->Name = L"btn_client";
			this->btn_client->Size = System::Drawing::Size(254, 114);
			this->btn_client->TabIndex = 1;
			this->btn_client->Text = L"Client";
			this->btn_client->UseVisualStyleBackColor = true;
			this->btn_client->Click += gcnew System::EventHandler(this, &MyForm::btn_client_Click);
			// 
			// btn_articlestock
			// 
			this->btn_articlestock->Location = System::Drawing::Point(55, 187);
			this->btn_articlestock->Name = L"btn_articlestock";
			this->btn_articlestock->Size = System::Drawing::Size(254, 120);
			this->btn_articlestock->TabIndex = 2;
			this->btn_articlestock->Text = L"Stock article";
			this->btn_articlestock->UseVisualStyleBackColor = true;
			// 
			// btn_statistique
			// 
			this->btn_statistique->Location = System::Drawing::Point(356, 187);
			this->btn_statistique->Name = L"btn_statistique";
			this->btn_statistique->Size = System::Drawing::Size(254, 120);
			this->btn_statistique->TabIndex = 3;
			this->btn_statistique->Text = L"Statistique";
			this->btn_statistique->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(664, 525);
			this->Controls->Add(this->btn_statistique);
			this->Controls->Add(this->btn_articlestock);
			this->Controls->Add(this->btn_client);
			this->Controls->Add(this->btn_personnel);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void btn_personnel_Click(System::Object^ sender, System::EventArgs^ e) {
		Personnel^ monPersonnel = gcnew Personnel();
		monPersonnel->Show();
		this->Hide();
	}


private: System::Void btn_client_Click(System::Object^ sender, System::EventArgs^ e) {
	Client^ monClient = gcnew Client();
	monClient->Show();
	this->Hide();
}
};
}
