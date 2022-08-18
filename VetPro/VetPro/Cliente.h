#pragma once
#include "addCliente.h"
#include "addMascota.h"

namespace VetPro {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	public ref class Cliente : public System::Windows::Forms::Form {
	public:
		Cliente(void) {
			InitializeComponent();
			load_TablaClientes();
			load_TablaMascotas();
		}
	protected:
		~Cliente() {
			if (components) {
				delete components;
			}
		}
	private: String^ connectionString = "datasource=localhost; username=root; password=1234; database=veterinaria";
	private: MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ n_clie;
	private: System::Windows::Forms::Button^ n_masco;
	private: System::Windows::Forms::TabControl^ mult_cli_mas;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TableLayoutPanel^ tabla_Clientes;
	private: System::Windows::Forms::Label^ txt_id1;
	private: System::Windows::Forms::Label^ txt_nombres;
	private: System::Windows::Forms::Label^ txt_apellidos;
	private: System::Windows::Forms::Label^ txt_foto1;
	private: System::Windows::Forms::Label^ txt_correo;
	private: System::Windows::Forms::Label^ txt_telefono;
	private: System::Windows::Forms::Label^ txt_cumple;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TableLayoutPanel^ tabla_Mascotas;
	private: System::Windows::Forms::Label^ txt_id2;
	private: System::Windows::Forms::Label^ txt_nombre;
	private: System::Windows::Forms::Label^ txt_nac;
	private: System::Windows::Forms::Label^ txt_especie;
	private: System::Windows::Forms::Label^ txt_raza;
	private: System::Windows::Forms::Label^ txt_foto2;
	private: System::Windows::Forms::Label^ txt_vp;
	private: System::Windows::Forms::Label^ txt_vd;
	private: System::Windows::Forms::Label^ txt_vr;
	private: System::Windows::Forms::Label^ txt_vh;
	private: System::Windows::Forms::Label^ txt_obs;
	private: System::Windows::Forms::Label^ txt_idcliente;

	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void) {
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->n_clie = (gcnew System::Windows::Forms::Button());
			this->n_masco = (gcnew System::Windows::Forms::Button());
			this->mult_cli_mas = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabla_Clientes = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->txt_id1 = (gcnew System::Windows::Forms::Label());
			this->txt_nombres = (gcnew System::Windows::Forms::Label());
			this->txt_apellidos = (gcnew System::Windows::Forms::Label());
			this->txt_foto1 = (gcnew System::Windows::Forms::Label());
			this->txt_correo = (gcnew System::Windows::Forms::Label());
			this->txt_telefono = (gcnew System::Windows::Forms::Label());
			this->txt_cumple = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabla_Mascotas = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->txt_id2 = (gcnew System::Windows::Forms::Label());
			this->txt_nombre = (gcnew System::Windows::Forms::Label());
			this->txt_nac = (gcnew System::Windows::Forms::Label());
			this->txt_especie = (gcnew System::Windows::Forms::Label());
			this->txt_raza = (gcnew System::Windows::Forms::Label());
			this->txt_foto2 = (gcnew System::Windows::Forms::Label());
			this->txt_vp = (gcnew System::Windows::Forms::Label());
			this->txt_vd = (gcnew System::Windows::Forms::Label());
			this->txt_vr = (gcnew System::Windows::Forms::Label());
			this->txt_vh = (gcnew System::Windows::Forms::Label());
			this->txt_obs = (gcnew System::Windows::Forms::Label());
			this->txt_idcliente = (gcnew System::Windows::Forms::Label());
			this->mult_cli_mas->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabla_Clientes->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabla_Mascotas->SuspendLayout();
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->label3->Location = System::Drawing::Point(491, 21);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(234, 64);
			this->label3->TabIndex = 38;
			this->label3->Text = L"Clientes";
			// 
			// n_clie
			// 
			this->n_clie->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->n_clie->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold));
			this->n_clie->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->n_clie->Location = System::Drawing::Point(1005, 365);
			this->n_clie->Margin = System::Windows::Forms::Padding(2);
			this->n_clie->Name = L"n_clie";
			this->n_clie->Size = System::Drawing::Size(196, 64);
			this->n_clie->TabIndex = 37;
			this->n_clie->Text = L"Nuevo Cliente";
			this->n_clie->UseVisualStyleBackColor = false;
			this->n_clie->Click += gcnew System::EventHandler(this, &Cliente::n_clie_Click);
			// 
			// n_masco
			// 
			this->n_masco->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->n_masco->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold));
			this->n_masco->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->n_masco->Location = System::Drawing::Point(1005, 217);
			this->n_masco->Margin = System::Windows::Forms::Padding(2);
			this->n_masco->Name = L"n_masco";
			this->n_masco->Size = System::Drawing::Size(196, 64);
			this->n_masco->TabIndex = 39;
			this->n_masco->Text = L"Nueva Mascota";
			this->n_masco->UseVisualStyleBackColor = false;
			this->n_masco->Click += gcnew System::EventHandler(this, &Cliente::n_masco_Click);
			// 
			// mult_cli_mas
			// 
			this->mult_cli_mas->Controls->Add(this->tabPage1);
			this->mult_cli_mas->Controls->Add(this->tabPage2);
			this->mult_cli_mas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mult_cli_mas->Location = System::Drawing::Point(40, 87);
			this->mult_cli_mas->Name = L"mult_cli_mas";
			this->mult_cli_mas->SelectedIndex = 0;
			this->mult_cli_mas->Size = System::Drawing::Size(934, 417);
			this->mult_cli_mas->SizeMode = System::Windows::Forms::TabSizeMode::Fixed;
			this->mult_cli_mas->TabIndex = 41;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->tabla_Clientes);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage1->Location = System::Drawing::Point(4, 27);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(926, 386);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Clientes";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabla_Clientes
			// 
			this->tabla_Clientes->AutoScroll = true;
			this->tabla_Clientes->ColumnCount = 7;
			this->tabla_Clientes->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				40)));
			this->tabla_Clientes->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20.94361F)));
			this->tabla_Clientes->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				21.05869F)));
			this->tabla_Clientes->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				7.364788F)));
			this->tabla_Clientes->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				24.51094F)));
			this->tabla_Clientes->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				11.62255F)));
			this->tabla_Clientes->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				14.49942F)));
			this->tabla_Clientes->Controls->Add(this->txt_id1, 0, 0);
			this->tabla_Clientes->Controls->Add(this->txt_nombres, 1, 0);
			this->tabla_Clientes->Controls->Add(this->txt_apellidos, 2, 0);
			this->tabla_Clientes->Controls->Add(this->txt_foto1, 3, 0);
			this->tabla_Clientes->Controls->Add(this->txt_correo, 4, 0);
			this->tabla_Clientes->Controls->Add(this->txt_telefono, 5, 0);
			this->tabla_Clientes->Controls->Add(this->txt_cumple, 6, 0);
			this->tabla_Clientes->Location = System::Drawing::Point(6, 3);
			this->tabla_Clientes->Name = L"tabla_Clientes";
			this->tabla_Clientes->RowCount = 1;
			this->tabla_Clientes->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tabla_Clientes->Size = System::Drawing::Size(920, 394);
			this->tabla_Clientes->TabIndex = 41;
			// 
			// txt_id1
			// 
			this->txt_id1->AutoSize = true;
			this->txt_id1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->txt_id1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_id1->Location = System::Drawing::Point(3, 3);
			this->txt_id1->Margin = System::Windows::Forms::Padding(3);
			this->txt_id1->Name = L"txt_id1";
			this->txt_id1->Size = System::Drawing::Size(34, 388);
			this->txt_id1->TabIndex = 0;
			this->txt_id1->Text = L"ID";
			this->txt_id1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txt_nombres
			// 
			this->txt_nombres->AutoSize = true;
			this->txt_nombres->Dock = System::Windows::Forms::DockStyle::Fill;
			this->txt_nombres->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_nombres->Location = System::Drawing::Point(43, 3);
			this->txt_nombres->Margin = System::Windows::Forms::Padding(3);
			this->txt_nombres->Name = L"txt_nombres";
			this->txt_nombres->Size = System::Drawing::Size(178, 388);
			this->txt_nombres->TabIndex = 1;
			this->txt_nombres->Text = L"Nombres";
			this->txt_nombres->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txt_apellidos
			// 
			this->txt_apellidos->AutoSize = true;
			this->txt_apellidos->Dock = System::Windows::Forms::DockStyle::Fill;
			this->txt_apellidos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_apellidos->Location = System::Drawing::Point(227, 3);
			this->txt_apellidos->Margin = System::Windows::Forms::Padding(3);
			this->txt_apellidos->Name = L"txt_apellidos";
			this->txt_apellidos->Size = System::Drawing::Size(179, 388);
			this->txt_apellidos->TabIndex = 2;
			this->txt_apellidos->Text = L"Apellidos";
			this->txt_apellidos->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txt_foto1
			// 
			this->txt_foto1->AutoSize = true;
			this->txt_foto1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->txt_foto1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_foto1->Location = System::Drawing::Point(412, 3);
			this->txt_foto1->Margin = System::Windows::Forms::Padding(3);
			this->txt_foto1->Name = L"txt_foto1";
			this->txt_foto1->Size = System::Drawing::Size(58, 388);
			this->txt_foto1->TabIndex = 3;
			this->txt_foto1->Text = L"Foto";
			this->txt_foto1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txt_correo
			// 
			this->txt_correo->AutoSize = true;
			this->txt_correo->Dock = System::Windows::Forms::DockStyle::Fill;
			this->txt_correo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_correo->Location = System::Drawing::Point(476, 3);
			this->txt_correo->Margin = System::Windows::Forms::Padding(3);
			this->txt_correo->Name = L"txt_correo";
			this->txt_correo->Size = System::Drawing::Size(209, 388);
			this->txt_correo->TabIndex = 4;
			this->txt_correo->Text = L"Correo";
			this->txt_correo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txt_telefono
			// 
			this->txt_telefono->AutoSize = true;
			this->txt_telefono->Dock = System::Windows::Forms::DockStyle::Fill;
			this->txt_telefono->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_telefono->Location = System::Drawing::Point(691, 3);
			this->txt_telefono->Margin = System::Windows::Forms::Padding(3);
			this->txt_telefono->Name = L"txt_telefono";
			this->txt_telefono->Size = System::Drawing::Size(96, 388);
			this->txt_telefono->TabIndex = 5;
			this->txt_telefono->Text = L"Telefono";
			this->txt_telefono->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txt_cumple
			// 
			this->txt_cumple->AutoSize = true;
			this->txt_cumple->Dock = System::Windows::Forms::DockStyle::Fill;
			this->txt_cumple->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_cumple->Location = System::Drawing::Point(793, 3);
			this->txt_cumple->Margin = System::Windows::Forms::Padding(3);
			this->txt_cumple->Name = L"txt_cumple";
			this->txt_cumple->Size = System::Drawing::Size(124, 388);
			this->txt_cumple->TabIndex = 6;
			this->txt_cumple->Text = L"Cumpleaños";
			this->txt_cumple->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tabPage2
			// 
			this->tabPage2->AutoScroll = true;
			this->tabPage2->Controls->Add(this->tabla_Mascotas);
			this->tabPage2->Location = System::Drawing::Point(4, 27);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(926, 386);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Mascotas";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabla_Mascotas
			// 
			this->tabla_Mascotas->AutoScroll = true;
			this->tabla_Mascotas->ColumnCount = 12;
			this->tabla_Mascotas->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				35)));
			this->tabla_Mascotas->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				108)));
			this->tabla_Mascotas->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				118)));
			this->tabla_Mascotas->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				99)));
			this->tabla_Mascotas->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				96)));
			this->tabla_Mascotas->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				69)));
			this->tabla_Mascotas->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				126)));
			this->tabla_Mascotas->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				163)));
			this->tabla_Mascotas->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				128)));
			this->tabla_Mascotas->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				153)));
			this->tabla_Mascotas->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				449)));
			this->tabla_Mascotas->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				95)));
			this->tabla_Mascotas->Controls->Add(this->txt_id2, 0, 0);
			this->tabla_Mascotas->Controls->Add(this->txt_nombre, 1, 0);
			this->tabla_Mascotas->Controls->Add(this->txt_nac, 2, 0);
			this->tabla_Mascotas->Controls->Add(this->txt_especie, 3, 0);
			this->tabla_Mascotas->Controls->Add(this->txt_raza, 4, 0);
			this->tabla_Mascotas->Controls->Add(this->txt_foto2, 5, 0);
			this->tabla_Mascotas->Controls->Add(this->txt_vp, 6, 0);
			this->tabla_Mascotas->Controls->Add(this->txt_vd, 7, 0);
			this->tabla_Mascotas->Controls->Add(this->txt_vr, 8, 0);
			this->tabla_Mascotas->Controls->Add(this->txt_vh, 9, 0);
			this->tabla_Mascotas->Controls->Add(this->txt_obs, 10, 0);
			this->tabla_Mascotas->Controls->Add(this->txt_idcliente, 11, 0);
			this->tabla_Mascotas->Location = System::Drawing::Point(6, 3);
			this->tabla_Mascotas->Name = L"tabla_Mascotas";
			this->tabla_Mascotas->RowCount = 1;
			this->tabla_Mascotas->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tabla_Mascotas->Size = System::Drawing::Size(1639, 394);
			this->tabla_Mascotas->TabIndex = 42;
			// 
			// txt_id2
			// 
			this->txt_id2->AutoSize = true;
			this->txt_id2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->txt_id2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_id2->Location = System::Drawing::Point(3, 3);
			this->txt_id2->Margin = System::Windows::Forms::Padding(3);
			this->txt_id2->Name = L"txt_id2";
			this->txt_id2->Size = System::Drawing::Size(29, 388);
			this->txt_id2->TabIndex = 0;
			this->txt_id2->Text = L"ID";
			this->txt_id2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txt_nombre
			// 
			this->txt_nombre->AutoSize = true;
			this->txt_nombre->Dock = System::Windows::Forms::DockStyle::Fill;
			this->txt_nombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_nombre->Location = System::Drawing::Point(38, 3);
			this->txt_nombre->Margin = System::Windows::Forms::Padding(3);
			this->txt_nombre->Name = L"txt_nombre";
			this->txt_nombre->Size = System::Drawing::Size(102, 388);
			this->txt_nombre->TabIndex = 1;
			this->txt_nombre->Text = L"Nombre";
			this->txt_nombre->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txt_nac
			// 
			this->txt_nac->AutoSize = true;
			this->txt_nac->Dock = System::Windows::Forms::DockStyle::Fill;
			this->txt_nac->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_nac->Location = System::Drawing::Point(146, 3);
			this->txt_nac->Margin = System::Windows::Forms::Padding(3);
			this->txt_nac->Name = L"txt_nac";
			this->txt_nac->Size = System::Drawing::Size(112, 388);
			this->txt_nac->TabIndex = 2;
			this->txt_nac->Text = L"Nacimiento";
			this->txt_nac->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txt_especie
			// 
			this->txt_especie->AutoSize = true;
			this->txt_especie->Dock = System::Windows::Forms::DockStyle::Fill;
			this->txt_especie->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_especie->Location = System::Drawing::Point(264, 3);
			this->txt_especie->Margin = System::Windows::Forms::Padding(3);
			this->txt_especie->Name = L"txt_especie";
			this->txt_especie->Size = System::Drawing::Size(93, 388);
			this->txt_especie->TabIndex = 3;
			this->txt_especie->Text = L"Especie";
			this->txt_especie->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txt_raza
			// 
			this->txt_raza->AutoSize = true;
			this->txt_raza->Dock = System::Windows::Forms::DockStyle::Fill;
			this->txt_raza->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_raza->Location = System::Drawing::Point(363, 3);
			this->txt_raza->Margin = System::Windows::Forms::Padding(3);
			this->txt_raza->Name = L"txt_raza";
			this->txt_raza->Size = System::Drawing::Size(90, 388);
			this->txt_raza->TabIndex = 4;
			this->txt_raza->Text = L"Raza";
			this->txt_raza->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txt_foto2
			// 
			this->txt_foto2->AutoSize = true;
			this->txt_foto2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->txt_foto2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_foto2->Location = System::Drawing::Point(459, 3);
			this->txt_foto2->Margin = System::Windows::Forms::Padding(3);
			this->txt_foto2->Name = L"txt_foto2";
			this->txt_foto2->Size = System::Drawing::Size(63, 388);
			this->txt_foto2->TabIndex = 5;
			this->txt_foto2->Text = L"Foto";
			this->txt_foto2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txt_vp
			// 
			this->txt_vp->AutoSize = true;
			this->txt_vp->Dock = System::Windows::Forms::DockStyle::Fill;
			this->txt_vp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_vp->Location = System::Drawing::Point(528, 3);
			this->txt_vp->Margin = System::Windows::Forms::Padding(3);
			this->txt_vp->Name = L"txt_vp";
			this->txt_vp->Size = System::Drawing::Size(120, 388);
			this->txt_vp->TabIndex = 6;
			this->txt_vp->Text = L"Vacuna Parvo";
			this->txt_vp->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txt_vd
			// 
			this->txt_vd->AutoSize = true;
			this->txt_vd->Dock = System::Windows::Forms::DockStyle::Fill;
			this->txt_vd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->txt_vd->Location = System::Drawing::Point(654, 3);
			this->txt_vd->Margin = System::Windows::Forms::Padding(3);
			this->txt_vd->Name = L"txt_vd";
			this->txt_vd->Size = System::Drawing::Size(157, 388);
			this->txt_vd->TabIndex = 7;
			this->txt_vd->Text = L"Vacuna Distemper";
			this->txt_vd->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txt_vr
			// 
			this->txt_vr->AutoSize = true;
			this->txt_vr->Dock = System::Windows::Forms::DockStyle::Fill;
			this->txt_vr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->txt_vr->Location = System::Drawing::Point(817, 3);
			this->txt_vr->Margin = System::Windows::Forms::Padding(3);
			this->txt_vr->Name = L"txt_vr";
			this->txt_vr->Size = System::Drawing::Size(122, 388);
			this->txt_vr->TabIndex = 8;
			this->txt_vr->Text = L"Vacuna Rabia";
			this->txt_vr->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txt_vh
			// 
			this->txt_vh->AutoSize = true;
			this->txt_vh->Dock = System::Windows::Forms::DockStyle::Fill;
			this->txt_vh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->txt_vh->Location = System::Drawing::Point(945, 3);
			this->txt_vh->Margin = System::Windows::Forms::Padding(3);
			this->txt_vh->Name = L"txt_vh";
			this->txt_vh->Size = System::Drawing::Size(147, 388);
			this->txt_vh->TabIndex = 9;
			this->txt_vh->Text = L"Vacuna Hepatitis";
			this->txt_vh->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txt_obs
			// 
			this->txt_obs->AutoSize = true;
			this->txt_obs->Dock = System::Windows::Forms::DockStyle::Fill;
			this->txt_obs->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->txt_obs->Location = System::Drawing::Point(1098, 3);
			this->txt_obs->Margin = System::Windows::Forms::Padding(3);
			this->txt_obs->Name = L"txt_obs";
			this->txt_obs->Size = System::Drawing::Size(443, 388);
			this->txt_obs->TabIndex = 10;
			this->txt_obs->Text = L"Observaciones";
			this->txt_obs->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txt_idcliente
			// 
			this->txt_idcliente->AutoSize = true;
			this->txt_idcliente->Dock = System::Windows::Forms::DockStyle::Fill;
			this->txt_idcliente->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->txt_idcliente->Location = System::Drawing::Point(1547, 3);
			this->txt_idcliente->Margin = System::Windows::Forms::Padding(3);
			this->txt_idcliente->Name = L"txt_idcliente";
			this->txt_idcliente->Size = System::Drawing::Size(89, 388);
			this->txt_idcliente->TabIndex = 11;
			this->txt_idcliente->Text = L"ID Cliente";
			this->txt_idcliente->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Cliente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1250, 550);
			this->Controls->Add(this->mult_cli_mas);
			this->Controls->Add(this->n_masco);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->n_clie);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Cliente";
			this->Text = L"d";
			this->mult_cli_mas->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabla_Clientes->ResumeLayout(false);
			this->tabla_Clientes->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabla_Mascotas->ResumeLayout(false);
			this->tabla_Mascotas->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		Void load_TablaClientes() {
			//Selecciona toda la tabla clientes
			String^ sql = "SELECT * FROM `veterinaria`.`clientes`";
			MySqlCommand^ cursor = gcnew MySqlCommand(sql, conn);
			//Este bloque se encarga de sacar los datos desde la tabla clientes de la base de datos 
			//a una tabla local que permite la manipulación de estos datos
			//y tambien la subida a la tabla que esta en la interfaz grafica
			String^ idCliente;
			String^ Nombres;
			String^ Apellidos;
			array<Byte>^ Foto;
			String^ Correo;
			String^ Telefono;
			String^ Cumpleaños;
			//Etiquetas
			Label^ templabel_0;
			Label^ templabel_1;
			Label^ templabel_2;
			PictureBox^ temppicture_3;
			Label^ templabel_4;
			Label^ templabel_5;
			Label^ templabel_6;
			//Ejecución del código como tal
			try {
				this->conn->Open();
				MySqlDataAdapter^ da = gcnew MySqlDataAdapter(cursor);
				//Variables para almacenar los datos de los clientes
				DataTable^ tabla_clientes = gcnew DataTable();
				da->Fill(tabla_clientes);
				MemoryStream^ ms;
				// Para cada fila imprime el valor de cada columna
				for each (DataRow ^ row in tabla_clientes->Rows) {
					Foto = gcnew array <Byte>(3000);
					//Datos y Foto
					idCliente = gcnew String(row[0]->ToString());
					Nombres = gcnew String(row[1]->ToString());
					Apellidos = gcnew String(row[2]->ToString());
					Foto = (array<Byte>^) row[3];
					Correo = gcnew String(row[4]->ToString());
					Telefono = gcnew String(row[5]->ToString());
					Cumpleaños = gcnew String(row[6]->ToString());
					Cumpleaños = Cumpleaños->Substring(0, 10);
					//Etiquetas
					templabel_0 = (gcnew System::Windows::Forms::Label());
					templabel_1 = (gcnew System::Windows::Forms::Label());
					templabel_2 = (gcnew System::Windows::Forms::Label());
					temppicture_3 = (gcnew System::Windows::Forms::PictureBox());
					templabel_4 = (gcnew System::Windows::Forms::Label());
					templabel_5 = (gcnew System::Windows::Forms::Label());
					templabel_6 = (gcnew System::Windows::Forms::Label());
					//Subida de los datos a la interfaz grafica
					ms = gcnew MemoryStream(Foto);
					add_element_tc(templabel_0, idCliente);
					add_element_tc(templabel_1, Nombres);
					add_element_tc(templabel_2, Apellidos);
					add_element_tc(temppicture_3, ms);
					add_element_tc(templabel_4, Correo);
					add_element_tc(templabel_5, Telefono);
					add_element_tc(templabel_6, Cumpleaños);
				}

			}
			catch (Exception^ x) {
				MessageBox::Show(x->Message);
			}
			this->conn->Close();
		}
	//Elimina los elementos de la tabla clientes para poder recargarla
	private: Void deleteVal_TablaClientes() {
		Int16 it = 0;
		this->tabla_Clientes->Hide();
		while (it < idElementx) {
			this->tabla_Clientes->Controls->RemoveByKey(L"element_" + it);
			it++;
		}
		this->tabla_Clientes->Show();
		idElementx = 0;
		Columnx = 0;
		Rowx = 1;
	}
	//Aqui se usa templates y se hace una especialización(sobrecarga) sobre un template en una funcion
	//Creación de etiquetas label y pictureboxes automatica para la tabla
	private: Int16 idElementx = 0;
	private: Int16 Columnx = 0;
	private: Int16 Rowx = 1;
	private:
		template <typename element, typename text>
		Void add_element_tc(element^ x, text^ ntext) {
			x->AutoSize = true;
			x->Dock = System::Windows::Forms::DockStyle::Fill;
			x->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			x->Margin = System::Windows::Forms::Padding(3);
			x->Name = L"element_" + idElementx;
			x->Text = L"" + ntext;
			x->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->tabla_Clientes->Controls->Add(x, Columnx, Rowx);

			idElementx++;
			Columnx++;
			if (Columnx % 7 == 0) {
				Columnx = 0;
				Rowx++;
			}
		}
	//Especialización de la función para poder subir imagenes
	private:
		template<>
		Void add_element_tc<PictureBox, MemoryStream>(PictureBox^ x, MemoryStream^ ms) {
			x->Dock = System::Windows::Forms::DockStyle::Fill;
			x->Image = Drawing::Image::FromStream(ms);
			x->Name = L"element_" + idElementx;
			x->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			x->TabStop = false;
			this->tabla_Clientes->Controls->Add(x, Columnx, Rowx);

			idElementx++;
			Columnx++;
		}

	private:
		Void load_TablaMascotas() {
			//Selecciona toda la tabla mascotas
			String^ sql = "SELECT * FROM `veterinaria`.`mascotas`";
			MySqlCommand^ cursor = gcnew MySqlCommand(sql, conn);
			//Este bloque se encarga de sacar los datos desde la tabla mascotas de la base de datos 
			//a una tabla local que permite la manipulación de estos datos
			//y tambien la subida a la tabla que esta en la interfaz grafica
			String^ idMascota;
			String^ Nombre;
			String^ Nacimiento;
			String^ Especie;
			String^ Raza;
			array<Byte>^ Foto;
			String^ VParvo;
			String^ VDiste;
			String^ VRabia;
			String^ VHepa;
			String^ Observaciones;
			String^ idCliente;
			//Etiquetas
			Label^ templabel_0;
			Label^ templabel_1;
			Label^ templabel_2;
			Label^ templabel_3;
			Label^ templabel_4;
			PictureBox^ temppicture_5;
			Label^ templabel_6;
			Label^ templabel_7;
			Label^ templabel_8;
			Label^ templabel_9;
			Label^ templabel_10;
			Label^ templabel_11;
			//Ejecución del código como tal
			try {
				this->conn->Open();
				MySqlDataAdapter^ da = gcnew MySqlDataAdapter(cursor);
				//Variables para almacenar los datos de las mascotas
				DataTable^ tabla_mascotas = gcnew DataTable();
				da->Fill(tabla_mascotas);
				MemoryStream^ ms;
				// Para cada fila imprime el valor de cada columna
				for each (DataRow ^ row in tabla_mascotas->Rows) {
					Foto = gcnew array <Byte>(3000);
					//Datos y Foto
					idMascota = gcnew String(row[0]->ToString());
					Nombre = gcnew String(row[1]->ToString());
					Nacimiento = gcnew String(row[2]->ToString());
					Especie = gcnew String(row[3]->ToString());
					Raza = gcnew String(row[4]->ToString());
					Foto = (array<Byte>^) row[5];
					VParvo = gcnew String(row[6]->ToString());
					if (VParvo == "1") { VParvo = "Si"; }
					else { VParvo = "No"; }
					VDiste = gcnew String(row[7]->ToString());
					if (VDiste == "1") { VDiste = "Si"; }
					else { VDiste = "No"; }
					VRabia = gcnew String(row[8]->ToString());
					if (VRabia == "1") { VRabia = "Si"; }
					else { VRabia = "No"; }
					VHepa = gcnew String(row[9]->ToString());
					if (VHepa == "1") { VHepa = "Si"; }
					else { VHepa = "No"; }
					Observaciones = gcnew String(row[10]->ToString());
					idCliente = gcnew String(row[11]->ToString());
					Nacimiento = Nacimiento->Substring(0, 10);
					//Etiquetas
					templabel_0 = (gcnew System::Windows::Forms::Label());
					templabel_1 = (gcnew System::Windows::Forms::Label());
					templabel_2 = (gcnew System::Windows::Forms::Label());
					templabel_3 = (gcnew System::Windows::Forms::Label());
					templabel_4 = (gcnew System::Windows::Forms::Label());
					temppicture_5 = (gcnew System::Windows::Forms::PictureBox());
					templabel_6 = (gcnew System::Windows::Forms::Label());
					templabel_7 = (gcnew System::Windows::Forms::Label());
					templabel_8 = (gcnew System::Windows::Forms::Label());
					templabel_9 = (gcnew System::Windows::Forms::Label());
					templabel_10 = (gcnew System::Windows::Forms::Label());
					templabel_11 = (gcnew System::Windows::Forms::Label());
					//Subida de los datos a la interfaz grafica
					ms = gcnew MemoryStream(Foto);
					add_element_tm(templabel_0, idMascota);
					add_element_tm(templabel_1, Nombre);
					add_element_tm(templabel_2, Nacimiento);
					add_element_tm(templabel_3, Especie);
					add_element_tm(templabel_4, Raza);
					add_element_tm(temppicture_5, ms);
					add_element_tm(templabel_6, VParvo);
					add_element_tm(templabel_7, VDiste);
					add_element_tm(templabel_8, VRabia);
					add_element_tm(templabel_9, VHepa);
					add_element_tm(templabel_10, Observaciones);
					add_element_tm(templabel_11, idCliente);
				}

			}
			catch (Exception^ x) {
				MessageBox::Show(x->Message);
			}
			this->conn->Close();
		}
	//Elimina los elementos de la tabla mascotas para poder recargarla
	private: Void deleteVal_TablaMascotas() {
		Int16 it = 0;
		this->tabla_Mascotas->Hide();
		while (it < idElementy) {
			this->tabla_Mascotas->Controls->RemoveByKey(L"element_" + it);
			it++;
		}
		this->tabla_Mascotas->Show();
		idElementy = 0;
		Columny = 0;
		Rowy = 1;
	}
	//Aqui se usa templates y se hace una especialización(sobrecarga) sobre un template en una funcion
	//Creación de etiquetas label y pictureboxes automatica para la tabla
	private: Int16 idElementy = 0;
	private: Int16 Columny = 0;
	private: Int16 Rowy = 1;
	private:
		template <typename element, typename text>
		Void add_element_tm(element^ x, text^ ntext) {
			x->AutoSize = true;
			x->Dock = System::Windows::Forms::DockStyle::Fill;
			x->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			x->Margin = System::Windows::Forms::Padding(3);
			x->Name = L"element_" + idElementy;
			x->Text = L"" + ntext;
			x->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->tabla_Mascotas->Controls->Add(x, Columny, Rowy);

			idElementy++;
			Columny++;
			if (Columny % 12 == 0) {
				Columny = 0;
				Rowy++;
			}
		}
	//Especialización de la función para poder subir imagenes
	private:
		template<>
		Void add_element_tm<PictureBox, MemoryStream>(PictureBox^ x, MemoryStream^ ms) {
			x->Dock = System::Windows::Forms::DockStyle::Fill;
			x->Image = Drawing::Image::FromStream(ms);
			x->Name = L"element_" + idElementy;
			x->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			x->TabStop = false;
			this->tabla_Mascotas->Controls->Add(x, Columny, Rowy);

			idElementy++;
			Columny++;
		}

	//Abre la ventana addCliente
	private: Void n_clie_Click(System::Object^ sender, System::EventArgs^ e) {
		VetPro::addCliente^ nueva_Vent = gcnew VetPro::addCliente();
		nueva_Vent->ShowDialog();
		deleteVal_TablaClientes();
		load_TablaClientes();
	}
	//Abre la ventana addMascota
	private: Void n_masco_Click(System::Object^ sender, System::EventArgs^ e) {
		VetPro::addMascota^ nueva_Vent = gcnew VetPro::addMascota();
		nueva_Vent->ShowDialog();
		deleteVal_TablaMascotas();
		load_TablaMascotas();
	}
};
}