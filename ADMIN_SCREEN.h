#pragma once

namespace CarDealership {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::Odbc;
	using namespace System::Threading;
	using namespace System::IO;


	/// <summary>
	/// Сводка для ADMIN_SCREEN
	/// </summary>
	public ref class ADMIN_SCREEN : public System::Windows::Forms::Form
	{
	public:
		ADMIN_SCREEN(void)
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
		~ADMIN_SCREEN()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Exit_button;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ добавитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ маркуToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ автомобильToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ услугуToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ менеджераToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ изменитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ маркуToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ автомобильToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ услугуToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ менеджераToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ удалитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ маркуToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ автомобильToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ услугуToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ менеджераToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ выйтиToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ textBox4;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label7;






	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox10;

	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridView^ dataGridView3;

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle10 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle11 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle12 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle13 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle14 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle15 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->Exit_button = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->добавитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->маркуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->автомобильToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->услугуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->менеджераToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->изменитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->маркуToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->автомобильToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->услугуToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->менеджераToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->удалитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->маркуToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->автомобильToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->услугуToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->менеджераToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выйтиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// Exit_button
			// 
			this->Exit_button->BackColor = System::Drawing::Color::Red;
			this->Exit_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Exit_button->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Exit_button->Location = System::Drawing::Point(1753, 1);
			this->Exit_button->Name = L"Exit_button";
			this->Exit_button->Size = System::Drawing::Size(36, 33);
			this->Exit_button->TabIndex = 28;
			this->Exit_button->Text = L"✕";
			this->Exit_button->UseVisualStyleBackColor = false;
			this->Exit_button->Click += gcnew System::EventHandler(this, &ADMIN_SCREEN::Exit_button_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->menuStrip1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Impact", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->добавитьToolStripMenuItem,
					this->изменитьToolStripMenuItem, this->удалитьToolStripMenuItem, this->выйтиToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1789, 34);
			this->menuStrip1->TabIndex = 29;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// добавитьToolStripMenuItem
			// 
			this->добавитьToolStripMenuItem->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->добавитьToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->маркуToolStripMenuItem,
					this->автомобильToolStripMenuItem, this->услугуToolStripMenuItem, this->менеджераToolStripMenuItem
			});
			this->добавитьToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Impact", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->добавитьToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->добавитьToolStripMenuItem->ImageTransparentColor = System::Drawing::SystemColors::HotTrack;
			this->добавитьToolStripMenuItem->Name = L"добавитьToolStripMenuItem";
			this->добавитьToolStripMenuItem->Size = System::Drawing::Size(114, 30);
			this->добавитьToolStripMenuItem->Text = L"Добавить";
			// 
			// маркуToolStripMenuItem
			// 
			this->маркуToolStripMenuItem->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->маркуToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->маркуToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->маркуToolStripMenuItem->ImageTransparentColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->маркуToolStripMenuItem->Name = L"маркуToolStripMenuItem";
			this->маркуToolStripMenuItem->Size = System::Drawing::Size(164, 24);
			this->маркуToolStripMenuItem->Text = L"Марку";
			this->маркуToolStripMenuItem->Click += gcnew System::EventHandler(this, &ADMIN_SCREEN::маркуToolStripMenuItem_Click);
			// 
			// автомобильToolStripMenuItem
			// 
			this->автомобильToolStripMenuItem->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->автомобильToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->автомобильToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->автомобильToolStripMenuItem->ImageTransparentColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->автомобильToolStripMenuItem->Name = L"автомобильToolStripMenuItem";
			this->автомобильToolStripMenuItem->Size = System::Drawing::Size(164, 24);
			this->автомобильToolStripMenuItem->Text = L"Автомобиль";
			this->автомобильToolStripMenuItem->Click += gcnew System::EventHandler(this, &ADMIN_SCREEN::автомобильToolStripMenuItem_Click);
			// 
			// услугуToolStripMenuItem
			// 
			this->услугуToolStripMenuItem->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->услугуToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->услугуToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->услугуToolStripMenuItem->ImageTransparentColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->услугуToolStripMenuItem->Name = L"услугуToolStripMenuItem";
			this->услугуToolStripMenuItem->Size = System::Drawing::Size(164, 24);
			this->услугуToolStripMenuItem->Text = L"Услугу";
			this->услугуToolStripMenuItem->Click += gcnew System::EventHandler(this, &ADMIN_SCREEN::услугуToolStripMenuItem_Click);
			// 
			// менеджераToolStripMenuItem
			// 
			this->менеджераToolStripMenuItem->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->менеджераToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->менеджераToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->менеджераToolStripMenuItem->ImageTransparentColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->менеджераToolStripMenuItem->Name = L"менеджераToolStripMenuItem";
			this->менеджераToolStripMenuItem->Size = System::Drawing::Size(164, 24);
			this->менеджераToolStripMenuItem->Text = L"Менеджера";
			this->менеджераToolStripMenuItem->Click += gcnew System::EventHandler(this, &ADMIN_SCREEN::менеджераToolStripMenuItem_Click);
			// 
			// изменитьToolStripMenuItem
			// 
			this->изменитьToolStripMenuItem->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->изменитьToolStripMenuItem->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->изменитьToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->маркуToolStripMenuItem1,
					this->автомобильToolStripMenuItem1, this->услугуToolStripMenuItem1, this->менеджераToolStripMenuItem1
			});
			this->изменитьToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Impact", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->изменитьToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->изменитьToolStripMenuItem->ImageTransparentColor = System::Drawing::SystemColors::HotTrack;
			this->изменитьToolStripMenuItem->Name = L"изменитьToolStripMenuItem";
			this->изменитьToolStripMenuItem->Size = System::Drawing::Size(114, 30);
			this->изменитьToolStripMenuItem->Text = L"Изменить";
			// 
			// маркуToolStripMenuItem1
			// 
			this->маркуToolStripMenuItem1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->маркуToolStripMenuItem1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->маркуToolStripMenuItem1->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->маркуToolStripMenuItem1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->маркуToolStripMenuItem1->Name = L"маркуToolStripMenuItem1";
			this->маркуToolStripMenuItem1->Size = System::Drawing::Size(164, 24);
			this->маркуToolStripMenuItem1->Text = L"Марку";
			this->маркуToolStripMenuItem1->Click += gcnew System::EventHandler(this, &ADMIN_SCREEN::маркуToolStripMenuItem1_Click);
			// 
			// автомобильToolStripMenuItem1
			// 
			this->автомобильToolStripMenuItem1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->автомобильToolStripMenuItem1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->автомобильToolStripMenuItem1->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->автомобильToolStripMenuItem1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->автомобильToolStripMenuItem1->Name = L"автомобильToolStripMenuItem1";
			this->автомобильToolStripMenuItem1->Size = System::Drawing::Size(164, 24);
			this->автомобильToolStripMenuItem1->Text = L"Автомобиль";
			this->автомобильToolStripMenuItem1->Click += gcnew System::EventHandler(this, &ADMIN_SCREEN::автомобильToolStripMenuItem1_Click);
			// 
			// услугуToolStripMenuItem1
			// 
			this->услугуToolStripMenuItem1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->услугуToolStripMenuItem1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->услугуToolStripMenuItem1->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->услугуToolStripMenuItem1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->услугуToolStripMenuItem1->Name = L"услугуToolStripMenuItem1";
			this->услугуToolStripMenuItem1->Size = System::Drawing::Size(164, 24);
			this->услугуToolStripMenuItem1->Text = L"Услугу";
			this->услугуToolStripMenuItem1->Click += gcnew System::EventHandler(this, &ADMIN_SCREEN::услугуToolStripMenuItem1_Click);
			// 
			// менеджераToolStripMenuItem1
			// 
			this->менеджераToolStripMenuItem1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->менеджераToolStripMenuItem1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->менеджераToolStripMenuItem1->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->менеджераToolStripMenuItem1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->менеджераToolStripMenuItem1->Name = L"менеджераToolStripMenuItem1";
			this->менеджераToolStripMenuItem1->Size = System::Drawing::Size(164, 24);
			this->менеджераToolStripMenuItem1->Text = L"Менеджера";
			this->менеджераToolStripMenuItem1->Click += gcnew System::EventHandler(this, &ADMIN_SCREEN::менеджераToolStripMenuItem1_Click);
			// 
			// удалитьToolStripMenuItem
			// 
			this->удалитьToolStripMenuItem->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->удалитьToolStripMenuItem->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->удалитьToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->маркуToolStripMenuItem2,
					this->автомобильToolStripMenuItem2, this->услугуToolStripMenuItem2, this->менеджераToolStripMenuItem2
			});
			this->удалитьToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Impact", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->удалитьToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->удалитьToolStripMenuItem->ImageTransparentColor = System::Drawing::SystemColors::HotTrack;
			this->удалитьToolStripMenuItem->Name = L"удалитьToolStripMenuItem";
			this->удалитьToolStripMenuItem->Size = System::Drawing::Size(101, 30);
			this->удалитьToolStripMenuItem->Text = L"Удалить";
			// 
			// маркуToolStripMenuItem2
			// 
			this->маркуToolStripMenuItem2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->маркуToolStripMenuItem2->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->маркуToolStripMenuItem2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->маркуToolStripMenuItem2->Name = L"маркуToolStripMenuItem2";
			this->маркуToolStripMenuItem2->Size = System::Drawing::Size(164, 24);
			this->маркуToolStripMenuItem2->Text = L"Марку";
			this->маркуToolStripMenuItem2->Click += gcnew System::EventHandler(this, &ADMIN_SCREEN::маркуToolStripMenuItem2_Click);
			// 
			// автомобильToolStripMenuItem2
			// 
			this->автомобильToolStripMenuItem2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->автомобильToolStripMenuItem2->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->автомобильToolStripMenuItem2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->автомобильToolStripMenuItem2->Name = L"автомобильToolStripMenuItem2";
			this->автомобильToolStripMenuItem2->Size = System::Drawing::Size(164, 24);
			this->автомобильToolStripMenuItem2->Text = L"Автомобиль";
			this->автомобильToolStripMenuItem2->Click += gcnew System::EventHandler(this, &ADMIN_SCREEN::автомобильToolStripMenuItem2_Click);
			// 
			// услугуToolStripMenuItem2
			// 
			this->услугуToolStripMenuItem2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->услугуToolStripMenuItem2->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->услугуToolStripMenuItem2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->услугуToolStripMenuItem2->Name = L"услугуToolStripMenuItem2";
			this->услугуToolStripMenuItem2->Size = System::Drawing::Size(164, 24);
			this->услугуToolStripMenuItem2->Text = L"Услугу";
			this->услугуToolStripMenuItem2->Click += gcnew System::EventHandler(this, &ADMIN_SCREEN::услугуToolStripMenuItem2_Click);
			// 
			// менеджераToolStripMenuItem2
			// 
			this->менеджераToolStripMenuItem2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->менеджераToolStripMenuItem2->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->менеджераToolStripMenuItem2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->менеджераToolStripMenuItem2->Name = L"менеджераToolStripMenuItem2";
			this->менеджераToolStripMenuItem2->Size = System::Drawing::Size(164, 24);
			this->менеджераToolStripMenuItem2->Text = L"Менеджера";
			this->менеджераToolStripMenuItem2->Click += gcnew System::EventHandler(this, &ADMIN_SCREEN::менеджераToolStripMenuItem2_Click);
			// 
			// выйтиToolStripMenuItem
			// 
			this->выйтиToolStripMenuItem->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->выйтиToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Impact", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->выйтиToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->выйтиToolStripMenuItem->ImageTransparentColor = System::Drawing::SystemColors::HotTrack;
			this->выйтиToolStripMenuItem->Name = L"выйтиToolStripMenuItem";
			this->выйтиToolStripMenuItem->Size = System::Drawing::Size(85, 30);
			this->выйтиToolStripMenuItem->Text = L"Выйти";
			this->выйтиToolStripMenuItem->Click += gcnew System::EventHandler(this, &ADMIN_SCREEN::выйтиToolStripMenuItem_Click);
			// 
			// dataGridView1
			// 
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::HotTrack;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Cursor = System::Windows::Forms::Cursors::Default;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView1->Location = System::Drawing::Point(0, 39);
			this->dataGridView1->Name = L"dataGridView1";
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle4;
			dataGridViewCellStyle5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::HotTrack;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridView1->RowTemplate->DefaultCellStyle->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView1->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->dataGridView1->RowTemplate->DefaultCellStyle->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->RowTemplate->DefaultCellStyle->SelectionBackColor = System::Drawing::SystemColors::HotTrack;
			this->dataGridView1->RowTemplate->DefaultCellStyle->SelectionForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->Size = System::Drawing::Size(540, 223);
			this->dataGridView1->TabIndex = 30;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(239, 668);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(319, 40);
			this->textBox4->TabIndex = 36;
			this->textBox4->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(23, 570);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(90, 34);
			this->label2->TabIndex = 35;
			this->label2->Text = L"Марка";
			this->label2->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(23, 518);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(129, 34);
			this->label1->TabIndex = 34;
			this->label1->Text = L"Название";
			this->label1->Visible = false;
			// 
			// button
			// 
			this->button->BackColor = System::Drawing::SystemColors::ControlText;
			this->button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button->Location = System::Drawing::Point(938, 671);
			this->button->Name = L"button";
			this->button->Size = System::Drawing::Size(567, 47);
			this->button->TabIndex = 33;
			this->button->UseVisualStyleBackColor = false;
			this->button->Click += gcnew System::EventHandler(this, &ADMIN_SCREEN::button_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(23, 621);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(143, 34);
			this->label3->TabIndex = 39;
			this->label3->Text = L"Тип кузова";
			this->label3->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(23, 668);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(98, 34);
			this->label4->TabIndex = 38;
			this->label4->Text = L"Статус ";
			this->label4->Visible = false;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(239, 618);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(319, 40);
			this->textBox3->TabIndex = 44;
			this->textBox3->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(609, 515);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(70, 34);
			this->label5->TabIndex = 43;
			this->label5->Text = L"Цвет";
			this->label5->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(607, 570);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(72, 34);
			this->label6->TabIndex = 42;
			this->label6->Text = L"Цена";
			this->label6->Visible = false;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(835, 509);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(319, 40);
			this->textBox5->TabIndex = 47;
			this->textBox5->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Location = System::Drawing::Point(607, 627);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(180, 34);
			this->label7->TabIndex = 46;
			this->label7->Text = L"Дата выпуска";
			this->label7->Visible = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label9->Location = System::Drawing::Point(1191, 570);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(185, 34);
			this->label9->TabIndex = 77;
			this->label9->Text = L"Тип двигателя";
			this->label9->Visible = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label10->Location = System::Drawing::Point(1191, 627);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(221, 34);
			this->label10->TabIndex = 76;
			this->label10->Text = L"Объем двигателя";
			this->label10->Visible = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label8->Location = System::Drawing::Point(1191, 509);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(185, 34);
			this->label8->TabIndex = 78;
			this->label8->Text = L"Тип двигателя";
			this->label8->Visible = false;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(239, 512);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(319, 40);
			this->textBox1->TabIndex = 79;
			this->textBox1->Visible = false;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(239, 567);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(319, 40);
			this->textBox2->TabIndex = 80;
			this->textBox2->Visible = false;
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox10->Location = System::Drawing::Point(1407, 621);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(319, 40);
			this->textBox10->TabIndex = 81;
			this->textBox10->Visible = false;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->Location = System::Drawing::Point(835, 567);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(319, 40);
			this->textBox6->TabIndex = 82;
			this->textBox6->Visible = false;
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox7->Location = System::Drawing::Point(835, 624);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(319, 40);
			this->textBox7->TabIndex = 83;
			this->textBox7->Visible = false;
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox8->Location = System::Drawing::Point(1407, 503);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(319, 40);
			this->textBox8->TabIndex = 84;
			this->textBox8->Visible = false;
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox9->Location = System::Drawing::Point(1407, 564);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(319, 40);
			this->textBox9->TabIndex = 85;
			this->textBox9->Visible = false;
			// 
			// dataGridView2
			// 
			dataGridViewCellStyle6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::HotTrack;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView2->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle6;
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle7->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle7;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Cursor = System::Windows::Forms::Cursors::Default;
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle8->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView2->DefaultCellStyle = dataGridViewCellStyle8;
			this->dataGridView2->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView2->Location = System::Drawing::Point(576, 39);
			this->dataGridView2->Name = L"dataGridView2";
			dataGridViewCellStyle9->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle9->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle9->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle9->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle9->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle9->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->RowHeadersDefaultCellStyle = dataGridViewCellStyle9;
			dataGridViewCellStyle10->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle10->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle10->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle10->SelectionBackColor = System::Drawing::SystemColors::HotTrack;
			dataGridViewCellStyle10->SelectionForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView2->RowsDefaultCellStyle = dataGridViewCellStyle10;
			this->dataGridView2->RowTemplate->DefaultCellStyle->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView2->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->dataGridView2->RowTemplate->DefaultCellStyle->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView2->RowTemplate->DefaultCellStyle->SelectionBackColor = System::Drawing::SystemColors::HotTrack;
			this->dataGridView2->RowTemplate->DefaultCellStyle->SelectionForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView2->Size = System::Drawing::Size(1201, 449);
			this->dataGridView2->TabIndex = 86;
			// 
			// dataGridView3
			// 
			dataGridViewCellStyle11->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle11->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle11->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle11->SelectionBackColor = System::Drawing::SystemColors::HotTrack;
			dataGridViewCellStyle11->SelectionForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView3->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle11;
			this->dataGridView3->BackgroundColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle12->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle12->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle12->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle12->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle12->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle12->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle12->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView3->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle12;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Cursor = System::Windows::Forms::Cursors::Default;
			dataGridViewCellStyle13->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle13->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle13->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle13->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle13->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle13->SelectionForeColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle13->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView3->DefaultCellStyle = dataGridViewCellStyle13;
			this->dataGridView3->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView3->Location = System::Drawing::Point(0, 281);
			this->dataGridView3->Name = L"dataGridView3";
			dataGridViewCellStyle14->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle14->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle14->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle14->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle14->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle14->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle14->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView3->RowHeadersDefaultCellStyle = dataGridViewCellStyle14;
			dataGridViewCellStyle15->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle15->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle15->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle15->SelectionBackColor = System::Drawing::SystemColors::HotTrack;
			dataGridViewCellStyle15->SelectionForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView3->RowsDefaultCellStyle = dataGridViewCellStyle15;
			this->dataGridView3->RowTemplate->DefaultCellStyle->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView3->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->dataGridView3->RowTemplate->DefaultCellStyle->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView3->RowTemplate->DefaultCellStyle->SelectionBackColor = System::Drawing::SystemColors::HotTrack;
			this->dataGridView3->RowTemplate->DefaultCellStyle->SelectionForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView3->Size = System::Drawing::Size(540, 207);
			this->dataGridView3->TabIndex = 87;
			// 
			// ADMIN_SCREEN
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(1789, 727);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->Exit_button);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"ADMIN_SCREEN";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ADMIN_SCREEN";
			this->Load += gcnew System::EventHandler(this, &ADMIN_SCREEN::ADMIN_SCREEN_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
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

void FillWordDocumentFromDatabase_Cars(Object^ obj)
{
	TextBox^ textBox = (TextBox^)obj;
	int carID = System::Convert::ToInt32(textBox->Text);

	OdbcConnection^ connection = ConnectToDatabase();
	OdbcCommand^ command = gcnew OdbcCommand("SELECT * FROM Cars WHERE id_car = ?;", connection);
	command->Parameters->Add(gcnew OdbcParameter("?", carID));
	OdbcDataAdapter^ adapter = gcnew OdbcDataAdapter(command);
	DataTable^ dataTable = gcnew DataTable();

	try
	{
		adapter->Fill(dataTable);

		// Найдем нужную запись в таблице
		DataRow^ row = dataTable->Rows[0];

		// Создаем строку для записи в документ Word
		String^ wordContent = "Car ID: " + row["id_car"]->ToString() + "\n";
		wordContent += "Car Model: " + row["Car_id_mark"]->ToString() + "\n";
		wordContent += "Car Year: " + row["Car_name"]->ToString() + "\n";

		// Записываем данные в документ Word
		String^ filePath = "document.txt";
		File::WriteAllText(filePath, wordContent);
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message);
	}
	finally
	{
		connection->Close();
	}
}

