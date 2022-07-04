#pragma once

#include "Register.h"
#include "Main_menu.h"
namespace VetPro {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Resumen de Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
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
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: String^ connectionString = "datasource=localhost; username=root; password=1234; database=prueba";
	private: MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
	private: System::Windows::Forms::LinkLabel^ regist_label;
	private: System::Windows::Forms::Button^ entry_button;
	private: System::Windows::Forms::TextBox^ txt_cont;
	private: System::Windows::Forms::TextBox^ txt_user;
	private: System::Windows::Forms::Label^ cont_label;
	private: System::Windows::Forms::Label^ user_label;
	private: System::Windows::Forms::PictureBox^ login_img;









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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->regist_label = (gcnew System::Windows::Forms::LinkLabel());
			this->entry_button = (gcnew System::Windows::Forms::Button());
			this->txt_cont = (gcnew System::Windows::Forms::TextBox());
			this->txt_user = (gcnew System::Windows::Forms::TextBox());
			this->cont_label = (gcnew System::Windows::Forms::Label());
			this->user_label = (gcnew System::Windows::Forms::Label());
			this->login_img = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->login_img))->BeginInit();
			this->SuspendLayout();
			// 
			// regist_label
			// 
			this->regist_label->AutoSize = true;
			this->regist_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->regist_label->Location = System::Drawing::Point(87, 371);
			this->regist_label->Name = L"regist_label";
			this->regist_label->Size = System::Drawing::Size(199, 15);
			this->regist_label->TabIndex = 20;
			this->regist_label->TabStop = true;
			this->regist_label->Text = L"¿No tienes cuenta\? Registrate aqui";
			this->regist_label->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Login::regist_label_LinkClicked);
			// 
			// entry_button
			// 
			this->entry_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->entry_button->Location = System::Drawing::Point(96, 316);
			this->entry_button->Name = L"entry_button";
			this->entry_button->Size = System::Drawing::Size(183, 38);
			this->entry_button->TabIndex = 19;
			this->entry_button->Text = L"Entrar";
			this->entry_button->UseVisualStyleBackColor = true;
			this->entry_button->Click += gcnew System::EventHandler(this, &Login::entry_button_Click);
			// 
			// txt_cont
			// 
			this->txt_cont->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_cont->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txt_cont->Location = System::Drawing::Point(80, 273);
			this->txt_cont->Name = L"txt_cont";
			this->txt_cont->PasswordChar = '*';
			this->txt_cont->Size = System::Drawing::Size(215, 19);
			this->txt_cont->TabIndex = 18;
			// 
			// txt_user
			// 
			this->txt_user->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_user->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txt_user->ForeColor = System::Drawing::SystemColors::WindowText;
			this->txt_user->Location = System::Drawing::Point(80, 212);
			this->txt_user->Name = L"txt_user";
			this->txt_user->Size = System::Drawing::Size(215, 19);
			this->txt_user->TabIndex = 17;
			// 
			// cont_label
			// 
			this->cont_label->AutoSize = true;
			this->cont_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->cont_label->Location = System::Drawing::Point(76, 250);
			this->cont_label->Name = L"cont_label";
			this->cont_label->Size = System::Drawing::Size(81, 17);
			this->cont_label->TabIndex = 16;
			this->cont_label->Text = L"Contraseña";
			// 
			// user_label
			// 
			this->user_label->AutoSize = true;
			this->user_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->user_label->Location = System::Drawing::Point(76, 189);
			this->user_label->Name = L"user_label";
			this->user_label->Size = System::Drawing::Size(57, 17);
			this->user_label->TabIndex = 15;
			this->user_label->Text = L"Usuario";
			// 
			// login_img
			// 
			this->login_img->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"login_img.Image")));
			this->login_img->Location = System::Drawing::Point(118, 24);
			this->login_img->Name = L"login_img";
			this->login_img->Size = System::Drawing::Size(143, 148);
			this->login_img->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->login_img->TabIndex = 14;
			this->login_img->TabStop = false;
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(370, 410);
			this->Controls->Add(this->regist_label);
			this->Controls->Add(this->entry_button);
			this->Controls->Add(this->txt_cont);
			this->Controls->Add(this->txt_user);
			this->Controls->Add(this->cont_label);
			this->Controls->Add(this->user_label);
			this->Controls->Add(this->login_img);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->login_img))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void entry_button_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ sql = "select * from clientes where Contra = '" + txt_cont->Text + "' and Usuario = '" + txt_user->Text + "'";
		MySqlCommand^ cursor = gcnew MySqlCommand(sql, conn);
		MySqlDataReader^ dataReader;

		try {
			this->conn->Open();
			dataReader = cursor->ExecuteReader();
			if (dataReader->Read()) {
				this->Visible = false;
				VetPro::Main_menu^ nwindow1 = gcnew VetPro::Main_menu(txt_user->Text);
				nwindow1->ShowDialog();
				this->Visible = true;
			}
			else {
				MessageBox::Show(L"Usuario incorrecto");
			}
		}
		catch (Exception^ x) {
			MessageBox::Show(x->Message);
		}
		this->conn->Close();
	}
	private: System::Void regist_label_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->Visible = false;
		VetPro::Register^ nwindow2 = gcnew VetPro::Register;
		nwindow2->ShowDialog();
		this->CenterToScreen();
		this->Visible = true;
	}
};
}
