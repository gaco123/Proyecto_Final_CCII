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
			reload_TableClientes();
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
	private: System::Windows::Forms::TableLayoutPanel^ tabla_Clientes;
	private: System::Windows::Forms::Label^ txt_id;
	private: System::Windows::Forms::Label^ txt_nombres;
	private: System::Windows::Forms::Label^ txt_apellidos;
	private: System::Windows::Forms::Label^ txt_foto;
	private: System::Windows::Forms::Label^ txt_correo;
	private: System::Windows::Forms::Label^ txt_telefono;
	private: System::Windows::Forms::Label^ txt_cumple;

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
			this->tabla_Clientes = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->txt_id = (gcnew System::Windows::Forms::Label());
			this->txt_nombres = (gcnew System::Windows::Forms::Label());
			this->txt_apellidos = (gcnew System::Windows::Forms::Label());
			this->txt_foto = (gcnew System::Windows::Forms::Label());
			this->txt_correo = (gcnew System::Windows::Forms::Label());
			this->txt_telefono = (gcnew System::Windows::Forms::Label());
			this->txt_cumple = (gcnew System::Windows::Forms::Label());
			this->tabla_Clientes->SuspendLayout();
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->label3->Location = System::Drawing::Point(476, 27);
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
			// tabla_Clientes
			// 
			this->tabla_Clientes->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Inset;
			this->tabla_Clientes->ColumnCount = 7;
			this->tabla_Clientes->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				41)));
			this->tabla_Clientes->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				18.72977F)));
			this->tabla_Clientes->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20.19656F)));
			this->tabla_Clientes->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				9.026396F)));
			this->tabla_Clientes->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				18.31112F)));
			this->tabla_Clientes->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				17.03732F)));
			this->tabla_Clientes->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.69883F)));
			this->tabla_Clientes->Controls->Add(this->txt_id, 0, 0);
			this->tabla_Clientes->Controls->Add(this->txt_nombres, 1, 0);
			this->tabla_Clientes->Controls->Add(this->txt_apellidos, 2, 0);
			this->tabla_Clientes->Controls->Add(this->txt_foto, 3, 0);
			this->tabla_Clientes->Controls->Add(this->txt_correo, 4, 0);
			this->tabla_Clientes->Controls->Add(this->txt_telefono, 5, 0);
			this->tabla_Clientes->Controls->Add(this->txt_cumple, 6, 0);
			this->tabla_Clientes->Location = System::Drawing::Point(46, 112);
			this->tabla_Clientes->Name = L"tabla_Clientes";
			this->tabla_Clientes->RowCount = 1;
			this->tabla_Clientes->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 403)));
			this->tabla_Clientes->Size = System::Drawing::Size(918, 403);
			this->tabla_Clientes->TabIndex = 40;
			// 
			// txt_id
			// 
			this->txt_id->AutoSize = true;
			this->txt_id->Dock = System::Windows::Forms::DockStyle::Fill;
			this->txt_id->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_id->Location = System::Drawing::Point(5, 5);
			this->txt_id->Margin = System::Windows::Forms::Padding(3);
			this->txt_id->Name = L"txt_id";
			this->txt_id->Size = System::Drawing::Size(35, 397);
			this->txt_id->TabIndex = 0;
			this->txt_id->Text = L"ID";
			this->txt_id->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txt_nombres
			// 
			this->txt_nombres->AutoSize = true;
			this->txt_nombres->Dock = System::Windows::Forms::DockStyle::Fill;
			this->txt_nombres->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_nombres->Location = System::Drawing::Point(48, 5);
			this->txt_nombres->Margin = System::Windows::Forms::Padding(3);
			this->txt_nombres->Name = L"txt_nombres";
			this->txt_nombres->Size = System::Drawing::Size(155, 397);
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
			this->txt_apellidos->Location = System::Drawing::Point(211, 5);
			this->txt_apellidos->Margin = System::Windows::Forms::Padding(3);
			this->txt_apellidos->Name = L"txt_apellidos";
			this->txt_apellidos->Size = System::Drawing::Size(167, 397);
			this->txt_apellidos->TabIndex = 2;
			this->txt_apellidos->Text = L"Apellidos";
			this->txt_apellidos->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txt_foto
			// 
			this->txt_foto->AutoSize = true;
			this->txt_foto->Dock = System::Windows::Forms::DockStyle::Fill;
			this->txt_foto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_foto->Location = System::Drawing::Point(386, 5);
			this->txt_foto->Margin = System::Windows::Forms::Padding(3);
			this->txt_foto->Name = L"txt_foto";
			this->txt_foto->Size = System::Drawing::Size(71, 397);
			this->txt_foto->TabIndex = 3;
			this->txt_foto->Text = L"Foto";
			this->txt_foto->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txt_correo
			// 
			this->txt_correo->AutoSize = true;
			this->txt_correo->Dock = System::Windows::Forms::DockStyle::Fill;
			this->txt_correo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_correo->Location = System::Drawing::Point(465, 5);
			this->txt_correo->Margin = System::Windows::Forms::Padding(3);
			this->txt_correo->Name = L"txt_correo";
			this->txt_correo->Size = System::Drawing::Size(151, 397);
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
			this->txt_telefono->Location = System::Drawing::Point(624, 5);
			this->txt_telefono->Margin = System::Windows::Forms::Padding(3);
			this->txt_telefono->Name = L"txt_telefono";
			this->txt_telefono->Size = System::Drawing::Size(140, 397);
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
			this->txt_cumple->Location = System::Drawing::Point(772, 5);
			this->txt_cumple->Margin = System::Windows::Forms::Padding(3);
			this->txt_cumple->Name = L"txt_cumple";
			this->txt_cumple->Size = System::Drawing::Size(141, 397);
			this->txt_cumple->TabIndex = 6;
			this->txt_cumple->Text = L"Cumpleaños";
			this->txt_cumple->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Cliente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1250, 550);
			this->Controls->Add(this->tabla_Clientes);
			this->Controls->Add(this->n_masco);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->n_clie);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Cliente";
			this->Text = L"Cliente";
			this->tabla_Clientes->ResumeLayout(false);
			this->tabla_Clientes->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		Void reload_TableClientes() {
			//Selecciona toda la tabla clientes
			String^ sql = "SELECT * FROM `veterinaria`.`clientes`";
			MySqlCommand^ cursor = gcnew MySqlCommand(sql, conn);
			//Este bloque se encarga de sacar los datos desde la tabla clientes de la base de datos 
			//a una tabla local que permite la manipulación de estos datos
			//y tambien la subida a tabla que esta en la interfaz grafica
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
					//Etiquetas
					templabel_0 = (gcnew System::Windows::Forms::Label());
					templabel_1 = (gcnew System::Windows::Forms::Label());
					templabel_2 = (gcnew System::Windows::Forms::Label());
					temppicture_3 = (gcnew System::Windows::Forms::PictureBox());
					templabel_4 = (gcnew System::Windows::Forms::Label());
					templabel_5 = (gcnew System::Windows::Forms::Label());
					templabel_6 = (gcnew System::Windows::Forms::Label());
					//Subida de los datos a la interfaz g´rafica
					ms = gcnew MemoryStream(Foto);
					add_element(templabel_0, idCliente);
					add_element(templabel_1, Nombres);
					add_element(templabel_2, Apellidos);
					add_element(temppicture_3, ms);
					add_element(templabel_4, Correo);
					add_element(templabel_5, Telefono);
					add_element(templabel_6, Cumpleaños);
				}

			}
			catch (Exception^ x) {
				MessageBox::Show(x->Message);
			}
			this->conn->Close();
		}
	//Aqui se usa templates y se hace una especialización(sobrecarga) sobre un template en una funcion
	//Creación de etiquetas label y pictureboxes automatica para la tabla
	private: Int16 idElementx = 0;
	private: Int16 Columnx = 0;
	private: Int16 Rowx = 1;
	private: 
		template <typename element, typename text>
		Void add_element(element^ x, text^ ntext) {
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
		Void add_element<PictureBox,MemoryStream>(PictureBox^ x, MemoryStream^ ms) {
			x->Dock = System::Windows::Forms::DockStyle::Fill;
			x->Image = Drawing::Image::FromStream(ms);
			x->Name = L"picture_" + idElementx;
			x->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			x->TabStop = false;
			this->tabla_Clientes->Controls->Add(x, Columnx, Rowx);

			idElementx++;
			Columnx++;
		}
	//Abre la ventana addCliente
	private: Void n_clie_Click(System::Object^ sender, System::EventArgs^ e) {
		VetPro::addCliente^ nueva_Vent = gcnew VetPro::addCliente();
		nueva_Vent->ShowDialog();
	}
	//Abre la ventana addMascota
	private: Void n_masco_Click(System::Object^ sender, System::EventArgs^ e) {
		VetPro::addMascota^ nueva_Vent = gcnew VetPro::addMascota();
		nueva_Vent->ShowDialog();
	}
};
}