void FillDataGridFromDatabase_Marks(Object^ obj)
{
	DataGridView^ dataGridView = (DataGridView^)obj;
	OdbcConnection^ connection = ConnectToDatabase();
	OdbcCommand^ command = gcnew OdbcCommand("SELECT * FROM Marks;", connection);
	OdbcDataAdapter^ adapter = gcnew OdbcDataAdapter(command);
	DataTable^ dataTable = gcnew DataTable();

	try
	{
		adapter->Fill(dataTable);
		dataGridView->DataSource = dataTable;
		dataGridView->AutoSizeRowsMode = DataGridViewAutoSizeRowsMode::AllCells;
		dataGridView->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message);
	}
	finally
	{
		connection->Close();
	}
}
void FillDataGridFromDatabase_Cars(Object^ obj)
{
	DataGridView^ dataGridView = (DataGridView^)obj;
	OdbcConnection^ connection = ConnectToDatabase();
	OdbcCommand^ command = gcnew OdbcCommand("SELECT * FROM Cars;", connection);
	OdbcDataAdapter^ adapter = gcnew OdbcDataAdapter(command);
	DataTable^ dataTable = gcnew DataTable();

	try
	{
		adapter->Fill(dataTable);
		dataGridView->DataSource = dataTable;
		dataGridView->AutoSizeRowsMode = DataGridViewAutoSizeRowsMode::AllCells;
		dataGridView->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message);
	}
	finally
	{
		connection->Close();
	}
}
void FillDataGridFromDatabase_Clients(Object^ obj)
		{
	        DataGridView^ dataGridView = (DataGridView^)obj;
			OdbcConnection^ connection = ConnectToDatabase();
			OdbcCommand^ command = gcnew OdbcCommand("SELECT * FROM Clients;", connection);
			OdbcDataAdapter^ adapter = gcnew OdbcDataAdapter(command);
			DataTable^ dataTable = gcnew DataTable();

			try
			{
				adapter->Fill(dataTable);
				dataGridView->DataSource = dataTable;
				dataGridView->AutoSizeRowsMode = DataGridViewAutoSizeRowsMode::AllCells;
				dataGridView->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
			}
			catch (Exception^ e)
			{
				MessageBox::Show(e->Message);
			}
			finally
			{
				connection->Close();
			}
		}
