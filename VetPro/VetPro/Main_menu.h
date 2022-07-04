#pragma once

namespace VetPro {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Main_menu
	/// </summary>
	public ref class Main_menu : public System::Windows::Forms::Form
	{
	public:
		Main_menu(void){
			InitializeComponent();
		}
		Main_menu(System::String^ user) {
			InitializeComponent();
			this->user = user;
			this->label2->Text = L"¡Bienvenido, " + user + "!";
		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Main_menu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ icon_vet;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::PictureBox^ icon_menu;
	private: System::Windows::Forms::Label^ label2;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Main_menu::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->icon_menu = (gcnew System::Windows::Forms::PictureBox());
			this->icon_vet = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->icon_menu))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->icon_vet))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
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
			this->panel1->Size = System::Drawing::Size(1264, 87);
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
			// panel2
			// 
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 87);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1264, 594);
			this->panel2->TabIndex = 1;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->panel3->Controls->Add(this->label2);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(0, 594);
			this->panel3->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(12, 27);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 24);
			this->label2->TabIndex = 0;
			// 
			// Main_menu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->panel2);
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
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Int16 anima_open_panel3(Int16 x) {
		while (x <= this->label2->Width + 25) {
			this->panel3->Size = System::Drawing::Size(x, 594);
			x+=2;
		}
		this->label2->Show();
		return x;
	}
	private: System::Int16 anima_close_panel3(Int16 x) {
		while (x >= 0) {
			this->panel3->Size = System::Drawing::Size(x, 594);
			x-=2;
		}
		this->label2->Hide();
		return x;
	}
	private: System::Int16 panel3x = 0;
	private: System::Boolean comp = true;
	private: System::String^ user;
	private: System::Void icon_menu_Click(System::Object^ sender, System::EventArgs^ e) {
		if (comp == true) {
			panel3x =anima_open_panel3(panel3x);
			comp = false;
		}
		else {
			panel3x =anima_close_panel3(panel3x);
			comp = true;
		}
	}
};
}
