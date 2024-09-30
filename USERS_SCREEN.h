#pragma once

namespace CarDealership {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::IO;
	using namespace System::Drawing;
	using namespace System::Data::Odbc;

	/// <summary>
	/// Сводка для USERS_SCREEN
	/// </summary>
	public ref class USERS_SCREEN : public System::Windows::Forms::Form
	{
	public:
		USERS_SCREEN(void)
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
		~USERS_SCREEN()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Exit_button;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;















	private: System::Windows::Forms::ToolStripMenuItem^ выйтиToolStripMenuItem;
	private: System::Windows::Forms::Button^ Sort_button;





	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox_coast;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox_name;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox_type_corp;

	private: System::Windows::Forms::ComboBox^ comboBox_status;
	private: System::Windows::Forms::ComboBox^ comboBox_country;


	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ComboBox^ comboBox_type_engine;

	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::ToolStripMenuItem^ профильToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ моиЗаказыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ моиУслугиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ моиПокупкиToolStripMenuItem;
	private: System::Windows::Forms::ComboBox^ comboBox_engine_volume;
	private: System::Windows::Forms::ComboBox^ comboBox_color;
	private: System::Windows::Forms::ComboBox^ comboBox_year;
	private: System::Windows::Forms::ToolStripMenuItem^ каталогToolStripMenuItem;


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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle21 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle22 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle23 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle24 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle25 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->Exit_button = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->выйтиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->профильToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->моиЗаказыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->моиУслугиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->моиПокупкиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->каталогToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Sort_button = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox_coast = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox_name = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox_type_corp = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox_status = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox_country = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->comboBox_type_engine = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->comboBox_engine_volume = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox_color = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox_year = (gcnew System::Windows::Forms::ComboBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// Exit_button
			// 
			this->Exit_button->BackColor = System::Drawing::Color::Red;
			this->Exit_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Exit_button->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Exit_button->Location = System::Drawing::Point(1039, 0);
			this->Exit_button->Name = L"Exit_button";
			this->Exit_button->Size = System::Drawing::Size(36, 33);
			this->Exit_button->TabIndex = 30;
			this->Exit_button->Text = L"✕";
			this->Exit_button->UseVisualStyleBackColor = false;
			this->Exit_button->Click += gcnew System::EventHandler(this, &USERS_SCREEN::Exit_button_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->menuStrip1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Impact", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->выйтиToolStripMenuItem,
					this->профильToolStripMenuItem, this->моиЗаказыToolStripMenuItem, this->моиУслугиToolStripMenuItem, this->моиПокупкиToolStripMenuItem,
					this->каталогToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1075, 34);
			this->menuStrip1->TabIndex = 31;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// выйтиToolStripMenuItem
			// 
			this->выйтиToolStripMenuItem->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->выйтиToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Impact", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->выйтиToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->выйтиToolStripMenuItem->ImageTransparentColor = System::Drawing::SystemColors::ButtonHighlight;
			this->выйтиToolStripMenuItem->Name = L"выйтиToolStripMenuItem";
			this->выйтиToolStripMenuItem->Size = System::Drawing::Size(85, 30);
			this->выйтиToolStripMenuItem->Text = L"Выйти";
			this->выйтиToolStripMenuItem->Click += gcnew System::EventHandler(this, &USERS_SCREEN::выйтиToolStripMenuItem_Click);
			// 
			// профильToolStripMenuItem
			// 
			this->профильToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->профильToolStripMenuItem->Name = L"профильToolStripMenuItem";
			this->профильToolStripMenuItem->Size = System::Drawing::Size(109, 30);
			this->профильToolStripMenuItem->Text = L"Профиль";
			this->профильToolStripMenuItem->Click += gcnew System::EventHandler(this, &USERS_SCREEN::профильToolStripMenuItem_Click);
			// 
			// моиЗаказыToolStripMenuItem
			// 
			this->моиЗаказыToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->моиЗаказыToolStripMenuItem->Name = L"моиЗаказыToolStripMenuItem";
			this->моиЗаказыToolStripMenuItem->Size = System::Drawing::Size(137, 30);
			this->моиЗаказыToolStripMenuItem->Text = L"Мои заказы";
			this->моиЗаказыToolStripMenuItem->Click += gcnew System::EventHandler(this, &USERS_SCREEN::моиЗаказыToolStripMenuItem_Click);
			// 
			// моиУслугиToolStripMenuItem
			// 
			this->моиУслугиToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->моиУслугиToolStripMenuItem->Name = L"моиУслугиToolStripMenuItem";
			this->моиУслугиToolStripMenuItem->Size = System::Drawing::Size(125, 30);
			this->моиУслугиToolStripMenuItem->Text = L"Мои услуги";
			this->моиУслугиToolStripMenuItem->Click += gcnew System::EventHandler(this, &USERS_SCREEN::моиУслугиToolStripMenuItem_Click);
			// 
			// моиПокупкиToolStripMenuItem
			// 
			this->моиПокупкиToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->моиПокупкиToolStripMenuItem->Name = L"моиПокупкиToolStripMenuItem";
			this->моиПокупкиToolStripMenuItem->Size = System::Drawing::Size(142, 30);
			this->моиПокупкиToolStripMenuItem->Text = L"Мои покупки";
			this->моиПокупкиToolStripMenuItem->Click += gcnew System::EventHandler(this, &USERS_SCREEN::моиПокупкиToolStripMenuItem_Click);
			// 
			// каталогToolStripMenuItem
			// 
			this->каталогToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->каталогToolStripMenuItem->Name = L"каталогToolStripMenuItem";
			this->каталогToolStripMenuItem->Size = System::Drawing::Size(96, 30);
			this->каталогToolStripMenuItem->Text = L"Каталог";
			this->каталогToolStripMenuItem->Click += gcnew System::EventHandler(this, &USERS_SCREEN::каталогToolStripMenuItem_Click);
			// 
			// Sort_button
			// 
			this->Sort_button->BackColor = System::Drawing::SystemColors::ControlText;
			this->Sort_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Sort_button->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Sort_button->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->Sort_button->Location = System::Drawing::Point(860, 616);
			this->Sort_button->Name = L"Sort_button";
			this->Sort_button->Size = System::Drawing::Size(205, 45);
			this->Sort_button->TabIndex = 33;
			this->Sort_button->Text = L"Отсортировать";
			this->Sort_button->UseVisualStyleBackColor = false;
			this->Sort_button->Click += gcnew System::EventHandler(this, &USERS_SCREEN::Sort_button_Click);
			// 
			// dataGridView1
			// 
			dataGridViewCellStyle21->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle21->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle21->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle21->SelectionBackColor = System::Drawing::SystemColors::HotTrack;
			dataGridViewCellStyle21->SelectionForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle21;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle22->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle22->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle22->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle22->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle22->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle22->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle22->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle22;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Cursor = System::Windows::Forms::Cursors::Default;
			dataGridViewCellStyle23->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle23->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle23->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle23->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle23->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle23->SelectionForeColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle23->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle23;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView1->Location = System::Drawing::Point(-1, 37);
			this->dataGridView1->Name = L"dataGridView1";
			dataGridViewCellStyle24->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle24->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle24->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle24->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle24->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle24->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle24->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle24;
			dataGridViewCellStyle25->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle25->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle25->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle25->SelectionBackColor = System::Drawing::SystemColors::HotTrack;
			dataGridViewCellStyle25->SelectionForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle25;
			this->dataGridView1->RowTemplate->DefaultCellStyle->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView1->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->dataGridView1->RowTemplate->DefaultCellStyle->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->RowTemplate->DefaultCellStyle->SelectionBackColor = System::Drawing::SystemColors::HotTrack;
			this->dataGridView1->RowTemplate->DefaultCellStyle->SelectionForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->Size = System::Drawing::Size(1076, 261);
			this->dataGridView1->TabIndex = 38;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Location = System::Drawing::Point(564, 441);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(164, 34);
			this->label7->TabIndex = 60;
			this->label7->Text = L"Год выпуска";
			// 
			// textBox_coast
			// 
			this->textBox_coast->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_coast->Location = System::Drawing::Point(222, 438);
			this->textBox_coast->Name = L"textBox_coast";
			this->textBox_coast->Size = System::Drawing::Size(319, 40);
			this->textBox_coast->TabIndex = 58;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(6, 498);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(70, 34);
			this->label5->TabIndex = 57;
			this->label5->Text = L"Цвет";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(6, 441);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(72, 34);
			this->label6->TabIndex = 56;
			this->label6->Text = L"Цена";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(564, 384);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(143, 34);
			this->label3->TabIndex = 53;
			this->label3->Text = L"Тип кузова";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(564, 326);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(98, 34);
			this->label4->TabIndex = 52;
			this->label4->Text = L"Статус ";
			// 
			// textBox_name
			// 
			this->textBox_name->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_name->Location = System::Drawing::Point(222, 329);
			this->textBox_name->Name = L"textBox_name";
			this->textBox_name->Size = System::Drawing::Size(319, 40);
			this->textBox_name->TabIndex = 50;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(6, 390);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(90, 34);
			this->label2->TabIndex = 49;
			this->label2->Text = L"Марка";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(6, 332);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(129, 34);
			this->label1->TabIndex = 48;
			this->label1->Text = L"Название";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(222, 383);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(319, 42);
			this->comboBox1->TabIndex = 62;
			// 
			// comboBox_type_corp
			// 
			this->comboBox_type_corp->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox_type_corp->FormattingEnabled = true;
			this->comboBox_type_corp->Location = System::Drawing::Point(746, 381);
			this->comboBox_type_corp->Name = L"comboBox_type_corp";
			this->comboBox_type_corp->Size = System::Drawing::Size(319, 42);
			this->comboBox_type_corp->TabIndex = 63;
			// 
			// comboBox_status
			// 
			this->comboBox_status->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox_status->FormattingEnabled = true;
			this->comboBox_status->Location = System::Drawing::Point(746, 324);
			this->comboBox_status->Name = L"comboBox_status";
			this->comboBox_status->Size = System::Drawing::Size(319, 42);
			this->comboBox_status->TabIndex = 64;
			// 
			// comboBox_country
			// 
			this->comboBox_country->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox_country->FormattingEnabled = true;
			this->comboBox_country->Location = System::Drawing::Point(746, 490);
			this->comboBox_country->Name = L"comboBox_country";
			this->comboBox_country->Size = System::Drawing::Size(319, 42);
			this->comboBox_country->TabIndex = 66;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label8->Location = System::Drawing::Point(564, 496);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(98, 34);
			this->label8->TabIndex = 65;
			this->label8->Text = L"Страна";
			// 
			// comboBox_type_engine
			// 
			this->comboBox_type_engine->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox_type_engine->FormattingEnabled = true;
			this->comboBox_type_engine->Location = System::Drawing::Point(746, 547);
			this->comboBox_type_engine->Name = L"comboBox_type_engine";
			this->comboBox_type_engine->Size = System::Drawing::Size(319, 42);
			this->comboBox_type_engine->TabIndex = 70;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label9->Location = System::Drawing::Point(564, 553);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(185, 34);
			this->label9->TabIndex = 69;
			this->label9->Text = L"Тип двигателя";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label10->Location = System::Drawing::Point(6, 555);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(221, 34);
			this->label10->TabIndex = 67;
			this->label10->Text = L"Объем двигателя";
			// 
			// comboBox_engine_volume
			// 
			this->comboBox_engine_volume->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox_engine_volume->FormattingEnabled = true;
			this->comboBox_engine_volume->Location = System::Drawing::Point(222, 550);
			this->comboBox_engine_volume->Name = L"comboBox_engine_volume";
			this->comboBox_engine_volume->Size = System::Drawing::Size(319, 42);
			this->comboBox_engine_volume->TabIndex = 72;
			// 
			// comboBox_color
			// 
			this->comboBox_color->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox_color->FormattingEnabled = true;
			this->comboBox_color->Location = System::Drawing::Point(222, 493);
			this->comboBox_color->Name = L"comboBox_color";
			this->comboBox_color->Size = System::Drawing::Size(319, 42);
			this->comboBox_color->TabIndex = 71;
			// 
			// comboBox_year
			// 
			this->comboBox_year->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox_year->FormattingEnabled = true;
			this->comboBox_year->Location = System::Drawing::Point(746, 436);
			this->comboBox_year->Name = L"comboBox_year";
			this->comboBox_year->Size = System::Drawing::Size(319, 42);
			this->comboBox_year->TabIndex = 73;
			// 
			// USERS_SCREEN
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(1075, 673);
			this->Controls->Add(this->comboBox_year);
			this->Controls->Add(this->comboBox_engine_volume);
			this->Controls->Add(this->comboBox_color);
			this->Controls->Add(this->comboBox_type_engine);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->comboBox_country);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->comboBox_status);
			this->Controls->Add(this->comboBox_type_corp);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox_coast);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox_name);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->Sort_button);
			this->Controls->Add(this->Exit_button);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"USERS_SCREEN";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"USERS_SCREEN";
			this->Load += gcnew System::EventHandler(this, &USERS_SCREEN::USERS_SCREEN_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
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
private: System::Void выйтиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void USERS_SCREEN_Load(System::Object^ sender, System::EventArgs^ e);
private: System::Void Sort_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void каталогToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void моиПокупкиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void моиУслугиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void моиЗаказыToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void профильToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
};
}
