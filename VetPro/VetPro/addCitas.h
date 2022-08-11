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

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ obs;
	private: System::Windows::Forms::DateTimePicker^ h_select;





	private: System::Windows::Forms::DateTimePicker^ f_select;

	private: System::Windows::Forms::ComboBox^ l_clientes;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ l_mascotas;



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
			this->obs = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->h_select = (gcnew System::Windows::Forms::DateTimePicker());
			this->f_select = (gcnew System::Windows::Forms::DateTimePicker());
			this->l_clientes = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->l_mascotas = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// obs
			// 
			this->obs->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->obs->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->obs->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->obs->Location = System::Drawing::Point(66, 390);
			this->obs->Margin = System::Windows::Forms::Padding(4);
			this->obs->Multiline = true;
			this->obs->Name = L"obs";
			this->obs->PasswordChar = '*';
			this->obs->Size = System::Drawing::Size(1487, 150);
			this->obs->TabIndex = 38;
			this->obs->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->obs->TextChanged += gcnew System::EventHandler(this, &addCitas::txt_observaciones_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(59, 330);
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
			this->label4->Location = System::Drawing::Point(59, 142);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(134, 42);
			this->label4->TabIndex = 37;
			this->label4->Text = L"Cliente";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->label3->Location = System::Drawing::Point(587, 9);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(446, 84);
			this->label3->TabIndex = 35;
			this->label3->Text = L"NUEVA CITA";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(1181, 241);
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
			this->label1->Location = System::Drawing::Point(822, 240);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(99, 42);
			this->label1->TabIndex = 33;
			this->label1->Text = L"Hora";
			this->label1->Click += gcnew System::EventHandler(this, &addCitas::label1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Yet R", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(619, 559);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(381, 84);
			this->button2->TabIndex = 32;
			this->button2->Text = L"REGISTRAR";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// h_select
			// 
			this->h_select->CustomFormat = L"hh:mm";
			this->h_select->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->h_select->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->h_select->Location = System::Drawing::Point(928, 243);
			this->h_select->Name = L"h_select";
			this->h_select->Size = System::Drawing::Size(232, 41);
			this->h_select->TabIndex = 40;
			// 
			// f_select
			// 
			this->f_select->CustomFormat = L"hh:mm";
			this->f_select->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->f_select->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->f_select->Location = System::Drawing::Point(1321, 243);
			this->f_select->Name = L"f_select";
			this->f_select->Size = System::Drawing::Size(232, 41);
			this->f_select->TabIndex = 41;
			// 
			// l_clientes
			// 
			this->l_clientes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l_clientes->FormattingEnabled = true;
			this->l_clientes->Location = System::Drawing::Point(236, 145);
			this->l_clientes->Name = L"l_clientes";
			this->l_clientes->Size = System::Drawing::Size(1317, 44);
			this->l_clientes->TabIndex = 42;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(59, 236);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(160, 42);
			this->label6->TabIndex = 43;
			this->label6->Text = L"Mascota";
			// 
			// l_mascotas
			// 
			this->l_mascotas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l_mascotas->FormattingEnabled = true;
			this->l_mascotas->Location = System::Drawing::Point(236, 238);
			this->l_mascotas->Name = L"l_mascotas";
			this->l_mascotas->Size = System::Drawing::Size(563, 44);
			this->l_mascotas->TabIndex = 44;
			// 
			// addCitas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1667, 677);
			this->Controls->Add(this->l_mascotas);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->l_clientes);
			this->Controls->Add(this->f_select);
			this->Controls->Add(this->h_select);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->obs);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Margin = System::Windows::Forms::Padding(4);
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
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
