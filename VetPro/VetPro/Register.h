#pragma once

namespace VetPro {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

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
	private: String^ connectionString = "datasource=localhost; username=root; password=1234; database=prueba";
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->regis_img))->BeginInit();
			this->SuspendLayout();
			// 
			// txt_iuser
			// 
			this->txt_iuser->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_iuser->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txt_iuser->ForeColor = System::Drawing::SystemColors::WindowText;
			this->txt_iuser->Location = System::Drawing::Point(74, 178);
			this->txt_iuser->Name = L"txt_iuser";
			this->txt_iuser->Size = System::Drawing::Size(215, 19);
			this->txt_iuser->TabIndex = 4;
			// 
			// txt_icont
			// 
			this->txt_icont->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_icont->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txt_icont->ForeColor = System::Drawing::SystemColors::WindowText;
			this->txt_icont->Location = System::Drawing::Point(74, 232);
			this->txt_icont->Name = L"txt_icont";
			this->txt_icont->PasswordChar = '*';
			this->txt_icont->Size = System::Drawing::Size(215, 19);
			this->txt_icont->TabIndex = 5;
			// 
			// txt_scont
			// 
			this->txt_scont->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_scont->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txt_scont->ForeColor = System::Drawing::SystemColors::WindowText;
			this->txt_scont->Location = System::Drawing::Point(74, 286);
			this->txt_scont->Name = L"txt_scont";
			this->txt_scont->PasswordChar = '*';
			this->txt_scont->Size = System::Drawing::Size(215, 19);
			this->txt_scont->TabIndex = 6;
			// 
			// user_label
			// 
			this->user_label->AutoSize = true;
			this->user_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->user_label->Location = System::Drawing::Point(71, 158);
			this->user_label->Name = L"user_label";
			this->user_label->Size = System::Drawing::Size(57, 17);
			this->user_label->TabIndex = 7;
			this->user_label->Text = L"Usuario";
			// 
			// icont_label
			// 
			this->icont_label->AutoSize = true;
			this->icont_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->icont_label->Location = System::Drawing::Point(71, 212);
			this->icont_label->Name = L"icont_label";
			this->icont_label->Size = System::Drawing::Size(81, 17);
			this->icont_label->TabIndex = 8;
			this->icont_label->Text = L"Contraseña";
			// 
			// scont_label
			// 
			this->scont_label->AutoSize = true;
			this->scont_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->scont_label->Location = System::Drawing::Point(71, 266);
			this->scont_label->Name = L"scont_label";
			this->scont_label->Size = System::Drawing::Size(143, 17);
			this->scont_label->TabIndex = 9;
			this->scont_label->Text = L"Repita su contraseña";
			// 
			// regis_img
			// 
			this->regis_img->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"regis_img.Image")));
			this->regis_img->Location = System::Drawing::Point(120, 12);
			this->regis_img->Name = L"regis_img";
			this->regis_img->Size = System::Drawing::Size(133, 150);
			this->regis_img->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->regis_img->TabIndex = 10;
			this->regis_img->TabStop = false;
			// 
			// regis_button
			// 
			this->regis_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->regis_button->Location = System::Drawing::Point(98, 321);
			this->regis_button->Name = L"regis_button";
			this->regis_button->Size = System::Drawing::Size(170, 39);
			this->regis_button->TabIndex = 11;
			this->regis_button->Text = L"Registrarse";
			this->regis_button->UseVisualStyleBackColor = true;
			this->regis_button->Click += gcnew System::EventHandler(this, &Register::regis_button_Click);
			// 
			// login_label
			// 
			this->login_label->AutoSize = true;
			this->login_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->login_label->Location = System::Drawing::Point(129, 377);
			this->login_label->Name = L"login_label";
			this->login_label->Size = System::Drawing::Size(102, 15);
			this->login_label->TabIndex = 12;
			this->login_label->TabStop = true;
			this->login_label->Text = L"Regresar a Login";
			this->login_label->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Register::login_label_LinkClicked);
			// 
			// Register
			// 
			this->AcceptButton = this->regis_button;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(370, 410);
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
	private: System::Void regis_button_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ sql = "insert into `prueba`.`clientes` (`contra`, `usuario`) values ('" + txt_icont->Text + "', '" + txt_iuser->Text + "')";
		MySqlCommand^ cursor = gcnew MySqlCommand(sql, conn);

		try {
			this->conn->Open();
			if (txt_icont->Text == txt_scont->Text && checkTextBox_Empty()) {
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
