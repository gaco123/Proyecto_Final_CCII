#pragma once

namespace VetPro {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de addMascota
	/// </summary>
	public ref class addMascota : public System::Windows::Forms::Form
	{
	public:
		addMascota(void)
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
		~addMascota()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label11;
	protected:
	private: System::Windows::Forms::TextBox^ txt_observaciones;




	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txt_raza;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_especia;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ txt_nombres;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::DateTimePicker^ nace_time;
	private: System::Windows::Forms::GroupBox^ VacP_GB;
	private: System::Windows::Forms::RadioButton^ N_P;


	private: System::Windows::Forms::RadioButton^ S_P;

	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ N_D;

	private: System::Windows::Forms::RadioButton^ S_D;

	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::RadioButton^ N_R;

	private: System::Windows::Forms::RadioButton^ S_R;

	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::RadioButton^ N_H;

	private: System::Windows::Forms::RadioButton^ S_H;
	private: System::Windows::Forms::Button^ slc_foto;
	private: System::Windows::Forms::Label^ label7;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(addMascota::typeid));
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txt_observaciones = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txt_raza = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_especia = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->txt_nombres = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->nace_time = (gcnew System::Windows::Forms::DateTimePicker());
			this->VacP_GB = (gcnew System::Windows::Forms::GroupBox());
			this->N_P = (gcnew System::Windows::Forms::RadioButton());
			this->S_P = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->N_D = (gcnew System::Windows::Forms::RadioButton());
			this->S_D = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->N_R = (gcnew System::Windows::Forms::RadioButton());
			this->S_R = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->N_H = (gcnew System::Windows::Forms::RadioButton());
			this->S_H = (gcnew System::Windows::Forms::RadioButton());
			this->slc_foto = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->VacP_GB->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F));
			this->label11->Location = System::Drawing::Point(69, 736);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(279, 42);
			this->label11->TabIndex = 73;
			this->label11->Text = L"Observaciones:";
			// 
			// txt_observaciones
			// 
			this->txt_observaciones->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_observaciones->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->txt_observaciones->Location = System::Drawing::Point(75, 782);
			this->txt_observaciones->Margin = System::Windows::Forms::Padding(4);
			this->txt_observaciones->Multiline = true;
			this->txt_observaciones->Name = L"txt_observaciones";
			this->txt_observaciones->PasswordChar = '*';
			this->txt_observaciones->Size = System::Drawing::Size(1487, 150);
			this->txt_observaciones->TabIndex = 72;
			this->txt_observaciones->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F));
			this->label6->Location = System::Drawing::Point(69, 483);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(116, 42);
			this->label6->TabIndex = 67;
			this->label6->Text = L"Raza:";
			// 
			// txt_raza
			// 
			this->txt_raza->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_raza->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->txt_raza->Location = System::Drawing::Point(261, 487);
			this->txt_raza->Margin = System::Windows::Forms::Padding(4);
			this->txt_raza->Name = L"txt_raza";
			this->txt_raza->PasswordChar = '*';
			this->txt_raza->Size = System::Drawing::Size(593, 38);
			this->txt_raza->TabIndex = 66;
			this->txt_raza->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F));
			this->label1->Location = System::Drawing::Point(68, 368);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(172, 42);
			this->label1->TabIndex = 65;
			this->label1->Text = L"Especie: ";
			// 
			// txt_especia
			// 
			this->txt_especia->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_especia->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->txt_especia->Location = System::Drawing::Point(261, 372);
			this->txt_especia->Margin = System::Windows::Forms::Padding(4);
			this->txt_especia->Name = L"txt_especia";
			this->txt_especia->PasswordChar = '*';
			this->txt_especia->Size = System::Drawing::Size(593, 38);
			this->txt_especia->TabIndex = 64;
			this->txt_especia->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F));
			this->label5->Location = System::Drawing::Point(888, 487);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(214, 42);
			this->label5->TabIndex = 63;
			this->label5->Text = L"Nacimiento:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F));
			this->label4->Location = System::Drawing::Point(68, 138);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(139, 42);
			this->label4->TabIndex = 61;
			this->label4->Text = L"Dueño:";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40.2F, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->label3->Location = System::Drawing::Point(653, 11);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(333, 86);
			this->label3->TabIndex = 59;
			this->label3->Text = L"Mascotas";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F));
			this->label2->Location = System::Drawing::Point(68, 253);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(179, 42);
			this->label2->TabIndex = 58;
			this->label2->Text = L"Nombres:";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Yet R", 24, System::Drawing::FontStyle::Bold));
			this->button2->Location = System::Drawing::Point(533, 960);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(569, 82);
			this->button2->TabIndex = 57;
			this->button2->Text = L"Registrar";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// txt_nombres
			// 
			this->txt_nombres->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_nombres->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->txt_nombres->Location = System::Drawing::Point(261, 257);
			this->txt_nombres->Margin = System::Windows::Forms::Padding(4);
			this->txt_nombres->Name = L"txt_nombres";
			this->txt_nombres->PasswordChar = '*';
			this->txt_nombres->Size = System::Drawing::Size(593, 38);
			this->txt_nombres->TabIndex = 56;
			this->txt_nombres->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1087, 73);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(275, 281);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 55;
			this->pictureBox1->TabStop = false;
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(261, 139);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(593, 46);
			this->comboBox1->TabIndex = 74;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &addMascota::comboBox1_SelectedIndexChanged);
			// 
			// nace_time
			// 
			this->nace_time->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->nace_time->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->nace_time->Location = System::Drawing::Point(1157, 487);
			this->nace_time->MaxDate = System::DateTime(2200, 12, 31, 0, 0, 0, 0);
			this->nace_time->MinDate = System::DateTime(2000, 1, 1, 0, 0, 0, 0);
			this->nace_time->Name = L"nace_time";
			this->nace_time->Size = System::Drawing::Size(389, 45);
			this->nace_time->TabIndex = 75;
			this->nace_time->ValueChanged += gcnew System::EventHandler(this, &addMascota::nace_time_ValueChanged);
			// 
			// VacP_GB
			// 
			this->VacP_GB->Controls->Add(this->N_P);
			this->VacP_GB->Controls->Add(this->S_P);
			this->VacP_GB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22));
			this->VacP_GB->Location = System::Drawing::Point(60, 589);
			this->VacP_GB->Name = L"VacP_GB";
			this->VacP_GB->Size = System::Drawing::Size(360, 128);
			this->VacP_GB->TabIndex = 76;
			this->VacP_GB->TabStop = false;
			this->VacP_GB->Text = L"Vacuna Parvovirus";
			// 
			// N_P
			// 
			this->N_P->AutoSize = true;
			this->N_P->Location = System::Drawing::Point(237, 58);
			this->N_P->Name = L"N_P";
			this->N_P->Size = System::Drawing::Size(87, 46);
			this->N_P->TabIndex = 1;
			this->N_P->TabStop = true;
			this->N_P->Text = L"No";
			this->N_P->UseVisualStyleBackColor = true;
			// 
			// S_P
			// 
			this->S_P->AutoSize = true;
			this->S_P->Location = System::Drawing::Point(6, 58);
			this->S_P->Name = L"S_P";
			this->S_P->Size = System::Drawing::Size(72, 46);
			this->S_P->TabIndex = 0;
			this->S_P->TabStop = true;
			this->S_P->Text = L"Sí";
			this->S_P->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->N_D);
			this->groupBox2->Controls->Add(this->S_D);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22));
			this->groupBox2->Location = System::Drawing::Point(478, 589);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(360, 128);
			this->groupBox2->TabIndex = 77;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Vacuna Distemper";
			// 
			// N_D
			// 
			this->N_D->AutoSize = true;
			this->N_D->Location = System::Drawing::Point(237, 58);
			this->N_D->Name = L"N_D";
			this->N_D->Size = System::Drawing::Size(87, 46);
			this->N_D->TabIndex = 1;
			this->N_D->TabStop = true;
			this->N_D->Text = L"No";
			this->N_D->UseVisualStyleBackColor = true;
			// 
			// S_D
			// 
			this->S_D->AutoSize = true;
			this->S_D->Location = System::Drawing::Point(6, 58);
			this->S_D->Name = L"S_D";
			this->S_D->Size = System::Drawing::Size(72, 46);
			this->S_D->TabIndex = 0;
			this->S_D->TabStop = true;
			this->S_D->Text = L"Sí";
			this->S_D->UseVisualStyleBackColor = true;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->N_R);
			this->groupBox3->Controls->Add(this->S_R);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22));
			this->groupBox3->Location = System::Drawing::Point(896, 589);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(284, 128);
			this->groupBox3->TabIndex = 77;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Vacuna Rabia";
			// 
			// N_R
			// 
			this->N_R->AutoSize = true;
			this->N_R->Location = System::Drawing::Point(191, 58);
			this->N_R->Name = L"N_R";
			this->N_R->Size = System::Drawing::Size(87, 46);
			this->N_R->TabIndex = 1;
			this->N_R->TabStop = true;
			this->N_R->Text = L"No";
			this->N_R->UseVisualStyleBackColor = true;
			// 
			// S_R
			// 
			this->S_R->AutoSize = true;
			this->S_R->Location = System::Drawing::Point(6, 58);
			this->S_R->Name = L"S_R";
			this->S_R->Size = System::Drawing::Size(72, 46);
			this->S_R->TabIndex = 0;
			this->S_R->TabStop = true;
			this->S_R->Text = L"Sí";
			this->S_R->UseVisualStyleBackColor = true;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->N_H);
			this->groupBox4->Controls->Add(this->S_H);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22));
			this->groupBox4->Location = System::Drawing::Point(1238, 589);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(360, 128);
			this->groupBox4->TabIndex = 78;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Vacuna Hepatítis";
			// 
			// N_H
			// 
			this->N_H->AutoSize = true;
			this->N_H->Location = System::Drawing::Point(221, 58);
			this->N_H->Name = L"N_H";
			this->N_H->Size = System::Drawing::Size(87, 46);
			this->N_H->TabIndex = 1;
			this->N_H->TabStop = true;
			this->N_H->Text = L"No";
			this->N_H->UseVisualStyleBackColor = true;
			// 
			// S_H
			// 
			this->S_H->AutoSize = true;
			this->S_H->Location = System::Drawing::Point(6, 58);
			this->S_H->Name = L"S_H";
			this->S_H->Size = System::Drawing::Size(72, 46);
			this->S_H->TabIndex = 0;
			this->S_H->TabStop = true;
			this->S_H->Text = L"Sí";
			this->S_H->UseVisualStyleBackColor = true;
			// 
			// slc_foto
			// 
			this->slc_foto->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->slc_foto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->slc_foto->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->slc_foto->Location = System::Drawing::Point(1220, 396);
			this->slc_foto->Name = L"slc_foto";
			this->slc_foto->Size = System::Drawing::Size(217, 51);
			this->slc_foto->TabIndex = 80;
			this->slc_foto->Text = L"Seleccionar";
			this->slc_foto->UseVisualStyleBackColor = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label7->Location = System::Drawing::Point(1013, 401);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(201, 39);
			this->label7->TabIndex = 79;
			this->label7->Text = L"Subir Foto...";
			// 
			// addMascota
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1667, 677);
			this->Controls->Add(this->slc_foto);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->VacP_GB);
			this->Controls->Add(this->nace_time);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->txt_observaciones);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txt_raza);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_especia);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->txt_nombres);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"addMascota";
			this->Text = L"addMascota";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->VacP_GB->ResumeLayout(false);
			this->VacP_GB->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void nace_time_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
