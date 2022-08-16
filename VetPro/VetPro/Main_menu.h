#pragma once
#include "Cita.h"
#include "Cliente.h"

namespace VetPro {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Drawing2D;
	using namespace System::Text;
	using namespace System::IO;
	using namespace System::Threading;
	using namespace System::Threading::Tasks;
	using namespace System::Threading;
	using namespace MySql::Data::MySqlClient;

	public ref class Main_menu : public System::Windows::Forms::Form {
	public:
		Main_menu(void) {
			InitializeComponent();
		}
		Main_menu(System::String^ usuario) {
			InitializeComponent();
			//Conexion a la base de datos
			String^ connectionString = "datasource=localhost; username=root; password=1234; database=veterinaria";
			String^ sql = "SELECT * FROM `veterinaria`.`veterinarios` WHERE usuario = '" + usuario + "'";
			MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
			MySqlCommand^ cursor = gcnew MySqlCommand(sql, conn);
			MySqlDataReader^ dataReader;
			this->user = usuario;

			//Se encarga cargar el texto de bienvenida para el usuario tambien configura el tamaño del panel desplegable
			try {
				conn->Open();
				dataReader = cursor->ExecuteReader();
				if (dataReader->Read()) {
					this->name->Text = "Bienvenido\n" + dataReader["nombres"]->ToString();
					if (this->name->Width < this->Foto_usu->Width) {
						plusWidth = 75;
						Menux = this->Foto_usu->Width + plusWidth;
						this->Foto_usu->Location = System::Drawing::Point(this->name->Location.X - 34, 38);
					}
					else {
						plusWidth = 50;
						Menux = this->name->Width + plusWidth;
						this->Foto_usu->Location = System::Drawing::Point(this->name->Location.X - 18, 38);
					}
					this->Menu->Size = System::Drawing::Size(Menux, 588);
				}
				else {
					MessageBox::Show(L"Error al cargar el texto de bienvenida");
				}
			}
			catch (Exception^ x) {
				MessageBox::Show(x->Message);
			}
			conn->Close();

			//Este bloque de codigo se encarga de obtener la imagen del usuario desde la base de datos
			try {
				conn->Open();
				String^ sql2 = "SELECT * FROM veterinarios where usuario = '" + usuario + "'";;
				MySqlCommand^ cursor2 = gcnew MySqlCommand(sql2, conn);
				MySqlDataAdapter^ da = gcnew MySqlDataAdapter(cursor2);
				DataTable^ tabla_aux = gcnew DataTable();
				da->Fill(tabla_aux);
				array<Byte>^ imagen = gcnew array <Byte>(3000);
				DataRow^ dr = tabla_aux->Rows[0];
				imagen = (array<Byte>^) dr[5];
				MemoryStream^ ms = gcnew MemoryStream(imagen);
				this->Foto_usu->Image = Drawing::Image::FromStream(ms);
				conn->Close();
				//El user recibido del login nos ayudará a organizar
				//los datos que se recibirán y mostrarán de la base de datos
			}
			catch (Exception^ x) {
				MessageBox::Show(x->Message);
			}
			conn->Close();
			
			//Cambia la forma de la imagen del usuario de un cuadrado a un elipse
			GraphicsPath^ cp = gcnew System::Drawing::Drawing2D::GraphicsPath();
			cp->AddEllipse(this->Foto_usu->DisplayRectangle);
			this->Foto_usu->Region = gcnew System::Drawing::Region(cp);
		}
	protected:
		~Main_menu() {
			if (components) {
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panelShowAll;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ icon_vet;
	private: System::Windows::Forms::PictureBox^ icon_menu;
	private: System::Windows::Forms::Panel^ Menu;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ name;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Button^ clientes;
	private: System::Windows::Forms::Button^ citas;
	private: System::Windows::Forms::PictureBox^ logo;
	private: System::Windows::Forms::PictureBox^ Foto_usu;

	private: System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void) {
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Main_menu::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->icon_menu = (gcnew System::Windows::Forms::PictureBox());
			this->icon_vet = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panelShowAll = (gcnew System::Windows::Forms::Panel());
			this->logo = (gcnew System::Windows::Forms::PictureBox());
			this->Menu = (gcnew System::Windows::Forms::Panel());
			this->clientes = (gcnew System::Windows::Forms::Button());
			this->citas = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->Foto_usu = (gcnew System::Windows::Forms::PictureBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->name = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->icon_menu))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->icon_vet))->BeginInit();
			this->panelShowAll->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logo))->BeginInit();
			this->Menu->SuspendLayout();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Foto_usu))->BeginInit();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->panel1->Controls->Add(this->icon_menu);
			this->panel1->Controls->Add(this->icon_vet);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1264, 93);
			this->panel1->TabIndex = 0;
			// 
			// icon_menu
			// 
			this->icon_menu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"icon_menu.Image")));
			this->icon_menu->Location = System::Drawing::Point(12, 16);
			this->icon_menu->Name = L"icon_menu";
			this->icon_menu->Size = System::Drawing::Size(58, 55);
			this->icon_menu->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->icon_menu->TabIndex = 0;
			this->icon_menu->TabStop = false;
			this->icon_menu->Click += gcnew System::EventHandler(this, &Main_menu::icon_menu_Click);
			// 
			// icon_vet
			// 
			this->icon_vet->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"icon_vet.Image")));
			this->icon_vet->Location = System::Drawing::Point(478, 3);
			this->icon_vet->Name = L"icon_vet";
			this->icon_vet->Size = System::Drawing::Size(114, 81);
			this->icon_vet->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->icon_vet->TabIndex = 2;
			this->icon_vet->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(578, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(171, 55);
			this->label1->TabIndex = 1;
			this->label1->Text = L"VetPro";
			// 
			// panelShowAll
			// 
			this->panelShowAll->Controls->Add(this->logo);
			this->panelShowAll->Controls->Add(this->Menu);
			this->panelShowAll->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelShowAll->Location = System::Drawing::Point(0, 93);
			this->panelShowAll->Name = L"panelShowAll";
			this->panelShowAll->Size = System::Drawing::Size(1264, 588);
			this->panelShowAll->TabIndex = 1;
			// 
			// logo
			// 
			this->logo->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->logo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logo.Image")));
			this->logo->Location = System::Drawing::Point(454, 87);
			this->logo->Margin = System::Windows::Forms::Padding(2);
			this->logo->Name = L"logo";
			this->logo->Size = System::Drawing::Size(609, 390);
			this->logo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->logo->TabIndex = 2;
			this->logo->TabStop = false;
			// 
			// Menu
			// 
			this->Menu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->Menu->Controls->Add(this->clientes);
			this->Menu->Controls->Add(this->citas);
			this->Menu->Controls->Add(this->panel5);
			this->Menu->Controls->Add(this->panel4);
			this->Menu->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Menu->Dock = System::Windows::Forms::DockStyle::Left;
			this->Menu->Location = System::Drawing::Point(0, 0);
			this->Menu->Margin = System::Windows::Forms::Padding(2);
			this->Menu->Name = L"Menu";
			this->Menu->Size = System::Drawing::Size(257, 588);
			this->Menu->TabIndex = 1;
			// 
			// clientes
			// 
			this->clientes->Dock = System::Windows::Forms::DockStyle::Top;
			this->clientes->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->clientes->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->clientes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->clientes->ForeColor = System::Drawing::Color::White;
			this->clientes->Location = System::Drawing::Point(0, 493);
			this->clientes->Margin = System::Windows::Forms::Padding(0);
			this->clientes->Name = L"clientes";
			this->clientes->Size = System::Drawing::Size(257, 68);
			this->clientes->TabIndex = 3;
			this->clientes->Text = L"Clientes";
			this->clientes->UseVisualStyleBackColor = true;
			this->clientes->Click += gcnew System::EventHandler(this, &Main_menu::clientes_Click);
			// 
			// citas
			// 
			this->citas->AutoSize = true;
			this->citas->Dock = System::Windows::Forms::DockStyle::Top;
			this->citas->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->citas->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->citas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->citas->ForeColor = System::Drawing::Color::White;
			this->citas->Location = System::Drawing::Point(0, 425);
			this->citas->Margin = System::Windows::Forms::Padding(0);
			this->citas->Name = L"citas";
			this->citas->Size = System::Drawing::Size(257, 68);
			this->citas->TabIndex = 2;
			this->citas->Text = L"Citas";
			this->citas->UseVisualStyleBackColor = true;
			this->citas->Click += gcnew System::EventHandler(this, &Main_menu::citas_Click);
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->Foto_usu);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel5->Location = System::Drawing::Point(0, 115);
			this->panel5->Margin = System::Windows::Forms::Padding(2);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(257, 310);
			this->panel5->TabIndex = 1;
			// 
			// Foto_usu
			// 
			this->Foto_usu->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Foto_usu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Foto_usu.Image")));
			this->Foto_usu->Location = System::Drawing::Point(11, 38);
			this->Foto_usu->Margin = System::Windows::Forms::Padding(0);
			this->Foto_usu->Name = L"Foto_usu";
			this->Foto_usu->Size = System::Drawing::Size(227, 243);
			this->Foto_usu->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Foto_usu->TabIndex = 0;
			this->Foto_usu->TabStop = false;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->name);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel4->Location = System::Drawing::Point(0, 0);
			this->panel4->Margin = System::Windows::Forms::Padding(2);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(257, 115);
			this->panel4->TabIndex = 0;
			// 
			// name
			// 
			this->name->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->name->ForeColor = System::Drawing::Color::White;
			this->name->Location = System::Drawing::Point(45, 29);
			this->name->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(158, 62);
			this->name->TabIndex = 1;
			this->name->Text = L"Bienvenido\n Panchito";
			this->name->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Main_menu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->panelShowAll);
			this->Controls->Add(this->panel1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Main_menu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"VetPro";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->icon_menu))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->icon_vet))->EndInit();
			this->panelShowAll->ResumeLayout(false);
			this->panelShowAll->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logo))->EndInit();
			this->Menu->ResumeLayout(false);
			this->Menu->PerformLayout();
			this->panel5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Foto_usu))->EndInit();
			this->panel4->ResumeLayout(false);
			this->ResumeLayout(false);

		}