void FillDataGridFromDatabase_Menegers(Object^ obj)
	 	{
	        DataGridView^ dataGridView = (DataGridView^)obj;
			OdbcConnection^ connection = ConnectToDatabase();
			OdbcCommand^ command = gcnew OdbcCommand("SELECT * FROM Menegers;", connection);
			OdbcDataAdapter^ adapter = gcnew OdbcDataAdapter(command);
			DataTable^ dataTable = gcnew DataTable();

			try
			{
				adapter->Fill(dataTable);
				dataGridView->DataSource = dataTable;
				dataGridView->AutoSizeRowsMode = DataGridViewAutoSizeRowsMode::AllCells;
				dataGridView->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
			}
			catch (Exception^ e)
			{
				MessageBox::Show(e->Message);
			}
			finally
			{
				connection->Close();
			}
		}
void FillDataGridFromDatabase_Admins(Object^ obj)
		{
           	DataGridView^ dataGridView = (DataGridView^)obj;
			OdbcConnection^ connection = ConnectToDatabase();
			OdbcCommand^ command = gcnew OdbcCommand("SELECT * FROM Admins;", connection);
			OdbcDataAdapter^ adapter = gcnew OdbcDataAdapter(command);
			DataTable^ dataTable = gcnew DataTable();

			try
			{
				adapter->Fill(dataTable);
				dataGridView->DataSource = dataTable;
				dataGridView->AutoSizeRowsMode = DataGridViewAutoSizeRowsMode::AllCells;
				dataGridView->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
			}
			catch (Exception^ e)
			{
				MessageBox::Show(e->Message);
			}
			finally
			{
				connection->Close();
			}
		}
