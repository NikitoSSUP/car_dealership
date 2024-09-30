#pragma once

namespace CarDealership {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::Odbc;
	using namespace System::IO;

	/// <summary>
	/// Сводка для LOGIN
	/// </summary>
	public ref class LOGIN : public System::Windows::Forms::Form
	{
	public:
		LOGIN(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~LOGIN()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Exit_button;
	private: System::Windows::Forms::Button^ Login_button;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox_login;

	private: System::Windows::Forms::TextBox^ textBox_pass;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::RadioButton^ RB_Klient;
	private: System::Windows::Forms::RadioButton^ RB_Operator;
	private: System::Windows::Forms::RadioButton^ RB_Admin;

	protected:


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Exit_button = (gcnew System::Windows::Forms::Button());
			this->Login_button = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox_login = (gcnew System::Windows::Forms::TextBox());
			this->textBox_pass = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->RB_Klient = (gcnew System::Windows::Forms::RadioButton());
			this->RB_Operator = (gcnew System::Windows::Forms::RadioButton());
			this->RB_Admin = (gcnew System::Windows::Forms::RadioButton());
			this->SuspendLayout();
			// 
			// Exit_button
			// 
			this->Exit_button->BackColor = System::Drawing::Color::Red;
			this->Exit_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Exit_button->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Exit_button->Location = System::Drawing::Point(376, -1);
			this->Exit_button->Name = L"Exit_button";
			this->Exit_button->Size = System::Drawing::Size(36, 33);
			this->Exit_button->TabIndex = 27;
			this->Exit_button->Text = L"✕";
			this->Exit_button->UseVisualStyleBackColor = false;
			this->Exit_button->Click += gcnew System::EventHandler(this, &LOGIN::Exit_button_Click);
			// 
			// Login_button
			// 
			this->Login_button->BackColor = System::Drawing::SystemColors::ControlText;
			this->Login_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Login_button->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Login_button->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->Login_button->Location = System::Drawing::Point(125, 300);
			this->Login_button->Name = L"Login_button";
			this->Login_button->Size = System::Drawing::Size(156, 45);
			this->Login_button->TabIndex = 28;
			this->Login_button->Text = L"LOGIN";
			this->Login_button->UseVisualStyleBackColor = false;
			this->Login_button->Click += gcnew System::EventHandler(this, &LOGIN::Login_button_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(24, 183);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 34);
			this->label1->TabIndex = 29;
			this->label1->Text = L"LOGIN";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(24, 235);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(137, 34);
			this->label2->TabIndex = 30;
			this->label2->Text = L"PASSWORD";
			// 
			// textBox_login
			// 
			this->textBox_login->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_login->Location = System::Drawing::Point(206, 181);
			this->textBox_login->Name = L"textBox_login";
			this->textBox_login->Size = System::Drawing::Size(179, 40);
			this->textBox_login->TabIndex = 31;
			// 
			// textBox_pass
			// 
			this->textBox_pass->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_pass->Location = System::Drawing::Point(206, 229);
			this->textBox_pass->Name = L"textBox_pass";
			this->textBox_pass->PasswordChar = '*';
			this->textBox_pass->Size = System::Drawing::Size(179, 40);
			this->textBox_pass->TabIndex = 32;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Impact", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(80, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(259, 45);
			this->label3->TabIndex = 33;
			this->label3->Text = L"CAR DEALERSHIP";
			// 
			// RB_Klient
			// 
			this->RB_Klient->BackColor = System::Drawing::Color::Transparent;
			this->RB_Klient->Checked = true;
			this->RB_Klient->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->RB_Klient->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->RB_Klient->Location = System::Drawing::Point(151, 124);
			this->RB_Klient->Name = L"RB_Klient";
			this->RB_Klient->Size = System::Drawing::Size(107, 34);
			this->RB_Klient->TabIndex = 36;
			this->RB_Klient->TabStop = true;
			this->RB_Klient->Text = L"Клиент";
			this->RB_Klient->UseVisualStyleBackColor = false;
			// 
			// RB_Operator
			// 
			this->RB_Operator->BackColor = System::Drawing::Color::Transparent;
			this->RB_Operator->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->RB_Operator->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->RB_Operator->Location = System::Drawing::Point(12, 73);
			this->RB_Operator->Name = L"RB_Operator";
			this->RB_Operator->Size = System::Drawing::Size(164, 34);
			this->RB_Operator->TabIndex = 35;
			this->RB_Operator->Text = L"Менеджер";
			this->RB_Operator->UseVisualStyleBackColor = false;
			// 
			// RB_Admin
			// 
			this->RB_Admin->BackColor = System::Drawing::Color::Transparent;
			this->RB_Admin->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->RB_Admin->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->RB_Admin->Location = System::Drawing::Point(182, 74);
			this->RB_Admin->Name = L"RB_Admin";
			this->RB_Admin->Size = System::Drawing::Size(223, 33);
			this->RB_Admin->TabIndex = 34;
			this->RB_Admin->Text = L"Администратор";
			this->RB_Admin->UseVisualStyleBackColor = false;
			// 
			// LOGIN
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(417, 366);
			this->Controls->Add(this->RB_Klient);
			this->Controls->Add(this->RB_Operator);
			this->Controls->Add(this->RB_Admin);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox_pass);
			this->Controls->Add(this->textBox_login);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Login_button);
			this->Controls->Add(this->Exit_button);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"LOGIN";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LOGIN";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		OdbcConnection^ ConnectToDatabase()
		{
			String^ connectionString = "Driver={PostgreSQL ODBC Driver(UNICODE)};Server=localhost;Port=5432;Database=car_dealership;Uid=postgres;Pwd=0000;";
			OdbcConnection^ connection = gcnew OdbcConnection(connectionString);
			connection->Open();
			return connection;
		}
	private: System::Void Exit_button_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Login_button_Click(System::Object^ sender, System::EventArgs^ e);

};
}
