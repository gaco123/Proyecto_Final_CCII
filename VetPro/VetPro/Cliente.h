#pragma once
#include "addCliente.h"
#include "addMascota.h"

namespace VetPro {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Cliente : public System::Windows::Forms::Form {
	public:
		Cliente(void) {
			InitializeComponent();
		}

	protected:
		~Cliente() {
			if (components) {
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ n_clie;
	private: System::Windows::Forms::Button^ n_masco;

	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void) {
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->n_clie = (gcnew System::Windows::Forms::Button());
			this->n_masco = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->label3->Location = System::Drawing::Point(476, 27);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(234, 64);
			this->label3->TabIndex = 38;
			this->label3->Text = L"Clientes";
			// 
			// n_clie
			// 
			this->n_clie->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->n_clie->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold));
			this->n_clie->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->n_clie->Location = System::Drawing::Point(1005, 125);
			this->n_clie->Margin = System::Windows::Forms::Padding(2);
			this->n_clie->Name = L"n_clie";
			this->n_clie->Size = System::Drawing::Size(196, 64);
			this->n_clie->TabIndex = 37;
			this->n_clie->Text = L"Nuevo Cliente";
			this->n_clie->UseVisualStyleBackColor = false;
			this->n_clie->Click += gcnew System::EventHandler(this, &Cliente::n_clie_Click);
			// 
			// n_masco
			// 
			this->n_masco->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->n_masco->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold));
			this->n_masco->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->n_masco->Location = System::Drawing::Point(1005, 38);
			this->n_masco->Margin = System::Windows::Forms::Padding(2);
			this->n_masco->Name = L"n_masco";
			this->n_masco->Size = System::Drawing::Size(196, 64);
			this->n_masco->TabIndex = 39;
			this->n_masco->Text = L"Nueva Mascota";
			this->n_masco->UseVisualStyleBackColor = false;
			this->n_masco->Click += gcnew System::EventHandler(this, &Cliente::n_masco_Click);
			// 
			// Cliente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1250, 550);
			this->Controls->Add(this->n_masco);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->n_clie);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Cliente";
			this->Text = L"Cliente";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void n_clie_Click(System::Object^ sender, System::EventArgs^ e) {
		VetPro::addCliente^ nuevo_Ci = gcnew VetPro::addCliente();
		nuevo_Ci->ShowDialog();
	}
	private: System::Void n_masco_Click(System::Object^ sender, System::EventArgs^ e) {
		VetPro::addMascota^ nuevo_Ci = gcnew VetPro::addMascota();
		nuevo_Ci->ShowDialog();
	}
};
}