void FillDataGridFromDatabase_Sold(Object^ obj)
		{
          	DataGridView^ dataGridView = (DataGridView^)obj;
			OdbcConnection^ connection = ConnectToDatabase();
			OdbcCommand^ command = gcnew OdbcCommand("SELECT * FROM Sold;", connection);
			OdbcDataAdapter^ adapter = gcnew OdbcDataAdapter(command);
			DataTable^ dataTable = gcnew DataTable();

			try
			{
				adapter->Fill(dataTable);
				dataGridView->DataSource = dataTable;
				dataGridView->AutoSizeRowsMode = DataGridViewAutoSizeRowsMode::AllCells;
				dataGridView->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
			}
			catch (Exception^ e)
			{
				MessageBox::Show(e->Message);
			}
			finally
			{
				connection->Close();
			}
		}
void FillDataGridFromDatabase_Service_zacaz(Object^ obj)
		{
	        DataGridView^ dataGridView = (DataGridView^)obj;
			OdbcConnection^ connection = ConnectToDatabase();
			OdbcCommand^ command = gcnew OdbcCommand("SELECT * FROM Service_zacaz;", connection);
			OdbcDataAdapter^ adapter = gcnew OdbcDataAdapter(command);
			DataTable^ dataTable = gcnew DataTable();

			try
			{
				adapter->Fill(dataTable);
				dataGridView->DataSource = dataTable;
				dataGridView->AutoSizeRowsMode = DataGridViewAutoSizeRowsMode::AllCells;
				dataGridView->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
			}
			catch (Exception^ e)
			{
				MessageBox::Show(e->Message);
			}
			finally
			{
				connection->Close();
			}
		}
