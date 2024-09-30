#pragma once

namespace CarDealership {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::Odbc;

	/// <summary>
	/// Сводка для MANEGER_SCREE
	/// </summary>
	public ref class MANEGER_SCREE : public System::Windows::Forms::Form
	{
	public:
		MANEGER_SCREE(void)
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
		~MANEGER_SCREE()
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
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox7;

	private: System::Windows::Forms::Label^ label7;

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle16 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle17 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle18 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle19 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle20 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle21 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle22 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle23 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle24 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle25 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle26 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle27 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle28 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle29 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle30 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
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
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
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
			this->Exit_button->Location = System::Drawing::Point(1741, 1);
			this->Exit_button->Name = L"Exit_button";
			this->Exit_button->Size = System::Drawing::Size(36, 33);
			this->Exit_button->TabIndex = 29;
			this->Exit_button->Text = L"✕";
			this->Exit_button->UseVisualStyleBackColor = false;
			this->Exit_button->Click += gcnew System::EventHandler(this, &MANEGER_SCREE::Exit_button_Click);
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
			this->menuStrip1->Size = System::Drawing::Size(1777, 34);
			this->menuStrip1->TabIndex = 30;
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
			this->добавитьToolStripMenuItem->ImageTransparentColor = System::Drawing::SystemColors::ActiveCaptionText;
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
			this->маркуToolStripMenuItem->Size = System::Drawing::Size(180, 24);
			this->маркуToolStripMenuItem->Text = L"Пользователя";
			this->маркуToolStripMenuItem->Click += gcnew System::EventHandler(this, &MANEGER_SCREE::маркуToolStripMenuItem_Click);
			// 
			// автомобильToolStripMenuItem
			// 
			this->автомобильToolStripMenuItem->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->автомобильToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->автомобильToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->автомобильToolStripMenuItem->ImageTransparentColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->автомобильToolStripMenuItem->Name = L"автомобильToolStripMenuItem";
			this->автомобильToolStripMenuItem->Size = System::Drawing::Size(180, 24);
			this->автомобильToolStripMenuItem->Text = L"Продажу";
			this->автомобильToolStripMenuItem->Click += gcnew System::EventHandler(this, &MANEGER_SCREE::автомобильToolStripMenuItem_Click);
			// 
			// услугуToolStripMenuItem
			// 
			this->услугуToolStripMenuItem->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->услугуToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->услугуToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->услугуToolStripMenuItem->ImageTransparentColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->услугуToolStripMenuItem->Name = L"услугуToolStripMenuItem";
			this->услугуToolStripMenuItem->Size = System::Drawing::Size(180, 24);
			this->услугуToolStripMenuItem->Text = L"Услугу";
			this->услугуToolStripMenuItem->Click += gcnew System::EventHandler(this, &MANEGER_SCREE::услугуToolStripMenuItem_Click);
			// 
			// менеджераToolStripMenuItem
			// 
			this->менеджераToolStripMenuItem->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->менеджераToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->менеджераToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->менеджераToolStripMenuItem->ImageTransparentColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->менеджераToolStripMenuItem->Name = L"менеджераToolStripMenuItem";
			this->менеджераToolStripMenuItem->Size = System::Drawing::Size(180, 24);
			this->менеджераToolStripMenuItem->Text = L"Заказ";
			this->менеджераToolStripMenuItem->Click += gcnew System::EventHandler(this, &MANEGER_SCREE::менеджераToolStripMenuItem_Click);
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
			this->изменитьToolStripMenuItem->ImageTransparentColor = System::Drawing::SystemColors::ButtonHighlight;
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
			this->маркуToolStripMenuItem1->Size = System::Drawing::Size(179, 24);
			this->маркуToolStripMenuItem1->Text = L"Пользователя";
			this->маркуToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MANEGER_SCREE::маркуToolStripMenuItem1_Click);
			// 
			// автомобильToolStripMenuItem1
			// 
			this->автомобильToolStripMenuItem1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->автомобильToolStripMenuItem1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->автомобильToolStripMenuItem1->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->автомобильToolStripMenuItem1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->автомобильToolStripMenuItem1->Name = L"автомобильToolStripMenuItem1";
			this->автомобильToolStripMenuItem1->Size = System::Drawing::Size(179, 24);
			this->автомобильToolStripMenuItem1->Text = L"Продажу";
			this->автомобильToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MANEGER_SCREE::автомобильToolStripMenuItem1_Click);
			// 
			// услугуToolStripMenuItem1
			// 
			this->услугуToolStripMenuItem1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->услугуToolStripMenuItem1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->услугуToolStripMenuItem1->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->услугуToolStripMenuItem1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->услугуToolStripMenuItem1->Name = L"услугуToolStripMenuItem1";
			this->услугуToolStripMenuItem1->Size = System::Drawing::Size(179, 24);
			this->услугуToolStripMenuItem1->Text = L"Услугу";
			this->услугуToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MANEGER_SCREE::услугуToolStripMenuItem1_Click);
			// 
			// менеджераToolStripMenuItem1
			// 
			this->менеджераToolStripMenuItem1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->менеджераToolStripMenuItem1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->менеджераToolStripMenuItem1->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->менеджераToolStripMenuItem1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->менеджераToolStripMenuItem1->Name = L"менеджераToolStripMenuItem1";
			this->менеджераToolStripMenuItem1->Size = System::Drawing::Size(179, 24);
			this->менеджераToolStripMenuItem1->Text = L"Заказ";
			this->менеджераToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MANEGER_SCREE::менеджераToolStripMenuItem1_Click);
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
			this->маркуToolStripMenuItem2->Size = System::Drawing::Size(179, 24);
			this->маркуToolStripMenuItem2->Text = L"Пользователя";
			this->маркуToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MANEGER_SCREE::маркуToolStripMenuItem2_Click);
			// 
			// автомобильToolStripMenuItem2
			// 
			this->автомобильToolStripMenuItem2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->автомобильToolStripMenuItem2->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->автомобильToolStripMenuItem2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->автомобильToolStripMenuItem2->Name = L"автомобильToolStripMenuItem2";
			this->автомобильToolStripMenuItem2->Size = System::Drawing::Size(179, 24);
			this->автомобильToolStripMenuItem2->Text = L"Продажу";
			this->автомобильToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MANEGER_SCREE::автомобильToolStripMenuItem2_Click);
			// 
			// услугуToolStripMenuItem2
			// 
			this->услугуToolStripMenuItem2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->услугуToolStripMenuItem2->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->услугуToolStripMenuItem2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->услугуToolStripMenuItem2->Name = L"услугуToolStripMenuItem2";
			this->услугуToolStripMenuItem2->Size = System::Drawing::Size(179, 24);
			this->услугуToolStripMenuItem2->Text = L"Услугу";
			this->услугуToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MANEGER_SCREE::услугуToolStripMenuItem2_Click);
			// 
			// менеджераToolStripMenuItem2
			// 
			this->менеджераToolStripMenuItem2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->менеджераToolStripMenuItem2->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->менеджераToolStripMenuItem2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->менеджераToolStripMenuItem2->Name = L"менеджераToolStripMenuItem2";
			this->менеджераToolStripMenuItem2->Size = System::Drawing::Size(179, 24);
			this->менеджераToolStripMenuItem2->Text = L"Заказ";
			this->менеджераToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MANEGER_SCREE::менеджераToolStripMenuItem2_Click);
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
			this->выйтиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MANEGER_SCREE::выйтиToolStripMenuItem_Click);
			// 
			// dataGridView1
			// 
			dataGridViewCellStyle16->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle16->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle16->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle16->SelectionBackColor = System::Drawing::SystemColors::HotTrack;
			dataGridViewCellStyle16->SelectionForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle16;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle17->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle17->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle17->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle17->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle17->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle17->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle17->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle17;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Cursor = System::Windows::Forms::Cursors::Default;
			dataGridViewCellStyle18->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle18->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle18->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle18->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle18->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle18->SelectionForeColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle18->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle18;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView1->Location = System::Drawing::Point(12, 49);
			this->dataGridView1->Name = L"dataGridView1";
			dataGridViewCellStyle19->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle19->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle19->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle19->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle19->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle19->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle19->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle19;
			dataGridViewCellStyle20->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle20->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle20->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle20->SelectionBackColor = System::Drawing::SystemColors::HotTrack;
			dataGridViewCellStyle20->SelectionForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle20;
			this->dataGridView1->RowTemplate->DefaultCellStyle->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView1->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->dataGridView1->RowTemplate->DefaultCellStyle->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->RowTemplate->DefaultCellStyle->SelectionBackColor = System::Drawing::SystemColors::HotTrack;
			this->dataGridView1->RowTemplate->DefaultCellStyle->SelectionForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->Size = System::Drawing::Size(492, 473);
			this->dataGridView1->TabIndex = 31;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(1195, 541);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(179, 40);
			this->textBox5->TabIndex = 37;
			this->textBox5->Visible = false;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->Location = System::Drawing::Point(1195, 600);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(179, 40);
			this->textBox6->TabIndex = 36;
			this->textBox6->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(21, 611);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 34);
			this->label2->TabIndex = 35;
			this->label2->Text = L"ИМЯ";
			this->label2->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(21, 553);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(38, 34);
			this->label1->TabIndex = 34;
			this->label1->Text = L"ID";
			this->label1->Visible = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlText;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button1->Location = System::Drawing::Point(1477, 600);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(288, 45);
			this->button1->TabIndex = 33;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MANEGER_SCREE::button1_Click);
			// 
			// dataGridView2
			// 
			dataGridViewCellStyle21->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle21->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle21->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle21->SelectionBackColor = System::Drawing::SystemColors::HotTrack;
			dataGridViewCellStyle21->SelectionForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView2->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle21;
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle22->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle22->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle22->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle22->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle22->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle22->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle22->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle22;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Cursor = System::Windows::Forms::Cursors::Default;
			dataGridViewCellStyle23->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle23->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle23->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle23->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle23->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle23->SelectionForeColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle23->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView2->DefaultCellStyle = dataGridViewCellStyle23;
			this->dataGridView2->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView2->Location = System::Drawing::Point(519, 294);
			this->dataGridView2->Name = L"dataGridView2";
			dataGridViewCellStyle24->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle24->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle24->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle24->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle24->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle24->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle24->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->RowHeadersDefaultCellStyle = dataGridViewCellStyle24;
			dataGridViewCellStyle25->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle25->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle25->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle25->SelectionBackColor = System::Drawing::SystemColors::HotTrack;
			dataGridViewCellStyle25->SelectionForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView2->RowsDefaultCellStyle = dataGridViewCellStyle25;
			this->dataGridView2->RowTemplate->DefaultCellStyle->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView2->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->dataGridView2->RowTemplate->DefaultCellStyle->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView2->RowTemplate->DefaultCellStyle->SelectionBackColor = System::Drawing::SystemColors::HotTrack;
			this->dataGridView2->RowTemplate->DefaultCellStyle->SelectionForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView2->Size = System::Drawing::Size(1246, 228);
			this->dataGridView2->TabIndex = 38;
			// 
			// dataGridView3
			// 
			dataGridViewCellStyle26->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle26->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle26->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle26->SelectionBackColor = System::Drawing::SystemColors::HotTrack;
			dataGridViewCellStyle26->SelectionForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView3->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle26;
			this->dataGridView3->BackgroundColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle27->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle27->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle27->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle27->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle27->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle27->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle27->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView3->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle27;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Cursor = System::Windows::Forms::Cursors::Default;
			dataGridViewCellStyle28->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle28->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle28->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle28->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle28->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle28->SelectionForeColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle28->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView3->DefaultCellStyle = dataGridViewCellStyle28;
			this->dataGridView3->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView3->Location = System::Drawing::Point(519, 49);
			this->dataGridView3->Name = L"dataGridView3";
			dataGridViewCellStyle29->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle29->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle29->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle29->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle29->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle29->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle29->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView3->RowHeadersDefaultCellStyle = dataGridViewCellStyle29;
			dataGridViewCellStyle30->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle30->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle30->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle30->SelectionBackColor = System::Drawing::SystemColors::HotTrack;
			dataGridViewCellStyle30->SelectionForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView3->RowsDefaultCellStyle = dataGridViewCellStyle30;
			this->dataGridView3->RowTemplate->DefaultCellStyle->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView3->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->dataGridView3->RowTemplate->DefaultCellStyle->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView3->RowTemplate->DefaultCellStyle->SelectionBackColor = System::Drawing::SystemColors::HotTrack;
			this->dataGridView3->RowTemplate->DefaultCellStyle->SelectionForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView3->Size = System::Drawing::Size(1246, 228);
			this->dataGridView3->TabIndex = 39;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(211, 550);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(179, 40);
			this->textBox1->TabIndex = 43;
			this->textBox1->Visible = false;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(211, 605);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(179, 40);
			this->textBox2->TabIndex = 42;
			this->textBox2->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(404, 556);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 34);
			this->label3->TabIndex = 41;
			this->label3->Text = L"АДРЕС";
			this->label3->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(404, 611);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(131, 34);
			this->label4->TabIndex = 40;
			this->label4->Text = L"ФАМИЛИЯ";
			this->label4->Visible = false;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(669, 542);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(179, 40);
			this->textBox3->TabIndex = 47;
			this->textBox3->Visible = false;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(669, 600);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(179, 40);
			this->textBox4->TabIndex = 46;
			this->textBox4->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(914, 542);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(77, 34);
			this->label5->TabIndex = 45;
			this->label5->Text = L"EMAIL";
			this->label5->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(914, 606);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(210, 34);
			this->label6->TabIndex = 44;
			this->label6->Text = L"НОМЕР ТЕЛЕФОНА";
			this->label6->Visible = false;
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox7->Location = System::Drawing::Point(1586, 544);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(179, 40);
			this->textBox7->TabIndex = 49;
			this->textBox7->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Location = System::Drawing::Point(1391, 547);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(70, 34);
			this->label7->TabIndex = 48;
			this->label7->Text = L"PASS";
			this->label7->Visible = false;
			// 
			// MANEGER_SCREE
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(1777, 672);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->Exit_button);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MANEGER_SCREE";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MANEGER_SCREE";
			this->Load += gcnew System::EventHandler(this, &MANEGER_SCREE::MANEGER_SCREE_Load);
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

		void FillDataGridFromDatabase_Marks(System::Windows::Forms::DataGridView^ dataGridView)
		{
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
		void FillDataGridFromDatabase_Cars(System::Windows::Forms::DataGridView^ dataGridView)
		{
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
		void FillDataGridFromDatabase_Clients(System::Windows::Forms::DataGridView^ dataGridView)
		{
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
		void FillDataGridFromDatabase_Menegers(System::Windows::Forms::DataGridView^ dataGridView)
		{
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
		void FillDataGridFromDatabase_Admins(System::Windows::Forms::DataGridView^ dataGridView)
		{
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
		void FillDataGridFromDatabase_Sold(System::Windows::Forms::DataGridView^ dataGridView)
		{
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
		void FillDataGridFromDatabase_Service_zacaz(System::Windows::Forms::DataGridView^ dataGridView)
		{
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
		void FillDataGridFromDatabase_Service_uslugs(System::Windows::Forms::DataGridView^ dataGridView)
		{
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
		void FillDataGridFromDatabase_Service_uslugs_to_Client(System::Windows::Forms::DataGridView^ dataGridView)
		{
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
		void InsertService_uslugToClientToDatabase(int serviceId, int clientId, int menegerId)
		{
			OdbcConnection^ connection = ConnectToDatabase();
			String^ sql = "INSERT INTO public.Service_uslugs_to_Client (Service_uslugs_to_Client_id_uslug , Service_uslugs_to_Client_id_client, Service_uslugs_to_Client_id_meneger ) VALUES (?, ?, ?)";
			OdbcCommand^ cmd = gcnew OdbcCommand(sql, connection);
			cmd->Parameters->AddWithValue("?", serviceId);
			cmd->Parameters->AddWithValue("?", clientId);
			cmd->Parameters->AddWithValue("?", menegerId);
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

private: System::Void MANEGER_SCREE_Load(System::Object^ sender, System::EventArgs^ e);

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
};
}
