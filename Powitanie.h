#pragma once
#include "Gra.h"

namespace Dragonid {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o Powitanie
	/// </summary>
	public ref class Powitanie : public System::Windows::Forms::Form
	{
	public:
		Powitanie(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~Powitanie()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  btnGraj;


	protected:

	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Wymagana metoda obs³ugi projektanta — nie nale¿y modyfikowaæ 
		/// zawartoœæ tej metody z edytorem kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Powitanie::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnGraj = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Viner Hand ITC", 45, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Gold;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->MaximumSize = System::Drawing::Size(300, 100);
			this->label1->MinimumSize = System::Drawing::Size(380, 120);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(380, 120);
			this->label1->TabIndex = 0;
			this->label1->Text = L"DRAGONID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label2->Font = (gcnew System::Drawing::Font(L"Viner Hand ITC", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Gold;
			this->label2->Location = System::Drawing::Point(518, 724);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(254, 34);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Autor: Piotr Bielañski";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Viner Hand ITC", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Gold;
			this->label3->Location = System::Drawing::Point(538, 758);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(234, 34);
			this->label3->TabIndex = 2;
			this->label3->Text = L"WSTI Katowice 2019";
			// 
			// btnGraj
			// 
			this->btnGraj->BackColor = System::Drawing::Color::Transparent;
			this->btnGraj->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnGraj->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnGraj->Font = (gcnew System::Drawing::Font(L"Viner Hand ITC", 24.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnGraj->ForeColor = System::Drawing::Color::Gold;
			this->btnGraj->Location = System::Drawing::Point(29, 671);
			this->btnGraj->Name = L"btnGraj";
			this->btnGraj->Size = System::Drawing::Size(180, 87);
			this->btnGraj->TabIndex = 3;
			this->btnGraj->Text = L"GRAJ";
			this->btnGraj->UseVisualStyleBackColor = false;
			this->btnGraj->Click += gcnew System::EventHandler(this, &Powitanie::button1_Click);
			// 
			// Powitanie
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(784, 801);
			this->Controls->Add(this->btnGraj);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Powitanie";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DRAGONID";
			this->TransparencyKey = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Load += gcnew System::EventHandler(this, &Powitanie::Powitanie_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Powitanie_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Gra^ graj = gcnew Gra;
		graj->Show();
		this->Close();
	}
};
}