void FillDataGridFromDatabase_Service_uslugs(Object^ obj)
		{
	        DataGridView^ dataGridView = (DataGridView^)obj;
			OdbcConnection^ connection = ConnectToDatabase();
			OdbcCommand^ command = gcnew OdbcCommand("SELECT * FROM Service_uslugs;", connection);
			OdbcDataAdapter^ adapter = gcnew OdbcDataAdapter(command);
			DataTable^ dataTable = gcnew DataTable();

			try
			{
				adapter->Fill(dataTable);
				dataGridView->DataSource = dataTable;
				dataGridView->AutoSizeRowsMode = DataGridViewAutoSizeRowsMode::AllCells;
				dataGridView->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
			}
			catch (Exception^ e)
			{
				MessageBox::Show(e->Message);
			}
			finally
			{
				connection->Close();
			}
		}
void FillDataGridFromDatabase_Service_uslugs_to_Client(Object^ obj)
		{
	        DataGridView^ dataGridView = (DataGridView^)obj;
			OdbcConnection^ connection = ConnectToDatabase();
			OdbcCommand^ command = gcnew OdbcCommand("SELECT * FROM Service_uslugs_to_Client;", connection);
			OdbcDataAdapter^ adapter = gcnew OdbcDataAdapter(command);
			DataTable^ dataTable = gcnew DataTable();

			try
			{
				adapter->Fill(dataTable);
				dataGridView->DataSource = dataTable;
				dataGridView->AutoSizeRowsMode = DataGridViewAutoSizeRowsMode::AllCells;
				dataGridView->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
			}
			catch (Exception^ e)
			{
				MessageBox::Show(e->Message);
			}
			finally
			{
				connection->Close();
			}
		}

