#pragma once
#using <System.Windows.Forms.dll>
#using <System.Drawing.dll>
#using <System.dll>
#using <System.Data.dll>

namespace VetPro {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text;
	using namespace System::IO;;
	using namespace System::Threading;
	using namespace System::Threading::Tasks;
	using namespace MySql::Data::MySqlClient;
	using namespace System::Threading;

	/// <summary>
	/// Resumen de Register
	/// </summary>
	public ref class Register : public System::Windows::Forms::Form
	{
	public:
		Register(void)
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
		~Register()
		{
			if (components)
			{
				delete components;
			}
		}
	private: String^ connectionString = "datasource=localhost; username=root; password=1234; database=veterinaria";
	private: MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
	private: System::Windows::Forms::TextBox^ txt_iuser;
	private: System::Windows::Forms::TextBox^ txt_icont;
	private: System::Windows::Forms::TextBox^ txt_scont;
	private: System::Windows::Forms::Label^ user_label;
	private: System::Windows::Forms::Label^ icont_label;
	private: System::Windows::Forms::Label^ scont_label;
	private: System::Windows::Forms::PictureBox^ regis_img;

	private: System::Windows::Forms::Button^ regis_button;
	private: System::Windows::Forms::LinkLabel^ login_label;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_nombres;
	private: System::Windows::Forms::Label^ Apellidos;
	private: System::Windows::Forms::TextBox^ txt_apes;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btn_suimg;
	private: System::Windows::Forms::OpenFileDialog^ abre_IMG;
	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Register::typeid));
			this->txt_iuser = (gcnew System::Windows::Forms::TextBox());
			this->txt_icont = (gcnew System::Windows::Forms::TextBox());
			this->txt_scont = (gcnew System::Windows::Forms::TextBox());
			this->user_label = (gcnew System::Windows::Forms::Label());
			this->icont_label = (gcnew System::Windows::Forms::Label());
			this->scont_label = (gcnew System::Windows::Forms::Label());
			this->regis_img = (gcnew System::Windows::Forms::PictureBox());
			this->regis_button = (gcnew System::Windows::Forms::Button());
			this->login_label = (gcnew System::Windows::Forms::LinkLabel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_nombres = (gcnew System::Windows::Forms::TextBox());
			this->Apellidos = (gcnew System::Windows::Forms::Label());
			this->txt_apes = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btn_suimg = (gcnew System::Windows::Forms::Button());
			this->abre_IMG = (gcnew System::Windows::Forms::OpenFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->regis_img))->BeginInit();
			this->SuspendLayout();
			// 
			// txt_iuser
			// 
			this->txt_iuser->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_iuser->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txt_iuser->ForeColor = System::Drawing::SystemColors::WindowText;
			this->txt_iuser->Location = System::Drawing::Point(99, 220);
			this->txt_iuser->Margin = System::Windows::Forms::Padding(4);
			this->txt_iuser->Name = L"txt_iuser";
			this->txt_iuser->Size = System::Drawing::Size(287, 23);
			this->txt_iuser->TabIndex = 4;
			// 
			// txt_icont
			// 
			this->txt_icont->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_icont->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txt_icont->ForeColor = System::Drawing::SystemColors::WindowText;
			this->txt_icont->Location = System::Drawing::Point(99, 385);
			this->txt_icont->Margin = System::Windows::Forms::Padding(4);
			this->txt_icont->Name = L"txt_icont";
			this->txt_icont->PasswordChar = '*';
			this->txt_icont->Size = System::Drawing::Size(287, 23);
			this->txt_icont->TabIndex = 5;
			// 
			// txt_scont
			// 
			this->txt_scont->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_scont->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txt_scont->ForeColor = System::Drawing::SystemColors::WindowText;
			this->txt_scont->Location = System::Drawing::Point(99, 440);
			this->txt_scont->Margin = System::Windows::Forms::Padding(4);
			this->txt_scont->Name = L"txt_scont";
			this->txt_scont->PasswordChar = '*';
			this->txt_scont->Size = System::Drawing::Size(287, 23);
			this->txt_scont->TabIndex = 6;
			// 
			// user_label
			// 
			this->user_label->AutoSize = true;
			this->user_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->user_label->Location = System::Drawing::Point(95, 194);
			this->user_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->user_label->Name = L"user_label";
			this->user_label->Size = System::Drawing::Size(67, 20);
			this->user_label->TabIndex = 7;
			this->user_label->Text = L"Usuario";
			// 
			// icont_label
			// 
			this->icont_label->AutoSize = true;
			this->icont_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->icont_label->Location = System::Drawing::Point(95, 359);
			this->icont_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->icont_label->Name = L"icont_label";
			this->icont_label->Size = System::Drawing::Size(95, 20);
			this->icont_label->TabIndex = 8;
			this->icont_label->Text = L"Contraseña";
			// 
			// scont_label
			// 
			this->scont_label->AutoSize = true;
			this->scont_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->scont_label->Location = System::Drawing::Point(92, 414);
			this->scont_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->scont_label->Name = L"scont_label";
			this->scont_label->Size = System::Drawing::Size(168, 20);
			this->scont_label->TabIndex = 9;
			this->scont_label->Text = L"Repita su contraseña";
			// 
			// regis_img
			// 
			this->regis_img->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"regis_img.Image")));
			this->regis_img->Location = System::Drawing::Point(154, 15);
			this->regis_img->Margin = System::Windows::Forms::Padding(4);
			this->regis_img->Name = L"regis_img";
			this->regis_img->Size = System::Drawing::Size(177, 185);
			this->regis_img->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->regis_img->TabIndex = 10;
			this->regis_img->TabStop = false;
			// 
			// regis_button
			// 
			this->regis_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->regis_button->Location = System::Drawing::Point(116, 610);
			this->regis_button->Margin = System::Windows::Forms::Padding(4);
			this->regis_button->Name = L"regis_button";
			this->regis_button->Size = System::Drawing::Size(227, 48);
			this->regis_button->TabIndex = 11;
			this->regis_button->Text = L"Registrarse";
			this->regis_button->UseVisualStyleBackColor = true;
			this->regis_button->Click += gcnew System::EventHandler(this, &Register::regis_button_Click);
			// 
			// login_label
			// 
			this->login_label->AutoSize = true;
			this->login_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->login_label->Location = System::Drawing::Point(169, 679);
			this->login_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->login_label->Name = L"login_label";
			this->login_label->Size = System::Drawing::Size(121, 18);
			this->login_label->TabIndex = 12;
			this->login_label->TabStop = true;
			this->login_label->Text = L"Regresar a Login";
			this->login_label->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Register::login_label_LinkClicked);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label1->Location = System::Drawing::Point(92, 249);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 20);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Nombres";
			// 
			// txt_nombres
			// 
			this->txt_nombres->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_nombres->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txt_nombres->ForeColor = System::Drawing::SystemColors::WindowText;
			this->txt_nombres->Location = System::Drawing::Point(99, 275);
			this->txt_nombres->Margin = System::Windows::Forms::Padding(4);
			this->txt_nombres->Name = L"txt_nombres";
			this->txt_nombres->Size = System::Drawing::Size(287, 23);
			this->txt_nombres->TabIndex = 13;
			// 
			// Apellidos
			// 
			this->Apellidos->AutoSize = true;
			this->Apellidos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->Apellidos->Location = System::Drawing::Point(95, 304);
			this->Apellidos->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Apellidos->Name = L"Apellidos";
			this->Apellidos->Size = System::Drawing::Size(77, 20);
			this->Apellidos->TabIndex = 16;
			this->Apellidos->Text = L"Apellidos";
			// 
			// txt_apes
			// 
			this->txt_apes->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_apes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txt_apes->ForeColor = System::Drawing::SystemColors::WindowText;
			this->txt_apes->Location = System::Drawing::Point(99, 330);
			this->txt_apes->Margin = System::Windows::Forms::Padding(4);
			this->txt_apes->Name = L"txt_apes";
			this->txt_apes->Size = System::Drawing::Size(287, 23);
			this->txt_apes->TabIndex = 15;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label2->Location = System::Drawing::Point(92, 541);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 20);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Subir foto...";
			// 
			// btn_suimg
			// 
			this->btn_suimg->Location = System::Drawing::Point(222, 540);
			this->btn_suimg->Name = L"btn_suimg";
			this->btn_suimg->Size = System::Drawing::Size(164, 23);
			this->btn_suimg->TabIndex = 18;
			this->btn_suimg->Text = L"Seleccionar archivo...";
			this->btn_suimg->UseVisualStyleBackColor = true;
			this->btn_suimg->Click += gcnew System::EventHandler(this, &Register::btn_suimg_Click);
			// 
			// abre_IMG
			// 
			this->abre_IMG->FileName = L"openFileDialog1";
			// 
			// Register
			// 
			this->AcceptButton = this->regis_button;
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(480, 730);
			this->Controls->Add(this->btn_suimg);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Apellidos);
			this->Controls->Add(this->txt_apes);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_nombres);
			this->Controls->Add(this->login_label);
			this->Controls->Add(this->regis_button);
			this->Controls->Add(this->regis_img);
			this->Controls->Add(this->scont_label);
			this->Controls->Add(this->icont_label);
			this->Controls->Add(this->user_label);
			this->Controls->Add(this->txt_scont);
			this->Controls->Add(this->txt_icont);
			this->Controls->Add(this->txt_iuser);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Register";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Registrarse";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->regis_img))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Boolean checkTextBox_Empty() {
		if (System::String::IsNullOrEmpty(txt_iuser->Text) && System::String::IsNullOrEmpty(txt_icont->Text)) {
			return false;
		}
		else {
			return true;
		}
	}
	public: String^ filelocation;
	private: System::Void btn_suimg_Click(System::Object^ sender, System::EventArgs^ e) {

		OpenFileDialog^ openFile1 = gcnew OpenFileDialog;
		openFile1->Filter = "Imagenes|*.png;*.jpeg;*.jpg";
		if (System::Windows::Forms::DialogResult::OK == openFile1->ShowDialog()){
			filelocation = openFile1->FileName->ToString();
		}
	}

	private: System::Void regis_button_Click(System::Object^ sender, System::EventArgs^ e) {
		array<Byte>^ imagen = gcnew array <Byte>(300000000000000);
		FileStream^ fst = gcnew FileStream(filelocation,FileMode::Open, FileAccess::Read);
		BinaryReader^ br = gcnew BinaryReader(fst);
		imagen = br->ReadBytes((int)fst->Length);  


		String^ sql = "insert into `veterinaria`.`veterinarios` (`usuario`,`contra`, `nombres`,`apellidos`,`Foto`) values ('" + txt_iuser->Text + "','" + txt_icont->Text + "', '" + txt_nombres->Text + "', '" + txt_apes->Text + "', @IMG)";
		MySqlCommand^ cursor = gcnew MySqlCommand(sql, conn);

		try {
			this->conn->Open();
			if (txt_icont->Text == txt_scont->Text && checkTextBox_Empty()) {
				cursor->Parameters->Add(gcnew MySqlParameter("@IMG", imagen));
				bool i = cursor->ExecuteNonQuery();
				
				if (i) {

					MessageBox::Show(L"Usuario Registrado");
					this->Visible = false;
				}
				else {
					MessageBox::Show(L"Error al registrar el usuario");
				}
			}
			else {
				MessageBox::Show(L"Error al registrar el usuario");
			}
		}
		catch (Exception^ x) {
			MessageBox::Show(x->Message);
		}
		this->conn->Close();
	}
	private: System::Void login_label_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->Visible = false;
	}

};
}
