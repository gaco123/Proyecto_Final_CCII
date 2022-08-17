#pragma once
#pragma once

#include "addCitas.h"
namespace VetPro {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	public ref class Cita : public System::Windows::Forms::Form {
	public:
		Cita(void) {
			InitializeComponent();
			reload_TableCitas();
		}

	protected:
		~Cita() {
			if (components) {
				delete components;
			}
		}
	private: String^ connectionString = "datasource=localhost; username=root; password=1234; database=veterinaria";
	private: MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
	private: System::Windows::Forms::Button^ n_cita;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TableLayoutPanel^ tabla_Citas;

	private: System::Windows::Forms::Label^ txt_id;
	private: System::Windows::Forms::Label^ txt_hora;
	private: System::Windows::Forms::Label^ txt_fecha;
	private: System::Windows::Forms::Label^ txt_obs;
	private: System::Windows::Forms::Label^ txt_idcliente;
	private: System::Windows::Forms::Label^ txt_idmascota;

	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void) {
			this->n_cita = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tabla_Citas = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->txt_id = (gcnew System::Windows::Forms::Label());
			this->txt_hora = (gcnew System::Windows::Forms::Label());
			this->txt_fecha = (gcnew System::Windows::Forms::Label());
			this->txt_obs = (gcnew System::Windows::Forms::Label());
			this->txt_idcliente = (gcnew System::Windows::Forms::Label());
			this->txt_idmascota = (gcnew System::Windows::Forms::Label());
			this->tabla_Citas->SuspendLayout();
			this->SuspendLayout();
			// 
			// n_cita
			// 
			this->n_cita->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->n_cita->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold));
			this->n_cita->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->n_cita->Location = System::Drawing::Point(1030, 289);
			this->n_cita->Margin = System::Windows::Forms::Padding(2);
			this->n_cita->Name = L"n_cita";
			this->n_cita->Size = System::Drawing::Size(196, 64);
			this->n_cita->TabIndex = 0;
			this->n_cita->Text = L"Nueva Cita";
			this->n_cita->UseVisualStyleBackColor = false;
			this->n_cita->Click += gcnew System::EventHandler(this, &Cita::n_cita_Click);
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->label3->Location = System::Drawing::Point(391, 19);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(429, 84);
			this->label3->TabIndex = 36;
			this->label3->Text = L"Citas del Día";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tabla_Citas
			// 
			this->tabla_Citas->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Inset;
			this->tabla_Citas->ColumnCount = 6;
			this->tabla_Citas->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 52)));
			this->tabla_Citas->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 12.02186F)));
			this->tabla_Citas->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 17.66849F)));
			this->tabla_Citas->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 41.25683F)));
			this->tabla_Citas->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 15.02732F)));
			this->tabla_Citas->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 14.0255F)));
			this->tabla_Citas->Controls->Add(this->txt_id, 0, 0);
			this->tabla_Citas->Controls->Add(this->txt_hora, 1, 0);
			this->tabla_Citas->Controls->Add(this->txt_fecha, 2, 0);
			this->tabla_Citas->Controls->Add(this->txt_obs, 3, 0);
			this->tabla_Citas->Controls->Add(this->txt_idcliente, 4, 0);
			this->tabla_Citas->Controls->Add(this->txt_idmascota, 5, 0);
			this->tabla_Citas->Location = System::Drawing::Point(38, 117);
			this->tabla_Citas->Name = L"tabla_Citas";
			this->tabla_Citas->RowCount = 1;
			this->tabla_Citas->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tabla_Citas->Size = System::Drawing::Size(964, 408);
			this->tabla_Citas->TabIndex = 41;
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
			this->txt_id->Size = System::Drawing::Size(46, 404);
			this->txt_id->TabIndex = 0;
			this->txt_id->Text = L"ID";
			this->txt_id->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txt_hora
			// 
			this->txt_hora->AutoSize = true;
			this->txt_hora->Dock = System::Windows::Forms::DockStyle::Fill;
			this->txt_hora->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_hora->Location = System::Drawing::Point(59, 5);
			this->txt_hora->Margin = System::Windows::Forms::Padding(3);
			this->txt_hora->Name = L"txt_hora";
			this->txt_hora->Size = System::Drawing::Size(101, 404);
			this->txt_hora->TabIndex = 1;
			this->txt_hora->Text = L"Hora";
			this->txt_hora->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txt_fecha
			// 
			this->txt_fecha->AutoSize = true;
			this->txt_fecha->Dock = System::Windows::Forms::DockStyle::Fill;
			this->txt_fecha->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_fecha->Location = System::Drawing::Point(168, 5);
			this->txt_fecha->Margin = System::Windows::Forms::Padding(3);
			this->txt_fecha->Name = L"txt_fecha";
			this->txt_fecha->Size = System::Drawing::Size(152, 404);
			this->txt_fecha->TabIndex = 2;
			this->txt_fecha->Text = L"Fecha";
			this->txt_fecha->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txt_obs
			// 
			this->txt_obs->AutoSize = true;
			this->txt_obs->Dock = System::Windows::Forms::DockStyle::Fill;
			this->txt_obs->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_obs->Location = System::Drawing::Point(328, 5);
			this->txt_obs->Margin = System::Windows::Forms::Padding(3);
			this->txt_obs->Name = L"txt_obs";
			this->txt_obs->Size = System::Drawing::Size(364, 404);
			this->txt_obs->TabIndex = 3;
			this->txt_obs->Text = L"Observaciones";
			this->txt_obs->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txt_idcliente
			// 
			this->txt_idcliente->AutoSize = true;
			this->txt_idcliente->Dock = System::Windows::Forms::DockStyle::Fill;
			this->txt_idcliente->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_idcliente->Location = System::Drawing::Point(700, 5);
			this->txt_idcliente->Margin = System::Windows::Forms::Padding(3);
			this->txt_idcliente->Name = L"txt_idcliente";
			this->txt_idcliente->Size = System::Drawing::Size(128, 404);
			this->txt_idcliente->TabIndex = 4;
			this->txt_idcliente->Text = L"ID Cliente";
			this->txt_idcliente->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txt_idmascota
			// 
			this->txt_idmascota->AutoSize = true;
			this->txt_idmascota->Dock = System::Windows::Forms::DockStyle::Fill;
			this->txt_idmascota->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_idmascota->Location = System::Drawing::Point(836, 5);
			this->txt_idmascota->Margin = System::Windows::Forms::Padding(3);
			this->txt_idmascota->Name = L"txt_idmascota";
			this->txt_idmascota->Size = System::Drawing::Size(123, 404);
			this->txt_idmascota->TabIndex = 5;
			this->txt_idmascota->Text = L"ID Mascota";
			this->txt_idmascota->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Cita
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1250, 550);
			this->Controls->Add(this->tabla_Citas);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->n_cita);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Cita";
			this->Text = L"Citas";
			this->tabla_Citas->ResumeLayout(false);
			this->tabla_Citas->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		Void reload_TableCitas() {
			//Selecciona toda la tabla citas
			String^ sql = "SELECT * FROM `veterinaria`.`citas`";
			MySqlCommand^ cursor = gcnew MySqlCommand(sql, conn);
			//Este bloque se encarga de sacar los datos desde la tabla citas de la base de datos 
			//a una tabla local que permite la manipulación de estos datos
			//y tambien la subida a tabla que esta en la interfaz grafica
			String^ idCita;
			String^ Hora;
			String^ Fecha;
			String^ Observaciones;
			String^ idCliente;
			String^ idMascota;
			//Etiquetas
			Label^ templabel_0;
			Label^ templabel_1;
			Label^ templabel_2;
			Label^ templabel_3;
			Label^ templabel_4;
			Label^ templabel_5;
			//Ejecución del código como tal
			try {
				this->conn->Open();
				MySqlDataAdapter^ da = gcnew MySqlDataAdapter(cursor);
				//Variables para almacenar los datos de los clientes
				DataTable^ tabla_citas = gcnew DataTable();
				da->Fill(tabla_citas);
				// Para cada fila imprime el valor de cada columna
				for each (DataRow ^ row in tabla_citas->Rows) {
					//Datos y Foto
					idCita = gcnew String(row[0]->ToString());
					Hora = gcnew String(row[1]->ToString());
					Fecha = gcnew String(row[2]->ToString());
					Observaciones = gcnew String(row[3]->ToString());
					idCliente = gcnew String(row[4]->ToString());
					idMascota = gcnew String(row[5]->ToString());
					//Etiquetas
					templabel_0 = (gcnew System::Windows::Forms::Label());
					templabel_1 = (gcnew System::Windows::Forms::Label());
					templabel_2 = (gcnew System::Windows::Forms::Label());
					templabel_3 = (gcnew System::Windows::Forms::Label());
					templabel_4 = (gcnew System::Windows::Forms::Label());
					templabel_5 = (gcnew System::Windows::Forms::Label());
					//Subida de los datos a la interfaz g´rafica
					add_element(templabel_0, idCita);
					add_element(templabel_1, Hora);
					add_element(templabel_2, Fecha);
					add_element(templabel_3, Observaciones);
					add_element(templabel_4, idCliente);
					add_element(templabel_5, idMascota);
				}

			}
			catch (Exception^ x) {
				MessageBox::Show(x->Message);
			}
			this->conn->Close();
		}
	//Aqui se usa templates
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
			x->Name = L"sub_element_" + idElementx;
			x->Text = L"" + ntext;
			x->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->tabla_Citas->Controls->Add(x, Columnx, Rowx);

			idElementx++;
			Columnx++;
			if (Columnx % 6 == 0) {
				Columnx = 0;
				Rowx++;
			}
		}
	//Abre la ventana addCitas
	private: Void n_cita_Click(System::Object^ sender, System::EventArgs^ e) {
		VetPro::addCitas^ nuevo_Ci = gcnew VetPro::addCitas();
		nuevo_Ci->ShowDialog();
	}
	};
}