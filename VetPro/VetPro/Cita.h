#pragma once
#pragma once

#include "addCitas.h"
namespace VetPro {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class Cita : public System::Windows::Forms::Form
	{
	public:
		Cita(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Cita()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ n_cita;
	private: System::Windows::Forms::Label^ label3;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->n_cita = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// n_cita
			// 
			this->n_cita->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->n_cita->Font = (gcnew System::Drawing::Font(L"Yet R", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->n_cita->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->n_cita->Location = System::Drawing::Point(1393, 36);
			this->n_cita->Name = L"n_cita";
			this->n_cita->Size = System::Drawing::Size(262, 79);
			this->n_cita->TabIndex = 0;
			this->n_cita->Text = L"NUEVA\r\nCITA";
			this->n_cita->UseVisualStyleBackColor = false;
			this->n_cita->Click += gcnew System::EventHandler(this, &Cita::n_cita_Click);
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->label3->Location = System::Drawing::Point(526, 36);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(466, 162);
			this->label3->TabIndex = 36;
			this->label3->Text = L"CITAS DEL\r\nDÍA";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Cita
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1667, 677);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->n_cita);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Cita";
			this->Text = L"Citas";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void n_cita_Click(System::Object^ sender, System::EventArgs^ e) {
		VetPro::addCitas^ nuevo_Ci = gcnew VetPro::addCitas();
		nuevo_Ci->ShowDialog();
	}
	};
}