#pragma once
#include "CircularPictureBox.h"

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
			this->name->Text = user;
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
	private: System::Windows::Forms::Panel^ Menu;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ name;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel5;

	private: System::Windows::Forms::Button^ clientes;
	private: System::Windows::Forms::Button^ citas;
	private: System::Windows::Forms::PictureBox^ logo;



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
			this->logo = (gcnew System::Windows::Forms::PictureBox());
			this->Menu = (gcnew System::Windows::Forms::Panel());
			this->clientes = (gcnew System::Windows::Forms::Button());
			this->citas = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->name = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->icon_menu))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->icon_vet))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logo))->BeginInit();
			this->Menu->SuspendLayout();
			this->panel4->SuspendLayout();
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
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1685, 114);
			this->panel1->TabIndex = 0;
			// 
			// icon_menu
			// 
			this->icon_menu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"icon_menu.Image")));
			this->icon_menu->Location = System::Drawing::Point(16, 20);
			this->icon_menu->Margin = System::Windows::Forms::Padding(4);
			this->icon_menu->Name = L"icon_menu";
			this->icon_menu->Size = System::Drawing::Size(77, 68);
			this->icon_menu->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->icon_menu->TabIndex = 0;
			this->icon_menu->TabStop = false;
			this->icon_menu->Click += gcnew System::EventHandler(this, &Main_menu::icon_menu_Click);
			// 
			// icon_vet
			// 
			this->icon_vet->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"icon_vet.Image")));
			this->icon_vet->Location = System::Drawing::Point(637, 4);
			this->icon_vet->Margin = System::Windows::Forms::Padding(4);
			this->icon_vet->Name = L"icon_vet";
			this->icon_vet->Size = System::Drawing::Size(152, 100);
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
			this->label1->Location = System::Drawing::Point(771, 20);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(213, 69);
			this->label1->TabIndex = 1;
			this->label1->Text = L"VetPro";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->logo);
			this->panel2->Controls->Add(this->Menu);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 114);
			this->panel2->Margin = System::Windows::Forms::Padding(4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1685, 724);
			this->panel2->TabIndex = 1;
			// 
			// logo
			// 
			this->logo->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->logo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logo.Image")));
			this->logo->Location = System::Drawing::Point(736, 179);
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
			this->Menu->Dock = System::Windows::Forms::DockStyle::Left;
			this->Menu->Location = System::Drawing::Point(0, 0);
			this->Menu->Name = L"Menu";
			this->Menu->Size = System::Drawing::Size(343, 724);
			this->Menu->TabIndex = 1;
			// 
			// clientes
			// 
			this->clientes->Dock = System::Windows::Forms::DockStyle::Top;
			this->clientes->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->clientes->Font = (gcnew System::Drawing::Font(L"Yet R", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->clientes->ForeColor = System::Drawing::Color::White;
			this->clientes->Location = System::Drawing::Point(0, 397);
			this->clientes->Name = L"clientes";
			this->clientes->Size = System::Drawing::Size(343, 74);
			this->clientes->TabIndex = 3;
			this->clientes->Text = L"Clientes";
			this->clientes->UseVisualStyleBackColor = true;
			// 
			// citas
			// 
			this->citas->Dock = System::Windows::Forms::DockStyle::Top;
			this->citas->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->citas->Font = (gcnew System::Drawing::Font(L"Yet R", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->citas->ForeColor = System::Drawing::Color::White;
			this->citas->Location = System::Drawing::Point(0, 323);
			this->citas->Name = L"citas";
			this->citas->Size = System::Drawing::Size(343, 74);
			this->citas->TabIndex = 2;
			this->citas->Text = L"Citas";
			this->citas->UseVisualStyleBackColor = true;
			// 
			// panel5
			// 
			this->panel5->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel5->Location = System::Drawing::Point(0, 91);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(343, 232);
			this->panel5->TabIndex = 1;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->name);
			this->panel4->Controls->Add(this->label3);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel4->Location = System::Drawing::Point(0, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(343, 91);
			this->panel4->TabIndex = 0;
			// 
			// name
			// 
			this->name->AutoSize = true;
			this->name->Font = (gcnew System::Drawing::Font(L"Yet R", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->name->ForeColor = System::Drawing::Color::White;
			this->name->Location = System::Drawing::Point(87, 42);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(176, 35);
			this->name->TabIndex = 1;
			this->name->Text = L"PANCHITO";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Yet R", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(105, 14);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(141, 26);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Bienvenido";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->panel3->Controls->Add(this->label2);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Margin = System::Windows::Forms::Padding(4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(0, 724);
			this->panel3->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(16, 33);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 29);
			this->label2->TabIndex = 0;
			// 
			// Main_menu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1685, 838);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Main_menu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"VetPro";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->icon_menu))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->icon_vet))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logo))->EndInit();
			this->Menu->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
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

