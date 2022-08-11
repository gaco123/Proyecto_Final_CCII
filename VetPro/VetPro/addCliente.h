#pragma once

namespace VetPro {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de addCliente
	/// </summary>
	public ref class addCliente : public System::Windows::Forms::Form
	{
	public:
		addCliente(void)
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
		~addCliente()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label6;
	protected:
	private: System::Windows::Forms::TextBox^ txt_telefono;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_correo;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txt_apellidos;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::TextBox^ txt_nombres;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ slc_foto;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(addCliente::typeid));
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txt_telefono = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_correo = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txt_apellidos = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_nombres = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->slc_foto = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F));
			this->label6->Location = System::Drawing::Point(186, 480);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(174, 42);
			this->label6->TabIndex = 55;
			this->label6->Text = L"Telefono:";
			// 
			// txt_telefono
			// 
			this->txt_telefono->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_telefono->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_telefono->Location = System::Drawing::Point(400, 476);
			this->txt_telefono->Margin = System::Windows::Forms::Padding(4);
			this->txt_telefono->Name = L"txt_telefono";
			this->txt_telefono->PasswordChar = '*';
			this->txt_telefono->Size = System::Drawing::Size(509, 46);
			this->txt_telefono->TabIndex = 54;
			this->txt_telefono->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F));
			this->label1->Location = System::Drawing::Point(186, 378);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(142, 42);
			this->label1->TabIndex = 53;
			this->label1->Text = L"Correo:";
			// 
			// txt_correo
			// 
			this->txt_correo->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_correo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_correo->Location = System::Drawing::Point(400, 376);
			this->txt_correo->Margin = System::Windows::Forms::Padding(4);
			this->txt_correo->Name = L"txt_correo";
			this->txt_correo->PasswordChar = '*';
			this->txt_correo->Size = System::Drawing::Size(509, 46);
			this->txt_correo->TabIndex = 52;
			this->txt_correo->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F));
			this->label5->Location = System::Drawing::Point(186, 276);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(180, 42);
			this->label5->TabIndex = 51;
			this->label5->Text = L"Apellidos:";
			// 
			// txt_apellidos
			// 
			this->txt_apellidos->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_apellidos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_apellidos->Location = System::Drawing::Point(400, 274);
			this->txt_apellidos->Margin = System::Windows::Forms::Padding(4);
			this->txt_apellidos->Name = L"txt_apellidos";
			this->txt_apellidos->PasswordChar = '*';
			this->txt_apellidos->Size = System::Drawing::Size(509, 46);
			this->txt_apellidos->TabIndex = 50;
			this->txt_apellidos->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40.2F, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->label3->Location = System::Drawing::Point(475, 26);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(589, 80);
			this->label3->TabIndex = 49;
			this->label3->Text = L"NUEVO CLIENTE";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F));
			this->label2->Location = System::Drawing::Point(186, 174);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(179, 42);
			this->label2->TabIndex = 48;
			this->label2->Text = L"Nombres:";
			// 
			// txt_nombres
			// 
			this->txt_nombres->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_nombres->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_nombres->Location = System::Drawing::Point(400, 174);
			this->txt_nombres->Margin = System::Windows::Forms::Padding(4);
			this->txt_nombres->Name = L"txt_nombres";
			this->txt_nombres->PasswordChar = '*';
			this->txt_nombres->Size = System::Drawing::Size(509, 46);
			this->txt_nombres->TabIndex = 46;
			this->txt_nombres->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1051, 158);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(282, 282);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 45;
			this->pictureBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Yet R", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(430, 569);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(678, 84);
			this->button2->TabIndex = 56;
			this->button2->Text = L"REGISTRAR CLIENTE";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label4->Location = System::Drawing::Point(972, 484);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(201, 39);
			this->label4->TabIndex = 57;
			this->label4->Text = L"Subir Foto...";
			// 
			// slc_foto
			// 
			this->slc_foto->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->slc_foto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->slc_foto->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->slc_foto->Location = System::Drawing::Point(1179, 479);
			this->slc_foto->Name = L"slc_foto";
			this->slc_foto->Size = System::Drawing::Size(217, 51);
			this->slc_foto->TabIndex = 58;
			this->slc_foto->Text = L"Seleccionar";
			this->slc_foto->UseVisualStyleBackColor = false;
			// 
			// addCliente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1667, 677);
			this->Controls->Add(this->slc_foto);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txt_telefono);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_correo);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txt_apellidos);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txt_nombres);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"addCliente";
			this->Text = L"addCliente";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