void InsertMarkToDatabase(String^ markName, String^ markCountry)
{
	OdbcConnection^ connection = ConnectToDatabase();
	String^ sql = "INSERT INTO public.Marks (Mark_name, Mark_country) VALUES (?, ?)";
	OdbcCommand^ cmd = gcnew OdbcCommand(sql, connection);
	cmd->Parameters->AddWithValue("?", markName);
	cmd->Parameters->AddWithValue("?", markCountry);
	cmd->ExecuteNonQuery();
	connection->Close();
}
void InsertCarToDatabase(String^ carName, String^ markName, String^ createYear, String^ coast, String^ status, String^ color, String^ typeCorpus, String^ typeEngin, String^ enginVolume)
{
	OdbcConnection^ connection = ConnectToDatabase();
	String^ sql = "INSERT INTO public.Cars (Car_name, Car_id_mark, Car_year_create, Car_coast, Car_status, Car_color, Car_type_corpus, Car_type_engin, Car_engin_volume) VALUES (?, (SELECT id_mark FROM public.Marks WHERE Mark_name = ?), ?, ?, ?, ?, ?, ?, ?)";
	OdbcCommand^ cmd = gcnew OdbcCommand(sql, connection);
	cmd->Parameters->AddWithValue("?", carName);
	cmd->Parameters->AddWithValue("?", markName);
	cmd->Parameters->AddWithValue("?", Convert::ToDateTime(createYear));
	cmd->Parameters->AddWithValue("?", Convert::ToSingle(coast));
	cmd->Parameters->AddWithValue("?", status);
	cmd->Parameters->AddWithValue("?", color);
	cmd->Parameters->AddWithValue("?", typeCorpus);
	cmd->Parameters->AddWithValue("?", typeEngin);
	cmd->Parameters->AddWithValue("?", Convert::ToSingle(enginVolume));
	cmd->ExecuteNonQuery();
	connection->Close();
}
void InsertClientToDatabase(String^ clientName, String^ clientFam, String^ clientAdress, String^ clientPhoneNum, String^ clientEmail, String^ clientPass)
{
	OdbcConnection^ connection = ConnectToDatabase();
	String^ sql = "INSERT INTO public.Clients (Client_name, Client_fam, Client_adress, Client_phone_num, Client_email, Client_pass) VALUES (?, ?, ?, ?, ?, ?)";
	OdbcCommand^ cmd = gcnew OdbcCommand(sql, connection);
	cmd->Parameters->AddWithValue("?", clientName);
	cmd->Parameters->AddWithValue("?", clientFam);
	cmd->Parameters->AddWithValue("?", clientAdress);
	cmd->Parameters->AddWithValue("?", clientPhoneNum);
	cmd->Parameters->AddWithValue("?", clientEmail);
	cmd->Parameters->AddWithValue("?", clientPass);
	cmd->ExecuteNonQuery();
	connection->Close();
}
void InsertMenegerToDatabase(String^ menegerName, String^ menegerFam, String^ menegerEmail, String^ menegerPass, String^ menegerPhoneNum)
{
	OdbcConnection^ connection = ConnectToDatabase();
	String^ sql = "INSERT INTO public.Menegers (Meneger_name, Meneger_fam, Meneger_email, Meneger_pass, Maneger_phone_num) VALUES (?, ?, ?, ?, ?)";
	OdbcCommand^ cmd = gcnew OdbcCommand(sql, connection);
	cmd->Parameters->AddWithValue("?", menegerName);
	cmd->Parameters->AddWithValue("?", menegerFam);
	cmd->Parameters->AddWithValue("?", menegerEmail);
	cmd->Parameters->AddWithValue("?", menegerPass);
	cmd->Parameters->AddWithValue("?", menegerPhoneNum);
	cmd->ExecuteNonQuery();
	connection->Close();
}
void InsertAdminToDatabase(String^ adminName, String^ adminFam, String^ adminEmail, String^ adminPass, String^ adminPhoneNum)
{
	OdbcConnection^ connection = ConnectToDatabase();
	String^ sql = "INSERT INTO public.Admins (Admin_name, Admin_fam, Admin_email, Admin_pass, Admin_phone_num) VALUES (?, ?, ?, ?, ?)";
	OdbcCommand^ cmd = gcnew OdbcCommand(sql, connection);
	cmd->Parameters->AddWithValue("?", adminName);
	cmd->Parameters->AddWithValue("?", adminFam);
	cmd->Parameters->AddWithValue("?", adminEmail);
	cmd->Parameters->AddWithValue("?", adminPass);
	cmd->Parameters->AddWithValue("?", adminPhoneNum);
	cmd->ExecuteNonQuery();
	connection->Close();
}
void InsertSoldToDatabase(int carId, int clientId, int menegerId, DateTime soldDate)
{
	OdbcConnection^ connection = ConnectToDatabase();
	String^ sql = "INSERT INTO public.Sold (Sold_id_car, Sold_id_client, Sold_id_meneger, Sold_date) VALUES (?, ?, ?, ?)";
	OdbcCommand^ cmd = gcnew OdbcCommand(sql, connection);
	cmd->Parameters->AddWithValue("?", carId);
	cmd->Parameters->AddWithValue("?", clientId);
	cmd->Parameters->AddWithValue("?", menegerId);
	cmd->Parameters->AddWithValue("?", soldDate);
	cmd->ExecuteNonQuery();
	connection->Close();
}
void InsertService_uslugToDatabase(String^ serviceName, String^ serviceCoastText)
{
	OdbcConnection^ connection = ConnectToDatabase();
	String^ sql = "INSERT INTO public.Service_uslugs (Service_uslugs_name, Service_uslugs_coast) VALUES (?, ?)";
	OdbcCommand^ cmd = gcnew OdbcCommand(sql, connection);
	cmd->Parameters->AddWithValue("?", serviceName);
	cmd->Parameters->AddWithValue("?", Convert::ToSingle(serviceCoastText));
	cmd->ExecuteNonQuery();
	connection->Close();
}
void InsertService_uslugToClientToDatabase(int serviceId, int clientId)
{
	OdbcConnection^ connection = ConnectToDatabase();
	String^ sql = "INSERT INTO public.Service_uslugs_to_Client (Service_id, Client_id) VALUES (?, ?)";
	OdbcCommand^ cmd = gcnew OdbcCommand(sql, connection);
	cmd->Parameters->AddWithValue("?", serviceId);
	cmd->Parameters->AddWithValue("?", clientId);
	cmd->ExecuteNonQuery();
	connection->Close();
}
void InsertService_zacazToDatabase(int carId, int clientId, String^ problem, DateTime zacazDate, String^ status)
{
	OdbcConnection^ connection = ConnectToDatabase();
	String^ sql = "INSERT INTO public.Service_zacaz (Service_zacaz_id_car, Service_zacaz_id_client, Service_zacaz_problem, Service_zacaz_date, Service_zacaz_status) VALUES (?, ?, ?, ?, ?)";
	OdbcCommand^ cmd = gcnew OdbcCommand(sql, connection);
	cmd->Parameters->AddWithValue("?", carId);
	cmd->Parameters->AddWithValue("?", clientId);
	cmd->Parameters->AddWithValue("?", problem);
	cmd->Parameters->AddWithValue("?", zacazDate);
	cmd->Parameters->AddWithValue("?", status);
	cmd->ExecuteNonQuery();
	connection->Close();
}