#pragma endregion
	//Almcena el nombre del usuario de la sesion
	private: String^ user;

	//Estas dos funciones se encargan de la animación de abrir y cerrar la ventana desplegable del menu principal
	private: Int16 plusWidth;
	private: Int16 anima_open_menu(Int16 x) {
		if (plusWidth == 50) {
			while (x <= this->name->Width + plusWidth) {
				this->Menu->Size = System::Drawing::Size(x, 588);
				x += 2;
			}
		}
		else {
			while (x <= this->Foto_usu->Width + plusWidth) {
				this->Menu->Size = System::Drawing::Size(x, 588);
				x += 2;
			}
		}
		this->name->Show();
		this->Foto_usu->Show();
		this->clientes->Show();
		this->citas->Show();
		return x;
	}
	private: System::Int16 anima_close_menu(Int16 x) {
		this->name->Hide();
		this->Foto_usu->Hide();
		this->clientes->Hide();
		this->citas->Hide();
		while (x >= 0) {
			this->Menu->Size = System::Drawing::Size(x, 588);
			x-=2;
		}
		return x;
	}

	//Esta función es el controlador para las funciones de abrir y cerrar el menu desplegable
	private: Int16 Menux;
	private: Boolean comp = false;
	private: Void icon_menu_Click(System::Object^ sender, System::EventArgs^ e) {
		if (comp == true) {
			Menux =anima_open_menu(Menux);
			comp = false;
		}
		else {
			Menux =anima_close_menu(Menux);
			comp = true;
		}
	}

	//Se encarga de gestionar las ventanas que se abren en el panelShowAll 
	private: System::Windows::Forms::Form^ f_activo = nullptr;
	private: Void abrirfh(System::Windows::Forms::Form^ f_hijo) {
		if (this->f_activo != nullptr) {
			this->f_activo->Close();
		}
		this->f_activo = f_hijo;
		f_hijo->TopLevel = false;
		f_hijo->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		f_hijo->Dock = System::Windows::Forms::DockStyle::Fill;
		this->panelShowAll->Controls->Add(f_hijo);
		this->panelShowAll->Tag = f_hijo;
		f_hijo->BringToFront();
		f_hijo->Show();
	}

	//Abre la ventana cita dentro del panelShowAll
	private: Void citas_Click(System::Object^ sender, System::EventArgs^ e) {
		abrirfh(gcnew VetPro::Cita());

	}

	//Abre la ventana cliente dentro del panelShowAll
	private: Void clientes_Click(System::Object^ sender, System::EventArgs^ e) {
		abrirfh(gcnew VetPro::Cliente());
	}
};
}

