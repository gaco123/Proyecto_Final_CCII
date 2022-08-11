#pragma once

namespace VetPro {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Clientes
	/// </summary>
	public ref class Clientes : public System::Windows::Forms::Form
	{
	public:
		Clientes(void)
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
		~Clientes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label3;
	protected:
	private: System::Windows::Forms::Button^ n_clie;
	private: System::Windows::Forms::Button^ n_masco;

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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->n_clie = (gcnew System::Windows::Forms::Button());
			this->n_masco = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->label3->Location = System::Drawing::Point(489, 48);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(522, 79);
			this->label3->TabIndex = 38;
			this->label3->Text = L"CLIENTES";
			// 
			// n_clie
			// 
			this->n_clie->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->n_clie->Font = (gcnew System::Drawing::Font(L"Yet R", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->n_clie->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->n_clie->Location = System::Drawing::Point(1095, 48);
			this->n_clie->Name = L"n_clie";
			this->n_clie->Size = System::Drawing::Size(262, 79);
			this->n_clie->TabIndex = 37;
			this->n_clie->Text = L"NUEVO\r\nCLIENTE";
			this->n_clie->UseVisualStyleBackColor = false;
			// 
			// n_masco
			// 
			this->n_masco->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->n_masco->Font = (gcnew System::Drawing::Font(L"Yet R", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->n_masco->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->n_masco->Location = System::Drawing::Point(1393, 48);
			this->n_masco->Name = L"n_masco";
			this->n_masco->Size = System::Drawing::Size(262, 79);
			this->n_masco->TabIndex = 39;
			this->n_masco->Text = L"NUEVA\r\nMASCOTA";
			this->n_masco->UseVisualStyleBackColor = false;
			// 
			// Clientes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1667, 677);
			this->Controls->Add(this->n_masco);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->n_clie);
			this->Name = L"Clientes";
			this->Text = L"Clientes";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
