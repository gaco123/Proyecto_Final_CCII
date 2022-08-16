#pragma once
namespace VetPro {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class addCitas : public System::Windows::Forms::Form {
	public:
		addCitas(void) {
			InitializeComponent();
			//Insertar los nombres de los clientes en una list para agregarlos al ComboBox box_Clientes
			String^ sql1 = "SELECT `Nombres` FROM `veterinaria`.`clientes`";
			MySqlCommand^ cursor1 = gcnew MySqlCommand(sql1, conn);
			MySqlDataReader^ dataReader1;
			try {
				this->conn->Open();
				dataReader1 = cursor1->ExecuteReader();
				if (dataReader1->HasRows) {
					while (dataReader1->Read()) {
						listaclientes->Add(dataReader1[0]->ToString());
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
			for each (String ^ cliente in listaclientes) {
				this->box_Clientes->Items->Add(cliente);
			}

			//Obtener datos para el list listamascotas
			String^ sql2 = "SELECT `Nombre` FROM `veterinaria`.`mascotas`";
			MySqlCommand^ cursor2 = gcnew MySqlCommand(sql2, conn);
			MySqlDataReader^ dataReader2;
			try {
				this->conn->Open();
				dataReader2 = cursor2->ExecuteReader();
				if (dataReader2->HasRows) {
					while (dataReader2->Read()) {
						listamascotas->Add(dataReader2[0]->ToString());
					}
				}
				else {
					MessageBox::Show(L"No existen mascotas registradas");
				}
			}
			catch (Exception^ x) {
				MessageBox::Show(x->Message);
			}
			this->conn->Close();
		}

	protected:
		~addCitas() {
			if (components) {
				delete components;
			}
		}

	private: String^ connectionString = "datasource=localhost; username=root; password=1234; database=veterinaria";
	private: MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ txt_obs;
	private: System::Windows::Forms::DateTimePicker^ h_select;
	private: System::Windows::Forms::DateTimePicker^ f_select;
	private: System::Windows::Forms::ComboBox^ box_Clientes;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ box_Mascotas;


	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(addCitas::typeid));
			this->txt_obs = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->h_select = (gcnew System::Windows::Forms::DateTimePicker());
			this->f_select = (gcnew System::Windows::Forms::DateTimePicker());
			this->box_Clientes = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->box_Mascotas = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// txt_obs
			// 
			this->txt_obs->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txt_obs->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_obs->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->txt_obs->Location = System::Drawing::Point(50, 317);
			this->txt_obs->Multiline = true;
			this->txt_obs->Name = L"txt_obs";
			this->txt_obs->Size = System::Drawing::Size(1139, 122);
			this->txt_obs->TabIndex = 38;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(44, 268);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(221, 36);
			this->label5->TabIndex = 39;
			this->label5->Text = L"Observaciones:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(44, 115);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(115, 36);
			this->label4->TabIndex = 37;
			this->label4->Text = L"Cliente:";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->label3->Location = System::Drawing::Point(470, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(308, 68);
			this->label3->TabIndex = 35;
			this->label3->Text = L"Nueva Cita";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(904, 188);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(105, 36);
			this->label2->TabIndex = 34;
			this->label2->Text = L"Fecha:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(616, 189);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(87, 36);
			this->label1->TabIndex = 33;
			this->label1->Text = L"Hora:";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(466, 458);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(295, 68);
			this->button2->TabIndex = 32;
			this->button2->Text = L"Registrar Cita";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &addCitas::button2_Click);
			// 
			// h_select
			// 
			this->h_select->CustomFormat = L"HH:mm";
			this->h_select->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->h_select->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->h_select->Location = System::Drawing::Point(708, 189);
			this->h_select->Margin = System::Windows::Forms::Padding(0);
			this->h_select->Name = L"h_select";
			this->h_select->ShowUpDown = true;
			this->h_select->Size = System::Drawing::Size(175, 35);
			this->h_select->TabIndex = 40;
			this->h_select->Value = System::DateTime(2022, 8, 16, 0, 11, 45, 0);
			// 
			// f_select
			// 
			this->f_select->CustomFormat = L"yyyy-MM-dd";
			this->f_select->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->f_select->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->f_select->Location = System::Drawing::Point(1014, 190);
			this->f_select->Margin = System::Windows::Forms::Padding(2);
			this->f_select->Name = L"f_select";
			this->f_select->Size = System::Drawing::Size(175, 35);
			this->f_select->TabIndex = 41;
			this->f_select->Value = System::DateTime(2022, 8, 16, 0, 0, 0, 0);
			// 
			// box_Clientes
			// 
			this->box_Clientes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->box_Clientes->FormattingEnabled = true;
			this->box_Clientes->Location = System::Drawing::Point(200, 112);
			this->box_Clientes->Margin = System::Windows::Forms::Padding(2);
			this->box_Clientes->Name = L"box_Clientes";
			this->box_Clientes->Size = System::Drawing::Size(989, 39);
			this->box_Clientes->TabIndex = 42;
			this->box_Clientes->TextChanged += gcnew System::EventHandler(this, &addCitas::box_Clientes_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(44, 189);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(135, 36);
			this->label6->TabIndex = 43;
			this->label6->Text = L"Mascota:";
			// 
			// box_Mascotas
			// 
			this->box_Mascotas->Enabled = false;
			this->box_Mascotas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->box_Mascotas->FormattingEnabled = true;
			this->box_Mascotas->Location = System::Drawing::Point(200, 189);
			this->box_Mascotas->Margin = System::Windows::Forms::Padding(2);
			this->box_Mascotas->Name = L"box_Mascotas";
			this->box_Mascotas->Size = System::Drawing::Size(402, 39);
			this->box_Mascotas->TabIndex = 44;
			// 
			// addCitas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1250, 550);
			this->Controls->Add(this->box_Mascotas);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->box_Clientes);
			this->Controls->Add(this->f_select);
			this->Controls->Add(this->h_select);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txt_obs);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"addCitas";
			this->Text = L"Añadir Cita";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//Esta funcion evita que los diferentes input del registro del formulario addMascota esten vacíos
	private: Boolean checkTextBox_Empty() {
		if (String::IsNullOrEmpty(box_Clientes->Text) || String::IsNullOrEmpty(box_Mascotas->Text)
			|| System::String::IsNullOrEmpty(h_select->Text) || String::IsNullOrEmpty(f_select->Text)
			|| System::String::IsNullOrEmpty(txt_obs->Text)) {
			return false;
		}
		else {
			return true;
		}
	}

	//Solo permite que se seleccionen las mascotas de un cliente en especifico
	private: Void box_Clientes_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		List<String^>^ listamascotas_temp = gcnew List<String^>();
		Int16 idCliente = 1;
		Boolean compClient = false;
		for each (String ^ cliente in listaclientes) {
			if (box_Clientes->Text == cliente) {
				compClient = true;
				break;
			}
			idCliente++;
		}

		//Insertar los nombres de las mascotas en una list para agregarlos al ComboBox box_Mascotas
		if (compClient == true) {
			this->box_Mascotas->Items->Clear();
			String^ sql = "SELECT `Nombre` FROM `veterinaria`.`mascotas` WHERE Clientes_idCliente = '" + idCliente + "'";
			MySqlCommand^ cursor = gcnew MySqlCommand(sql, conn);
			MySqlDataReader^ dataReader;
			try {
				this->conn->Open();
				dataReader = cursor->ExecuteReader();
				if (dataReader->HasRows) {
					while (dataReader->Read()) {
						listamascotas_temp->Add(dataReader[0]->ToString());
					}
				}
				else {
					MessageBox::Show(L"No existen mascotas registradas a nombre de este cliente");
				}
			}
			catch (Exception^ x) {
				MessageBox::Show(x->Message);
			}
			this->conn->Close();
			for each (String ^ mascota in listamascotas_temp) {
				this->box_Mascotas->Items->Add(mascota);
			}
			this->box_Mascotas->Text = "";
			this->box_Mascotas->Enabled = true;
		}
		else {
			this->box_Mascotas->Enabled = false;
			MessageBox::Show(L"No existe este cliente");
		}
	}