void DeleteMarkFromDatabase(String^ markName)
{
	OdbcConnection^ connection = ConnectToDatabase();
	String^ sql = "DELETE FROM public.Marks WHERE Mark_name = ?";
	OdbcCommand^ cmd = gcnew OdbcCommand(sql, connection);
	cmd->Parameters->AddWithValue("?", markName);
	cmd->ExecuteNonQuery();
	connection->Close();
}
void DeleteCarFromDatabase(int carId)
{
	OdbcConnection^ connection = ConnectToDatabase();
	String^ sql = "DELETE FROM public.Cars WHERE id_car = ?";
	OdbcCommand^ cmd = gcnew OdbcCommand(sql, connection);
	cmd->Parameters->AddWithValue("?", carId);
	cmd->ExecuteNonQuery();
	connection->Close();
}
void DeleteClientFromDatabase(int clientId)
{
	OdbcConnection^ connection = ConnectToDatabase();
	String^ sql = "DELETE FROM public.Clients WHERE id_client = ?";
	OdbcCommand^ cmd = gcnew OdbcCommand(sql, connection);
	cmd->Parameters->AddWithValue("?", clientId);
	cmd->ExecuteNonQuery();
	connection->Close();
}
void DeleteMenegerFromDatabase(int menegerId)
{
	OdbcConnection^ connection = ConnectToDatabase();
	String^ sql = "DELETE FROM public.Menegers WHERE id_meneger = ?";
	OdbcCommand^ cmd = gcnew OdbcCommand(sql, connection);
	cmd->Parameters->AddWithValue("?", menegerId);
	cmd->ExecuteNonQuery();
	connection->Close();
}
void DeleteAdminFromDatabase(int adminId)
{
	OdbcConnection^ connection = ConnectToDatabase();
	String^ sql = "DELETE FROM public.Admins WHERE id_Admin = ?";
	OdbcCommand^ cmd = gcnew OdbcCommand(sql, connection);
	cmd->Parameters->AddWithValue("?", adminId);
	cmd->ExecuteNonQuery();
	connection->Close();
}
void DeleteSoldFromDatabase(int soldId)
{
	OdbcConnection^ connection = ConnectToDatabase();
	String^ sql = "DELETE FROM public.Sold WHERE id_sold = ?";
	OdbcCommand^ cmd = gcnew OdbcCommand(sql, connection);
	cmd->Parameters->AddWithValue("?", soldId);
	cmd->ExecuteNonQuery();
	connection->Close();
}
void DeleteService_uslugFromDatabase(int serviceId)
{
	OdbcConnection^ connection = ConnectToDatabase();
	String^ sql = "DELETE FROM public.Service_uslugs WHERE id_service_uslugs = ?";
	OdbcCommand^ cmd = gcnew OdbcCommand(sql, connection);
	cmd->Parameters->AddWithValue("?", serviceId);
	cmd->ExecuteNonQuery();
	connection->Close();
}
void DeleteService_uslugToClientFromDatabase(int serviceId)
{
	OdbcConnection^ connection = ConnectToDatabase();
	String^ sql = "DELETE FROM public.Service_uslugs_to_Client WHERE id_Service_uslugs_to_Client = ?";
	OdbcCommand^ cmd = gcnew OdbcCommand(sql, connection);
	cmd->Parameters->AddWithValue("?", serviceId);
	cmd->ExecuteNonQuery();
	connection->Close();
}
void DeleteService_zacazFromDatabase(int id)
{
	OdbcConnection^ connection = ConnectToDatabase();
	String^ sql = "DELETE FROM public.Service_zacaz WHERE id_service_zacaz = ?";
	OdbcCommand^ cmd = gcnew OdbcCommand(sql, connection);
	cmd->Parameters->AddWithValue("?", id);
	cmd->ExecuteNonQuery();
	connection->Close();
}

