#pragma once
#include "Main_menu.h"
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
	public ref class addCitas : public System::Windows::Forms::Form
	{
	public:
		addCitas(void)
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
		~addCitas()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label5;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txt_id;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ txt_nombres;
	private: System::Windows::Forms::TextBox^ txt_usuario;
	private: System::Windows::Forms::TextBox^ txt_observaciones;


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
			this->txt_observaciones = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt_id = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->txt_nombres = (gcnew System::Windows::Forms::TextBox());
			this->txt_usuario = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// txt_observaciones
			// 
			this->txt_observaciones->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txt_observaciones->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_observaciones->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txt_observaciones->Location = System::Drawing::Point(102, 361);
			this->txt_observaciones->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_observaciones->Multiline = true;
			this->txt_observaciones->Name = L"txt_observaciones";
			this->txt_observaciones->PasswordChar = '*';
			this->txt_observaciones->Size = System::Drawing::Size(1487, 150);
			this->txt_observaciones->TabIndex = 38;
			this->txt_observaciones->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txt_observaciones->TextChanged += gcnew System::EventHandler(this, &addCitas::txt_observaciones_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(95, 302);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(279, 42);
			this->label5->TabIndex = 39;
			this->label5->Text = L"Observaciones:";
			this->label5->Click += gcnew System::EventHandler(this, &addCitas::label5_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(95, 84);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 42);
			this->label4->TabIndex = 37;
			this->label4->Text = L"Id:";
			// 
			// txt_id
			// 
			this->txt_id->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_id->Location = System::Drawing::Point(97, 84);
			this->txt_id->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_id->Name = L"txt_id";
			this->txt_id->Size = System::Drawing::Size(132, 15);
			this->txt_id->TabIndex = 36;
			this->txt_id->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(32, 25);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(169, 34);
			this->label3->TabIndex = 35;
			this->label3->Text = L"Citas";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(603, 237);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(133, 42);
			this->label2->TabIndex = 34;
			this->label2->Text = L"Fecha:";
			this->label2->Click += gcnew System::EventHandler(this, &addCitas::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(95, 235);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(99, 42);
			this->label1->TabIndex = 33;
			this->label1->Text = L"Hora";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Yet R", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(391, 556);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(381, 84);
			this->button2->TabIndex = 32;
			this->button2->Text = L"REGISTRAR";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// txt_nombres
			// 
			this->txt_nombres->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_nombres->Location = System::Drawing::Point(744, 247);
			this->txt_nombres->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_nombres->Name = L"txt_nombres";
			this->txt_nombres->PasswordChar = '*';
			this->txt_nombres->Size = System::Drawing::Size(121, 15);
			this->txt_nombres->TabIndex = 31;
			this->txt_nombres->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txt_nombres->TextChanged += gcnew System::EventHandler(this, &addCitas::txt_nombres_TextChanged);
			// 
			// txt_usuario
			// 
			this->txt_usuario->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_usuario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_usuario->Location = System::Drawing::Point(202, 247);
			this->txt_usuario->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_usuario->Name = L"txt_usuario";
			this->txt_usuario->Size = System::Drawing::Size(231, 27);
			this->txt_usuario->TabIndex = 30;
			this->txt_usuario->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// addCitas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1667, 677);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txt_observaciones);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txt_id);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->txt_nombres);
			this->Controls->Add(this->txt_usuario);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"addCitas";
			this->Text = L"Citas";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void txt_nombres_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void txt_observaciones_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