	//Guarda una lista de los nombres de los dueños(clientes)
	List<String^>^ listaclientes = gcnew List<String^>();
	List<String^>^ listamascotas = gcnew List<String^>();

	private: Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		//idCliente actual del dueño de la mascota
		Int16 idCliente = 1;
		Boolean compClient = false;
		for each (String ^ cliente in listaclientes) {
			if (box_Clientes->Text == cliente) {
				compClient = true;
				break;
			}
			idCliente++;
		}
		//idMascota actual de la mascota
		Int16 idMascota = 1;
		Boolean compMascota = false;
		for each (String ^ mascota in listamascotas) {
			if (box_Mascotas->Text == mascota) {
				compMascota = true;
				break;
			}
			idMascota++;
		}

		//Este if se encarga de comprobar que en el dueño ingresado por texto se encuentre en la listay que no haya ningun campo vacío
		if (compMascota == true && compClient == true && checkTextBox_Empty()) {
			//Apertura, ingreso de datos de la mascota y cierre de la base de datos
			String^ sql = "INSERT INTO `veterinaria`.`citas` (`Hora`,`Fecha`,`Observaciones`,`Clientes_idCliente`,`Mascotas_idMascota`) VALUE ('" + h_select->Text + "', '" + f_select->Text + "', '" + txt_obs->Text + "', '" + idCliente + "', '" + idMascota + "')";
			MySqlCommand^ cursor2 = gcnew MySqlCommand(sql, conn);
			try {
				this->conn->Open();
				bool i = cursor2->ExecuteNonQuery();
				if (i) {
					MessageBox::Show(L"Cita Registrada");
					this->Visible = false;
				}
				else {
					MessageBox::Show(L"Error al registrar la cita");
				}
			}
			catch (Exception^ x) {
				MessageBox::Show(x->Message);
			}
			this->conn->Close();
		}
		else {
			MessageBox::Show(L"Error al registrar la cita");
		}
	}
};
}
