#pragma once

namespace VetPro {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Drawing2D;
	using namespace System::Text;
	using namespace System::IO;;
	using namespace System::Threading;
	using namespace System::Threading::Tasks;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Resumen de addMascota
	/// </summary>
	public ref class addMascota : public System::Windows::Forms::Form {
	public:
		addMascota(void) {
			InitializeComponent();
			//Insertar los nombres de los clientes en una list para agregarlos al ComboBox box_Dueños
			String^ sql = "SELECT `Nombres` FROM `veterinaria`.`clientes`";
			MySqlCommand^ cursor = gcnew MySqlCommand(sql, conn);
			MySqlDataReader^ dataReader;
			try {
				this->conn->Open();
				dataReader = cursor->ExecuteReader();
				if (dataReader->HasRows) {
					while (dataReader->Read()) {
						listaclientes->Add(dataReader[0]->ToString());
					}
				}
				else {
					MessageBox::Show(L"No existen clientes registrados");
				}
			}
			catch (Exception^ x) {
				MessageBox::Show(x->Message);
			}
			this->conn->Close();
			for each (String^ cliente in listaclientes){
				this->box_Dueños->Items->Add(cliente);
			}

			//Cambia la forma de la imagen del cliente de un cuadrado a un elipse
			GraphicsPath^ ap = gcnew System::Drawing::Drawing2D::GraphicsPath();
			ap->AddEllipse(this->masc_Picture->DisplayRectangle);
			this->masc_Picture->Region = gcnew System::Drawing::Region(ap);
		}

	protected:
		~addMascota() {
			if (components) {
				delete components;
			}
		}

	private: String^ connectionString = "datasource=localhost; username=root; password=1234; database=veterinaria";
	private: MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ txt_observaciones;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txt_raza;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_especie;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ txt_nombres;
	private: System::Windows::Forms::PictureBox^ masc_Picture;
	private: System::Windows::Forms::ComboBox^ box_Dueños;
	private: System::Windows::Forms::DateTimePicker^ nace_time;
	private: System::Windows::Forms::GroupBox^ VacP_GB;
	private: System::Windows::Forms::RadioButton^ N_P;
	private: System::Windows::Forms::RadioButton^ S_P;
	private: System::Windows::Forms::GroupBox^ VacD_GB;
	private: System::Windows::Forms::RadioButton^ N_D;
	private: System::Windows::Forms::RadioButton^ S_D;
	private: System::Windows::Forms::GroupBox^ VacR_GB;
	private: System::Windows::Forms::RadioButton^ N_R;
	private: System::Windows::Forms::RadioButton^ S_R;
	private: System::Windows::Forms::GroupBox^ VacH_GB;
	private: System::Windows::Forms::RadioButton^ N_H;
	private: System::Windows::Forms::RadioButton^ S_H;
	private: System::Windows::Forms::Button^ slc_foto;
	private: System::Windows::Forms::Label^ label7;

	private: System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void) {
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(addMascota::typeid));
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txt_observaciones = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txt_raza = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_especie = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->txt_nombres = (gcnew System::Windows::Forms::TextBox());
			this->masc_Picture = (gcnew System::Windows::Forms::PictureBox());
			this->box_Dueños = (gcnew System::Windows::Forms::ComboBox());
			this->nace_time = (gcnew System::Windows::Forms::DateTimePicker());
			this->VacP_GB = (gcnew System::Windows::Forms::GroupBox());
			this->N_P = (gcnew System::Windows::Forms::RadioButton());
			this->S_P = (gcnew System::Windows::Forms::RadioButton());
			this->VacD_GB = (gcnew System::Windows::Forms::GroupBox());
			this->N_D = (gcnew System::Windows::Forms::RadioButton());
			this->S_D = (gcnew System::Windows::Forms::RadioButton());
			this->VacR_GB = (gcnew System::Windows::Forms::GroupBox());
			this->N_R = (gcnew System::Windows::Forms::RadioButton());
			this->S_R = (gcnew System::Windows::Forms::RadioButton());
			this->VacH_GB = (gcnew System::Windows::Forms::GroupBox());
			this->N_H = (gcnew System::Windows::Forms::RadioButton());
			this->S_H = (gcnew System::Windows::Forms::RadioButton());
			this->slc_foto = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->masc_Picture))->BeginInit();
			this->VacP_GB->SuspendLayout();
			this->VacD_GB->SuspendLayout();
			this->VacR_GB->SuspendLayout();
			this->VacH_GB->SuspendLayout();
			this->SuspendLayout();
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F));
			this->label11->Location = System::Drawing::Point(73, 582);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(221, 36);
			this->label11->TabIndex = 73;
			this->label11->Text = L"Observaciones:";
			// 
			// txt_observaciones
			// 
			this->txt_observaciones->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_observaciones->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->txt_observaciones->Location = System::Drawing::Point(79, 634);
			this->txt_observaciones->Multiline = true;
			this->txt_observaciones->Name = L"txt_observaciones";
			this->txt_observaciones->Size = System::Drawing::Size(1201, 122);
			this->txt_observaciones->TabIndex = 72;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F));
			this->label6->Location = System::Drawing::Point(84, 364);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(92, 36);
			this->label6->TabIndex = 67;
			this->label6->Text = L"Raza:";
			// 
			// txt_raza
			// 
			this->txt_raza->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_raza->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->txt_raza->Location = System::Drawing::Point(261, 367);
			this->txt_raza->Name = L"txt_raza";
			this->txt_raza->Size = System::Drawing::Size(445, 31);
			this->txt_raza->TabIndex = 66;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F));
			this->label1->Location = System::Drawing::Point(83, 276);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(137, 36);
			this->label1->TabIndex = 65;
			this->label1->Text = L"Especie: ";
			// 
			// txt_especie
			// 
			this->txt_especie->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_especie->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->txt_especie->Location = System::Drawing::Point(261, 281);
			this->txt_especie->Name = L"txt_especie";
			this->txt_especie->Size = System::Drawing::Size(445, 31);
			this->txt_especie->TabIndex = 64;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22));
			this->label5->Location = System::Drawing::Point(837, 386);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(171, 36);
			this->label5->TabIndex = 63;
			this->label5->Text = L"Nacimiento:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F));
			this->label4->Location = System::Drawing::Point(83, 112);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(111, 36);
			this->label4->TabIndex = 61;
			this->label4->Text = L"Dueño:";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40.2F, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->label3->Location = System::Drawing::Point(491, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(416, 70);
			this->label3->TabIndex = 59;
			this->label3->Text = L"Nueva Mascota";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F));
			this->label2->Location = System::Drawing::Point(83, 194);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(143, 36);
			this->label2->TabIndex = 58;
			this->label2->Text = L"Nombres:";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(466, 777);
			this->button2->Margin = System::Windows::Forms::Padding(0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(427, 67);
			this->button2->TabIndex = 57;
			this->button2->Text = L"Registrar Mascota";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &addMascota::button2_Click);
			// 
			// txt_nombres
			// 
			this->txt_nombres->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_nombres->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->txt_nombres->Location = System::Drawing::Point(261, 197);
			this->txt_nombres->Name = L"txt_nombres";
			this->txt_nombres->Size = System::Drawing::Size(445, 31);
			this->txt_nombres->TabIndex = 56;
			// 
			// masc_Picture
			// 
			this->masc_Picture->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"masc_Picture.Image")));
			this->masc_Picture->Location = System::Drawing::Point(916, 82);
			this->masc_Picture->Name = L"masc_Picture";
			this->masc_Picture->Size = System::Drawing::Size(206, 228);
			this->masc_Picture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->masc_Picture->TabIndex = 55;
			this->masc_Picture->TabStop = false;
			// 
			// box_Dueños
			// 
			this->box_Dueños->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->box_Dueños->FormattingEnabled = true;
			this->box_Dueños->Location = System::Drawing::Point(260, 112);
			this->box_Dueños->Margin = System::Windows::Forms::Padding(2);
			this->box_Dueños->Name = L"box_Dueños";
			this->box_Dueños->Size = System::Drawing::Size(446, 39);
			this->box_Dueños->TabIndex = 74;
			// 
			// nace_time
			// 
			this->nace_time->CustomFormat = L"yyyy-MM-dd";
			this->nace_time->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->nace_time->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->nace_time->Location = System::Drawing::Point(1036, 384);
			this->nace_time->Margin = System::Windows::Forms::Padding(2);
			this->nace_time->MaxDate = System::DateTime(2200, 12, 31, 0, 0, 0, 0);
			this->nace_time->MinDate = System::DateTime(1900, 1, 1, 0, 0, 0, 0);
			this->nace_time->Name = L"nace_time";
			this->nace_time->Size = System::Drawing::Size(186, 38);
			this->nace_time->TabIndex = 75;
			this->nace_time->Value = System::DateTime(2022, 8, 16, 0, 0, 0, 0);
			// 
			// VacP_GB
			// 
			this->VacP_GB->Controls->Add(this->N_P);
			this->VacP_GB->Controls->Add(this->S_P);
			this->VacP_GB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->VacP_GB->Location = System::Drawing::Point(87, 472);
			this->VacP_GB->Margin = System::Windows::Forms::Padding(2);
			this->VacP_GB->Name = L"VacP_GB";
			this->VacP_GB->Padding = System::Windows::Forms::Padding(2);
			this->VacP_GB->Size = System::Drawing::Size(224, 104);
			this->VacP_GB->TabIndex = 76;
			this->VacP_GB->TabStop = false;
			this->VacP_GB->Text = L"Vacuna Parvovirus";
			// 
			// N_P
			// 
			this->N_P->AutoSize = true;
			this->N_P->Location = System::Drawing::Point(151, 47);
			this->N_P->Margin = System::Windows::Forms::Padding(2);
			this->N_P->Name = L"N_P";
			this->N_P->Size = System::Drawing::Size(63, 33);
			this->N_P->TabIndex = 1;
			this->N_P->Text = L"No";
			this->N_P->UseVisualStyleBackColor = true;
			// 
			// S_P
			// 
			this->S_P->AutoSize = true;
			this->S_P->Location = System::Drawing::Point(4, 47);
			this->S_P->Margin = System::Windows::Forms::Padding(2);
			this->S_P->Name = L"S_P";
			this->S_P->Size = System::Drawing::Size(53, 33);
			this->S_P->TabIndex = 0;
			this->S_P->Text = L"Sí";
			this->S_P->UseVisualStyleBackColor = true;
			// 
			// VacD_GB
			// 
			this->VacD_GB->Controls->Add(this->N_D);
			this->VacD_GB->Controls->Add(this->S_D);
			this->VacD_GB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->VacD_GB->Location = System::Drawing::Point(400, 472);
			this->VacD_GB->Margin = System::Windows::Forms::Padding(2);
			this->VacD_GB->Name = L"VacD_GB";
			this->VacD_GB->Padding = System::Windows::Forms::Padding(2);
			this->VacD_GB->Size = System::Drawing::Size(224, 104);
			this->VacD_GB->TabIndex = 77;
			this->VacD_GB->TabStop = false;
			this->VacD_GB->Text = L"Vacuna Distemper";
			// 
			// N_D
			// 
			this->N_D->AutoSize = true;
			this->N_D->Location = System::Drawing::Point(141, 47);
			this->N_D->Margin = System::Windows::Forms::Padding(2);
			this->N_D->Name = L"N_D";
			this->N_D->Size = System::Drawing::Size(63, 33);
			this->N_D->TabIndex = 1;
			this->N_D->TabStop = true;
			this->N_D->Text = L"No";
			this->N_D->UseVisualStyleBackColor = true;
			// 
			// S_D
			// 
			this->S_D->AutoSize = true;
			this->S_D->Location = System::Drawing::Point(4, 47);
			this->S_D->Margin = System::Windows::Forms::Padding(2);
			this->S_D->Name = L"S_D";
			this->S_D->Size = System::Drawing::Size(53, 33);
			this->S_D->TabIndex = 0;
			this->S_D->TabStop = true;
			this->S_D->Text = L"Sí";
			this->S_D->UseVisualStyleBackColor = true;
			// 
			// VacR_GB
			// 
			this->VacR_GB->Controls->Add(this->N_R);
			this->VacR_GB->Controls->Add(this->S_R);
			this->VacR_GB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->VacR_GB->Location = System::Drawing::Point(714, 472);
			this->VacR_GB->Margin = System::Windows::Forms::Padding(2);
			this->VacR_GB->Name = L"VacR_GB";
			this->VacR_GB->Padding = System::Windows::Forms::Padding(2);
			this->VacR_GB->Size = System::Drawing::Size(184, 104);
			this->VacR_GB->TabIndex = 77;
			this->VacR_GB->TabStop = false;
			this->VacR_GB->Text = L"Vacuna Rabia";
			// 
			// N_R
			// 
			this->N_R->AutoSize = true;
			this->N_R->Location = System::Drawing::Point(116, 47);
			this->N_R->Margin = System::Windows::Forms::Padding(2);
			this->N_R->Name = L"N_R";
			this->N_R->Size = System::Drawing::Size(63, 33);
			this->N_R->TabIndex = 1;
			this->N_R->TabStop = true;
			this->N_R->Text = L"No";
			this->N_R->UseVisualStyleBackColor = true;
			// 
			// S_R
			// 
			this->S_R->AutoSize = true;
			this->S_R->Location = System::Drawing::Point(4, 47);
			this->S_R->Margin = System::Windows::Forms::Padding(2);
			this->S_R->Name = L"S_R";
			this->S_R->Size = System::Drawing::Size(53, 33);
			this->S_R->TabIndex = 0;
			this->S_R->TabStop = true;
			this->S_R->Text = L"Sí";
			this->S_R->UseVisualStyleBackColor = true;
			// 
			// VacH_GB
			// 
			this->VacH_GB->Controls->Add(this->N_H);
			this->VacH_GB->Controls->Add(this->S_H);
			this->VacH_GB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->VacH_GB->Location = System::Drawing::Point(970, 472);
			this->VacH_GB->Margin = System::Windows::Forms::Padding(2);
			this->VacH_GB->Name = L"VacH_GB";
			this->VacH_GB->Padding = System::Windows::Forms::Padding(2);
			this->VacH_GB->Size = System::Drawing::Size(270, 104);
			this->VacH_GB->TabIndex = 78;
			this->VacH_GB->TabStop = false;
			this->VacH_GB->Text = L"Vacuna Hepatítis";
			// 
			// N_H
			// 
			this->N_H->AutoSize = true;
			this->N_H->Location = System::Drawing::Point(166, 47);
			this->N_H->Margin = System::Windows::Forms::Padding(2);
			this->N_H->Name = L"N_H";
			this->N_H->Size = System::Drawing::Size(63, 33);
			this->N_H->TabIndex = 1;
			this->N_H->TabStop = true;
			this->N_H->Text = L"No";
			this->N_H->UseVisualStyleBackColor = true;
			// 
			// S_H
			// 
			this->S_H->AutoSize = true;
			this->S_H->Location = System::Drawing::Point(4, 47);
			this->S_H->Margin = System::Windows::Forms::Padding(2);
			this->S_H->Name = L"S_H";
			this->S_H->Size = System::Drawing::Size(53, 33);
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
			this->slc_foto->Location = System::Drawing::Point(1036, 323);
			this->slc_foto->Margin = System::Windows::Forms::Padding(2);
			this->slc_foto->Name = L"slc_foto";
			this->slc_foto->Size = System::Drawing::Size(163, 41);
			this->slc_foto->TabIndex = 80;
			this->slc_foto->Text = L"Seleccionar";
			this->slc_foto->UseVisualStyleBackColor = false;
			this->slc_foto->Click += gcnew System::EventHandler(this, &addMascota::slc_foto_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label7->Location = System::Drawing::Point(862, 326);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(163, 31);
			this->label7->TabIndex = 79;
			this->label7->Text = L"Subir Foto...";
			// 
			// addMascota
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1381, 550);
			this->Controls->Add(this->slc_foto);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->VacH_GB);
			this->Controls->Add(this->VacR_GB);
			this->Controls->Add(this->VacD_GB);
			this->Controls->Add(this->VacP_GB);
			this->Controls->Add(this->nace_time);
			this->Controls->Add(this->box_Dueños);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->txt_observaciones);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txt_raza);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_especie);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->txt_nombres);
			this->Controls->Add(this->masc_Picture);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"addMascota";
			this->Text = L"Añadir Mascota";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->masc_Picture))->EndInit();
			this->VacP_GB->ResumeLayout(false);
			this->VacP_GB->PerformLayout();
			this->VacD_GB->ResumeLayout(false);
			this->VacD_GB->PerformLayout();
			this->VacR_GB->ResumeLayout(false);
			this->VacR_GB->PerformLayout();
			this->VacH_GB->ResumeLayout(false);
			this->VacH_GB->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	//Esta funcion evita que los diferentes input del registro del formulario addMascota esten vacíos
	private: Boolean checkTextBox_Empty() {
		if (String::IsNullOrEmpty(box_Dueños->Text) || String::IsNullOrEmpty(txt_nombres->Text) 
			|| System::String::IsNullOrEmpty(txt_especie->Text) || String::IsNullOrEmpty(txt_raza->Text) 
			|| System::String::IsNullOrEmpty(nace_time->Text)) {
			return false;
		}
		else {
			return true;
		}
	}

	//Bloque encargado de almacenar la ubicacion de un archivo y actualizar la imagen de masc_Picture
	private: String^ filelocation;
	private: array<Byte>^ imagen;
	private: FileStream^ fst;
	private: BinaryReader^ br;
	private: Void slc_foto_Click(System::Object^ sender, System::EventArgs^ e) {
		//Almacenar la ubicacion de la imagen
		OpenFileDialog^ openFile1 = gcnew OpenFileDialog;
		openFile1->Filter = "Imagenes|*.png;*.jpeg;*.jpg";
		if (System::Windows::Forms::DialogResult::OK == openFile1->ShowDialog()) {
			filelocation = openFile1->FileName->ToString();
		}

		//Actualiza la imagen de masc_Picture
		imagen = gcnew array <Byte>(3000);
		FileStream^ fst = gcnew FileStream(filelocation, FileMode::Open, FileAccess::Read);
		BinaryReader^ br = gcnew BinaryReader(fst);
		imagen = br->ReadBytes((int)fst->Length);
		MemoryStream^ ms = gcnew MemoryStream(imagen);
		this->masc_Picture->Image = Drawing::Image::FromStream(ms);
	}

	//Guarda una lista de los nombres de los dueños(clientes)
	List<String^>^ listaclientes = gcnew List<String^>();
	//Se encarga de registrar los datos de una mascota en la base de datos
	private: Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		//idCliente actual del dueño de la mascota
		Int16 idCliente = 1;
		Boolean comp = false;
		for each (String^ cliente in listaclientes) {
			if (box_Dueños->Text == cliente) {
				comp = true;
				break;
			}
			idCliente++;
		}
		
		//Este if se encarga de comprobar que en el dueño ingresado por texto se encuentre en la listay que no haya ningun campo vacío
		if (comp == true && checkTextBox_Empty()) {
			//Bloque encargado de comprobar el valor de los radioButton
			Int16 VacPcomp = 0;
			Int16 VacDcomp = 0;
			Int16 VacRcomp = 0;
			Int16 VacHcomp = 0;
			if (this->S_P->Checked) {
				VacPcomp = 1;
			}
			if (this->S_D->Checked) {
				VacDcomp = 1;
			}
			if (this->S_R->Checked) {
				VacRcomp = 1;
			} 
			if (this->S_H->Checked) {
				VacHcomp = 1;
			}

			//Apertura, ingreso de datos de la mascota y cierre de la base de datos
			String^ sql = "INSERT INTO `veterinaria`.`mascotas` (`Nombre`,`Nacimiento`,`Especie`,`Raza`,`Foto`,`VParvo`,`VDiste`,`VRabia`,`VHepa`,`Observaciones`,`Clientes_idCliente`) VALUE ('" + txt_nombres->Text + "', '" + nace_time->Text + "', '" + txt_especie->Text + "', '" + txt_raza->Text + "', @IMG, '" + VacPcomp + "', '" + VacDcomp + "', '" + VacRcomp + "', '" + VacHcomp + "', '" + txt_observaciones->Text + "', '" + idCliente + "')";
			MySqlCommand^ cursor2 = gcnew MySqlCommand(sql, conn);
			try {
				this->conn->Open();
				cursor2->Parameters->Add(gcnew MySqlParameter("@IMG", imagen));
				bool i = cursor2->ExecuteNonQuery();
				if (i) {
					MessageBox::Show(L"Mascota Registrada");
					this->Visible = false;
				}
				else {
					MessageBox::Show(L"Error al registrar a la mascota");
				}
			}
			catch (Exception^ x) {
				MessageBox::Show(x->Message);
			}
			this->conn->Close();
		}
		else {
			MessageBox::Show(L"Error al registrar a la mascota");
		}
	}

};
}