void UpdateMark(int id, String^ name, String^ country)
{
	OdbcConnection^ connection = ConnectToDatabase();
	String^ sql = "UPDATE public.Marks SET Mark_name = ?, Mark_country = ? WHERE id_mark = ?";
	OdbcCommand^ cmd = gcnew OdbcCommand(sql, connection);
	cmd->Parameters->AddWithValue("?", name);
	cmd->Parameters->AddWithValue("?", country);
	cmd->Parameters->AddWithValue("?", id);
	cmd->ExecuteNonQuery();
	connection->Close();
}
void UpdateCar(int id, String^ name, int markId, DateTime yearCreate, float coast, String^ status, String^ color, String^ typeCorpus, String^ typeEngin, float enginVolume)
{
	OdbcConnection^ connection = ConnectToDatabase();
	String^ sql = "UPDATE public.Cars SET Car_name = ?, Car_id_mark = ?, Car_year_create = ?, Car_coast = ?, Car_status = ?, Car_color = ?, Car_type_corpus = ?, Car_type_engin = ?, Car_engin_volume = ? WHERE id_car = ?";
	OdbcCommand^ cmd = gcnew OdbcCommand(sql, connection);
	cmd->Parameters->AddWithValue("?", name);
	cmd->Parameters->AddWithValue("?", markId);
	cmd->Parameters->AddWithValue("?", yearCreate);
	cmd->Parameters->AddWithValue("?", coast);
	cmd->Parameters->AddWithValue("?", status);
	cmd->Parameters->AddWithValue("?", color);
	cmd->Parameters->AddWithValue("?", typeCorpus);
	cmd->Parameters->AddWithValue("?", typeEngin);
	cmd->Parameters->AddWithValue("?", enginVolume);
	cmd->Parameters->AddWithValue("?", id);
	cmd->ExecuteNonQuery();
	connection->Close();
}
void UpdateClient(int id, String^ name, String^ fam, String^ adress, String^ phoneNum, String^ email, String^ pass)
{
	OdbcConnection^ connection = ConnectToDatabase();
	String^ sql = "UPDATE public.Clients SET Client_name = ?, Client_fam = ?, Client_adress = ?, Client_phone_num = ?, Client_email = ?, Client_pass = ? WHERE id_client = ?";
	OdbcCommand^ cmd = gcnew OdbcCommand(sql, connection);
	cmd->Parameters->AddWithValue("?", name);
	cmd->Parameters->AddWithValue("?", fam);
	cmd->Parameters->AddWithValue("?", adress);
	cmd->Parameters->AddWithValue("?", phoneNum);
	cmd->Parameters->AddWithValue("?", email);
	cmd->Parameters->AddWithValue("?", pass);
	cmd->Parameters->AddWithValue("?", id);
	cmd->ExecuteNonQuery();
	connection->Close();
}
void UpdateMeneger(int id, String^ name, String^ fam, String^ email, String^ pass, String^ phoneNum)
{
	OdbcConnection^ connection = ConnectToDatabase();
	String^ sql = "UPDATE public.Menegers SET Meneger_name = ?, Meneger_fam = ?, Meneger_email = ?, Meneger_pass = ?, Maneger_phone_num = ? WHERE id_meneger = ?";
	OdbcCommand^ cmd = gcnew OdbcCommand(sql, connection);
	cmd->Parameters->AddWithValue("?", name);
	cmd->Parameters->AddWithValue("?", fam);
	cmd->Parameters->AddWithValue("?", email);
	cmd->Parameters->AddWithValue("?", pass);
	cmd->Parameters->AddWithValue("?", phoneNum);
	cmd->Parameters->AddWithValue("?", id);
	cmd->ExecuteNonQuery();
	connection->Close();
}
void UpdateAdmin(int id, String^ name, String^ fam, String^ email, String^ pass, String^ phoneNum)
{
	OdbcConnection^ connection = ConnectToDatabase();
	String^ sql = "UPDATE public.Admins SET Admin_name = ?, Admin_fam = ?, Admin_email = ?, Admin_pass = ?, Admin_phone_num = ? WHERE id_Admin = ?";
	OdbcCommand^ cmd = gcnew OdbcCommand(sql, connection);
	cmd->Parameters->AddWithValue("?", name);
	cmd->Parameters->AddWithValue("?", fam);
	cmd->Parameters->AddWithValue("?", email);
	cmd->Parameters->AddWithValue("?", pass);
	cmd->Parameters->AddWithValue("?", phoneNum);
	cmd->Parameters->AddWithValue("?", id);
	cmd->ExecuteNonQuery();
	connection->Close();
}
void UpdateSold(int id, int carId, int clientId, int menegerId, DateTime date)
{
	OdbcConnection^ connection = ConnectToDatabase();
	String^ sql = "UPDATE public.Sold SET Sold_id_car = ?, Sold_id_client = ?, Sold_id_meneger = ?, Sold_date = ? WHERE id_sold = ?";
	OdbcCommand^ cmd = gcnew OdbcCommand(sql, connection);
	cmd->Parameters->AddWithValue("?", carId);
	cmd->Parameters->AddWithValue("?", clientId);
	cmd->Parameters->AddWithValue("?", menegerId);
	cmd->Parameters->AddWithValue("?", date);
	cmd->Parameters->AddWithValue("?", id);
	cmd->ExecuteNonQuery();
	connection->Close();
}
void UpdateService_zacaz(int id, int carId, int clientId, String^ problem, DateTime date, String^ status)
{
	OdbcConnection^ connection = ConnectToDatabase();
	String^ sql = "UPDATE public.Service_zacaz SET Service_zacaz_id_car = ?, Service_zacaz_id_client = ?, Service_zacaz_problem = ?, Service_zacaz_date = ?, Service_zacaz_status = ? WHERE id_service_zacaz = ?";
	OdbcCommand^ cmd = gcnew OdbcCommand(sql, connection);
	cmd->Parameters->AddWithValue("?", carId);
	cmd->Parameters->AddWithValue("?", clientId);
	cmd->Parameters->AddWithValue("?", problem);
	cmd->Parameters->AddWithValue("?", date);
	cmd->Parameters->AddWithValue("?", status);
	cmd->Parameters->AddWithValue("?", id);
	cmd->ExecuteNonQuery();
	connection->Close();
}
void UpdateService_uslugs(int id, String^ name, float coast)
{
	OdbcConnection^ connection = ConnectToDatabase();
	String^ sql = "UPDATE public.Service_uslugs SET Service_uslugs_name = ?, Service_uslugs_coast = ? WHERE id_service_uslugs = ?";
	OdbcCommand^ cmd = gcnew OdbcCommand(sql, connection);
	cmd->Parameters->AddWithValue("?", name);
	cmd->Parameters->AddWithValue("?", coast);
	cmd->Parameters->AddWithValue("?", id);
	cmd->ExecuteNonQuery();
	connection->Close();
}
void UpdateService_uslugs_to_Client(int id, int uslugId, int clientId, int menegerId)
{
	OdbcConnection^ connection = ConnectToDatabase();
	String^ sql = "UPDATE public.Service_uslugs_to_Client SET Service_uslugs_to_Client_id_uslug = ?, Service_uslugs_to_Client_id_client = ?, Service_uslugs_to_Client_id_meneger = ? WHERE id_Service_uslugs_to_Client = ?";
	OdbcCommand^ cmd = gcnew OdbcCommand(sql, connection);
	cmd->Parameters->AddWithValue("?", uslugId);
	cmd->Parameters->AddWithValue("?", clientId);
	cmd->Parameters->AddWithValue("?", menegerId);
	cmd->Parameters->AddWithValue("?", id);
	cmd->ExecuteNonQuery();
	connection->Close();
}





private: System::Void Exit_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void выйтиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void маркуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void автомобильToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void услугуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void менеджераToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void маркуToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void автомобильToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void услугуToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void менеджераToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void маркуToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void автомобильToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void услугуToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void менеджераToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ADMIN_SCREEN_Load(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_Click(System::Object^ sender, System::EventArgs^ e);
};
}
