#pragma once

namespace VetPro {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Drawing2D;
	using namespace System::Text;
	using namespace System::IO;;
	using namespace System::Threading;
	using namespace System::Threading::Tasks;
	using namespace MySql::Data::MySqlClient;

	public ref class addCliente : public System::Windows::Forms::Form {
	public:
		addCliente(void) {
			InitializeComponent();

			//Cambia la forma de la imagen del cliente de un cuadrado a un elipse
			GraphicsPath^ ap = gcnew System::Drawing::Drawing2D::GraphicsPath();
			ap->AddEllipse(this->client_Picture->DisplayRectangle);
			this->client_Picture->Region = gcnew System::Drawing::Region(ap);
		}

	protected:
		~addCliente() {
			if (components) {
				delete components;
			}
		}

	private: String^ connectionString = "datasource=localhost; username=root; password=1234; database=veterinaria";
	private: MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txt_telefono;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_correo;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txt_apellidos;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt_nombres;
	private: System::Windows::Forms::PictureBox^ client_Picture;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ slc_foto;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DateTimePicker^ txt_cumpTime;

	private: System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void) {
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
			this->client_Picture = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->slc_foto = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txt_cumpTime = (gcnew System::Windows::Forms::DateTimePicker());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->client_Picture))->BeginInit();
			this->SuspendLayout();
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F));
			this->label6->Location = System::Drawing::Point(102, 311);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(139, 36);
			this->label6->TabIndex = 55;
			this->label6->Text = L"Telefono:";
			// 
			// txt_telefono
			// 
			this->txt_telefono->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_telefono->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->txt_telefono->Location = System::Drawing::Point(285, 314);
			this->txt_telefono->Name = L"txt_telefono";
			this->txt_telefono->Size = System::Drawing::Size(382, 31);
			this->txt_telefono->TabIndex = 54;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F));
			this->label1->Location = System::Drawing::Point(102, 241);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(114, 36);
			this->label1->TabIndex = 53;
			this->label1->Text = L"Correo:";
			// 
			// txt_correo
			// 
			this->txt_correo->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_correo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->txt_correo->Location = System::Drawing::Point(285, 244);
			this->txt_correo->Name = L"txt_correo";
			this->txt_correo->Size = System::Drawing::Size(382, 31);
			this->txt_correo->TabIndex = 52;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F));
			this->label5->Location = System::Drawing::Point(102, 173);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(147, 36);
			this->label5->TabIndex = 51;
			this->label5->Text = L"Apellidos:";
			// 
			// txt_apellidos
			// 
			this->txt_apellidos->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_apellidos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->txt_apellidos->Location = System::Drawing::Point(285, 176);
			this->txt_apellidos->Name = L"txt_apellidos";
			this->txt_apellidos->Size = System::Drawing::Size(382, 31);
			this->txt_apellidos->TabIndex = 50;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40.2F, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->label3->Location = System::Drawing::Point(425, 21);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(386, 65);
			this->label3->TabIndex = 49;
			this->label3->Text = L"Nuevo Cliente";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F));
			this->label2->Location = System::Drawing::Point(102, 103);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(143, 36);
			this->label2->TabIndex = 48;
			this->label2->Text = L"Nombres:";
			// 
			// txt_nombres
			// 
			this->txt_nombres->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_nombres->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->txt_nombres->Location = System::Drawing::Point(285, 106);
			this->txt_nombres->Name = L"txt_nombres";
			this->txt_nombres->Size = System::Drawing::Size(382, 31);
			this->txt_nombres->TabIndex = 46;
			// 
			// client_Picture
			// 
			this->client_Picture->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"client_Picture.Image")));
			this->client_Picture->Location = System::Drawing::Point(828, 112);
			this->client_Picture->Name = L"client_Picture";
			this->client_Picture->Size = System::Drawing::Size(212, 229);
			this->client_Picture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->client_Picture->TabIndex = 45;
			this->client_Picture->TabStop = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(436, 461);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(384, 68);
			this->button2->TabIndex = 56;
			this->button2->Text = L"Registrar Cliente";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &addCliente::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label4->Location = System::Drawing::Point(769, 377);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(163, 31);
			this->label4->TabIndex = 57;
			this->label4->Text = L"Subir Foto...";
			// 
			// slc_foto
			// 
			this->slc_foto->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->slc_foto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->slc_foto->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->slc_foto->Location = System::Drawing::Point(936, 374);
			this->slc_foto->Margin = System::Windows::Forms::Padding(2);
			this->slc_foto->Name = L"slc_foto";
			this->slc_foto->Size = System::Drawing::Size(163, 41);
			this->slc_foto->TabIndex = 58;
			this->slc_foto->Text = L"Seleccionar";
			this->slc_foto->UseVisualStyleBackColor = false;
			this->slc_foto->Click += gcnew System::EventHandler(this, &addCliente::slc_foto_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F));
			this->label7->Location = System::Drawing::Point(102, 379);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(189, 36);
			this->label7->TabIndex = 59;
			this->label7->Text = L"Cumpleaños:";
			// 
			// txt_cumpTime
			// 
			this->txt_cumpTime->CustomFormat = L"yyyy-MM-dd";
			this->txt_cumpTime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->txt_cumpTime->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->txt_cumpTime->Location = System::Drawing::Point(320, 377);
			this->txt_cumpTime->MaxDate = System::DateTime(2200, 12, 31, 0, 0, 0, 0);
			this->txt_cumpTime->MinDate = System::DateTime(1900, 1, 1, 0, 0, 0, 0);
			this->txt_cumpTime->Name = L"txt_cumpTime";
			this->txt_cumpTime->Size = System::Drawing::Size(347, 38);
			this->txt_cumpTime->TabIndex = 60;
			this->txt_cumpTime->Value = System::DateTime(2022, 8, 16, 0, 0, 0, 0);
			// 
			// addCliente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1250, 550);
			this->Controls->Add(this->txt_cumpTime);
			this->Controls->Add(this->label7);
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
			this->Controls->Add(this->client_Picture);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"addCliente";
			this->Text = L"Añadir Cliente";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->client_Picture))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	//Esta funcion evita que los diferentes input del registro del formulario addCliente esten vacíos
	private: Boolean checkTextBox_Empty() {
		if (String::IsNullOrEmpty(txt_nombres->Text) || System::String::IsNullOrEmpty(txt_apellidos->Text) 
			|| String::IsNullOrEmpty(txt_correo->Text) || System::String::IsNullOrEmpty(txt_telefono->Text)
			|| String::IsNullOrEmpty(txt_cumpTime->Text)) {
			return false;
		}
		else {
			return true;
		}
	}

	//Bloque encargado de almacenar la ubicacion de un archivo y actualizar la imagen de client_Picture
	private: String^ filelocation;
	private: array<Byte>^ imagen;
	private: FileStream^ fst;
	private: BinaryReader^ br;
	private: System::Void slc_foto_Click(System::Object^ sender, System::EventArgs^ e) {
		//Almacenar la ubicacion de la imagen
		OpenFileDialog^ openFile1 = gcnew OpenFileDialog;
		openFile1->Filter = "Imagenes|*.png;*.jpeg;*.jpg";
		if (System::Windows::Forms::DialogResult::OK == openFile1->ShowDialog()) {
			filelocation = openFile1->FileName->ToString();
		}

		//Actualizar la imagen de client_Picture
		imagen = gcnew array <Byte>(3000);
		FileStream^ fst = gcnew FileStream(filelocation, FileMode::Open, FileAccess::Read);
		BinaryReader^ br = gcnew BinaryReader(fst);
		imagen = br->ReadBytes((int)fst->Length);
		MemoryStream^ ms = gcnew MemoryStream(imagen);
		this->client_Picture->Image = Drawing::Image::FromStream(ms);
	}

	//Se encarga de registrar los datos de un cliente(no veterinario) en la base de datos
	private: Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		//Este if se encarga de que en el telefono solo haya digitos y tambien se encarga de evitar campos vacios
		Int32 res;
		if (Int32::TryParse(txt_telefono->Text,res) && checkTextBox_Empty()) {
			//Apertura, ingreso de datos del usuario y cierre de la base de datos
			String^ sql = "INSERT INTO `veterinaria`.`clientes` (`Nombres`,`Apellidos`,`Foto`,`Correo`,`Telefono`,`Cumpleaños`) VALUE ('" + txt_nombres->Text + "', '" + txt_apellidos->Text + "', @IMG, '" + txt_correo->Text + "', '" + txt_telefono->Text + "', '" + txt_cumpTime->Text + "')";
			MySqlCommand^ cursor = gcnew MySqlCommand(sql, conn);
			try {
				this->conn->Open();
				cursor->Parameters->Add(gcnew MySqlParameter("@IMG", imagen));
				bool i = cursor->ExecuteNonQuery();
				if (i) {
					MessageBox::Show(L"Cliente Registrado");
					this->Visible = false;
				}
				else {
					MessageBox::Show(L"Error al registrar al cliente");
				}
			}
			catch (Exception^ x) {
				MessageBox::Show(x->Message);
			}
			this->conn->Close();
		}
		else {
			MessageBox::Show(L"Error al registrar al cliente");
		}
	}
};
}
