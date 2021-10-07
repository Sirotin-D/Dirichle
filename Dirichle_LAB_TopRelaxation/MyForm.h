#pragma once
#define _USE_MATH_DEFINES
#include <math.h>
#include<vector>
#include<string>
#include<sstream>
#include <iomanip>
#include <iostream>
#include <ctime>
using namespace std;

namespace DirichleLABTopRelaxation {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::NumericUpDown^ numericUpDown6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown5;
	private: System::Windows::Forms::CheckBox^ checkBox1;

	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown7;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;





	private: System::ComponentModel::IContainer^ components;





	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::DarkGray;
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->numericUpDown7);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->numericUpDown6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->numericUpDown4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->numericUpDown3);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->numericUpDown5);
			this->panel1->Controls->Add(this->checkBox1);
			this->panel1->Controls->Add(this->numericUpDown2);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->numericUpDown1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(13, 13);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(454, 343);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Georgia", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(5, 233);
			this->label7->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(157, 30);
			this->label7->TabIndex = 40;
			this->label7->Text = L"Заданная точность на\r\n2 сетке";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Georgia", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(7, 187);
			this->label6->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(155, 30);
			this->label6->TabIndex = 39;
			this->label6->Text = L"Максимальное число \r  итераций на 2 сетке";
			// 
			// numericUpDown7
			// 
			this->numericUpDown7->DecimalPlaces = 15;
			this->numericUpDown7->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 458752 });
			this->numericUpDown7->Location = System::Drawing::Point(187, 243);
			this->numericUpDown7->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->numericUpDown7->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 1048576 });
			this->numericUpDown7->Name = L"numericUpDown7";
			this->numericUpDown7->Size = System::Drawing::Size(124, 20);
			this->numericUpDown7->TabIndex = 38;
			this->numericUpDown7->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 983040 });
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::PaleVioletRed;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Niagara Solid", 12.8F, System::Drawing::FontStyle::Bold));
			this->button2->ForeColor = System::Drawing::SystemColors::WindowText;
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button2->Location = System::Drawing::Point(235, 286);
			this->button2->Margin = System::Windows::Forms::Padding(5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(207, 40);
			this->button2->TabIndex = 37;
			this->button2->Text = L"Решить основную задачу";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDown6->Location = System::Drawing::Point(187, 197);
			this->numericUpDown6->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->numericUpDown6->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(107, 20);
			this->numericUpDown6->TabIndex = 35;
			this->numericUpDown6->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Georgia", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(7, 165);
			this->label5->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(137, 15);
			this->label5->TabIndex = 34;
			this->label5->Text = L"Заданная точность";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::RosyBrown;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Niagara Solid", 12.8F, System::Drawing::FontStyle::Bold));
			this->button1->ForeColor = System::Drawing::SystemColors::WindowText;
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button1->Location = System::Drawing::Point(5, 286);
			this->button1->Margin = System::Windows::Forms::Padding(5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(207, 40);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Решить тестовую задачу";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDown4->Location = System::Drawing::Point(187, 120);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->numericUpDown4->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(107, 20);
			this->numericUpDown4->TabIndex = 33;
			this->numericUpDown4->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Georgia", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(7, 75);
			this->label3->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(126, 15);
			this->label3->TabIndex = 32;
			this->label3->Text = L"Параметр метода";
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->DecimalPlaces = 3;
			this->numericUpDown3->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 65536 });
			this->numericUpDown3->Location = System::Drawing::Point(187, 70);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(107, 20);
			this->numericUpDown3->TabIndex = 31;
			this->numericUpDown3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Georgia", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(5, 110);
			this->label4->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(155, 30);
			this->label4->TabIndex = 30;
			this->label4->Text = L"Максимальное число \r\n             итераций";
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->BackColor = System::Drawing::SystemColors::Window;
			this->numericUpDown5->DecimalPlaces = 15;
			this->numericUpDown5->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 393216 });
			this->numericUpDown5->Location = System::Drawing::Point(187, 160);
			this->numericUpDown5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown5->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 1048576 });
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(124, 20);
			this->numericUpDown5->TabIndex = 29;
			this->numericUpDown5->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 786432 });
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Georgia", 9));
			this->checkBox1->Location = System::Drawing::Point(8, 88);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(169, 19);
			this->checkBox1->TabIndex = 28;
			this->checkBox1->Text = L"Оптимальное значение";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDown2->Location = System::Drawing::Point(187, 39);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(107, 20);
			this->numericUpDown2->TabIndex = 22;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Georgia", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(5, 40);
			this->label2->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(156, 15);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Число разбиений по Y";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDown1->Location = System::Drawing::Point(187, 8);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(107, 20);
			this->numericUpDown1->TabIndex = 20;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Georgia", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(5, 13);
			this->label1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(156, 15);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Число разбиений по X";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Khaki;
			this->panel2->Controls->Add(this->label20);
			this->panel2->Controls->Add(this->label19);
			this->panel2->Controls->Add(this->label18);
			this->panel2->Controls->Add(this->label17);
			this->panel2->Controls->Add(this->label16);
			this->panel2->Controls->Add(this->label15);
			this->panel2->Controls->Add(this->label14);
			this->panel2->Controls->Add(this->label13);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->label11);
			this->panel2->Controls->Add(this->label12);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Location = System::Drawing::Point(13, 382);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(454, 371);
			this->panel2->TabIndex = 1;
			// 
			// label20
			// 
			this->label20->BackColor = System::Drawing::Color::Cyan;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->Location = System::Drawing::Point(1, 329);
			this->label20->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(404, 24);
			this->label20->TabIndex = 28;
			this->label20->Text = L"     ";
			this->label20->Visible = false;
			// 
			// label19
			// 
			this->label19->BackColor = System::Drawing::Color::Cyan;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->Location = System::Drawing::Point(1, 155);
			this->label19->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(372, 24);
			this->label19->TabIndex = 27;
			this->label19->Text = L"     ";
			this->label19->Visible = false;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Georgia", 10, System::Drawing::FontStyle::Bold));
			this->label18->Location = System::Drawing::Point(11, 207);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(362, 17);
			this->label18->TabIndex = 26;
			this->label18->Text = L"Вспомогательная сетка для основной задачи:";
			// 
			// label17
			// 
			this->label17->BackColor = System::Drawing::Color::Cyan;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(1, 305);
			this->label17->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(404, 24);
			this->label17->TabIndex = 25;
			this->label17->Text = L"     ";
			this->label17->Visible = false;
			// 
			// label16
			// 
			this->label16->BackColor = System::Drawing::Color::Cyan;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(1, 281);
			this->label16->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(404, 24);
			this->label16->TabIndex = 24;
			this->label16->Text = L"     ";
			this->label16->Visible = false;
			// 
			// label15
			// 
			this->label15->BackColor = System::Drawing::Color::Cyan;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(1, 257);
			this->label15->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(404, 24);
			this->label15->TabIndex = 23;
			this->label15->Text = L"     ";
			this->label15->Visible = false;
			// 
			// label14
			// 
			this->label14->BackColor = System::Drawing::Color::Cyan;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(1, 233);
			this->label14->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(404, 24);
			this->label14->TabIndex = 22;
			this->label14->Text = L"     ";
			this->label14->Visible = false;
			// 
			// label13
			// 
			this->label13->BackColor = System::Drawing::Color::Cyan;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(1, 131);
			this->label13->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(372, 24);
			this->label13->TabIndex = 21;
			this->label13->Text = L"     ";
			this->label13->Visible = false;
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::Color::Cyan;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(1, 35);
			this->label9->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(372, 24);
			this->label9->TabIndex = 17;
			this->label9->Text = L"     ";
			this->label9->Visible = false;
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::Color::Cyan;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(1, 59);
			this->label10->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(372, 24);
			this->label10->TabIndex = 18;
			this->label10->Text = L"     ";
			this->label10->Visible = false;
			// 
			// label11
			// 
			this->label11->BackColor = System::Drawing::Color::Cyan;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(1, 83);
			this->label11->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(372, 24);
			this->label11->TabIndex = 19;
			this->label11->Text = L"     ";
			this->label11->Visible = false;
			// 
			// label12
			// 
			this->label12->BackColor = System::Drawing::Color::Cyan;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(1, 107);
			this->label12->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(372, 24);
			this->label12->TabIndex = 20;
			this->label12->Text = L"     ";
			this->label12->Visible = false;
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::Cyan;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(1, 11);
			this->label8->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(372, 24);
			this->label8->TabIndex = 17;
			this->label8->Text = L"     ";
			this->label8->Visible = false;
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(473, 13);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(929, 566);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(498, 640);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(602, 23);
			this->progressBar1->TabIndex = 3;
			this->progressBar1->Click += gcnew System::EventHandler(this, &MyForm::progressBar1_Click);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Niagara Solid", 12.8F, System::Drawing::FontStyle::Bold));
			this->label21->Location = System::Drawing::Point(494, 610);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(134, 21);
			this->label21->TabIndex = 4;
			this->label21->Text = L"Ход выполнения:";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold));
			this->button3->Location = System::Drawing::Point(760, 682);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(127, 29);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Отмена";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label22->Location = System::Drawing::Point(1125, 640);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(46, 22);
			this->label22->TabIndex = 6;
			this->label22->Text = L"%%";
			// 
			// label23
			// 
			this->label23->BackColor = System::Drawing::SystemColors::Control;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label23->Location = System::Drawing::Point(636, 607);
			this->label23->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(404, 24);
			this->label23->TabIndex = 23;
			this->label23->Text = L"     ";
			this->label23->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1383, 765);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"Задача Дирихле 1 ступень МВР Сиротин Дмитрий";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private:
		//Точное решение для тестовой задачи
		double U(double _x, double _y) {
			return exp(1 - pow(_x, 2) - pow(_y, 2));
		}

		// f - лапласиан со знаком "-"
		double Laplas(double _x, double _y) {
			return 4 * (1 - pow(_x, 2) - pow(_y, 2)) * exp(1 - pow(_x, 2) - pow(_y, 2));
		}

		//Граничные условия для основной задачи
		double Mu(double _x, double _y) {
			if (_x == -1) {
				return -pow(_y, 2) + 1;
			}
			if (_x == 1) {
				return exp(_y) * (1 - pow(_y, 2));
			}
			if ((_y == -1) || (_y == 1)) {
				return 1 - pow(_x, 2);
			}
		}

		double Mu1(double _y) {
			return -pow(_y, 2) + 1;
		}
		double Mu2(double _y) {
			return exp(_y) * (1 - pow(_y, 2));
		}
		double Mu3(double _x) {
			return 1 - pow(_x, 2);
		}
		double Mu4(double _x) {
			return 1 - pow(_x, 2);
		}

		double Laplas_osn(double _x, double _y) {
			return fabs(pow(_x, 2) - pow(_y, 2));
		}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	progressBar1->Value = 0;

	label14->Visible = false;
	label15->Visible = false;
	label16->Visible = false;
	label17->Visible = false;
	label20->Visible = false;
	//Число разбиений по X и по Y
	int n = Convert::ToInt32(numericUpDown1->Text);
	int m = Convert::ToInt32(numericUpDown2->Text);

	//Граничные условия Задачи
	double a = -1, b = 1;
	double c = -1, d = 1;

	//  Шаги
	double h = (b - a) / n;
	double k = (d - c) / m;

	double w = Convert::ToDouble(numericUpDown3->Text);
	if (checkBox1->Checked) {
		double temp1, temp2;
		temp1 = pow(sin(M_PI / (2.0 * n)), 2);
		temp2 = pow(sin(M_PI / (2.0 * m)), 2);
		temp2 = 2 * pow(k, 2) * temp1 + 2 * pow(h, 2) * temp2;
		temp1 = pow(h, 2) + pow(k, 2);
		temp2 /= temp1;
		w = 2 / (1 + sqrt(temp2 * (2 - temp2))); //Оптимальный параметр
	}

	// Параметры шаблона сетки
	double param_x = 1 / pow(h, 2);
	double param_y = 1 / pow(k, 2);
	double A = -2 * (param_x + param_y);

	// узлы сетки
	vector<double> x(n + 1);
	vector<double> y(m + 1);

	for (int i = 0; i < x.size(); i++) {
		x[i] = a + i * h;
	}

	for (int i = 0; i < y.size(); i++) {
		y[i] = c + i * k;
	}

	vector <vector <double>> V(m + 1);
	for (int i = 0; i < m + 1; i++) {
		V[i] = vector <double>(n + 1, 0);
	}

	//Заполнение вектора численного решения ГУ
	for (int i = 0; i < m + 1; i++) {
		V[i][0] = U(a, y[i]);
	}

	for (int i = 0; i < m + 1; i++) {
		V[i][n] = U(b, y[i]);
	}

	for (int i = 1; i < n; i++) {
		V[0][i] = U(x[i], c);
	}

	for (int i = 1; i < n; i++) {
		V[m][i] = U(x[i], d);
	}

	vector < vector <double>> f_laplas(m + 1);
	for (int i = 0; i < m + 1; i++) {
		f_laplas[i] = vector <double>(n + 1, 0);
	}

	for (int i = 1; i < m; i++) {
		for (int j = 1; j < n; j++) {
			f_laplas[i][j] = Laplas(x[j], y[i]);
		}
	}

	

	
	//Метод верхней релаксации
	int Nmax = Convert::ToInt32(numericUpDown4->Text); // Максимальное число итераций
	int numStep = 0; // Номер итерации
	double eps = Convert::ToDouble(numericUpDown5->Text); // Заданная точность
	double eps_max = 0.0; // текущее значение точности
	double eps_cur = 0.0; // для подсчета текущего значения точности
	double v_old; // старое значение комп вект x
	double v_new; // новое значение комп вект x
	progressBar1->Maximum = Nmax;
	double runtime = clock();
	while (true) {
		eps_max = 0.0;
		for (int i = 1; i < m; i++) {
			for (int j = 1; j < n; j++) {
				v_old = V[i][j];
				v_new = A * v_old + param_x * (V[i][j - 1] + V[i][j + 1]) + param_y * (V[i - 1][j] + V[i + 1][j]);
				V[i][j] = v_old - w * (v_new + f_laplas[i][j]) / A;
				eps_cur = fabs(V[i][j] - v_old);
				if (eps_cur > eps_max) {
					eps_max = eps_cur;
				}
			}
			}
		numStep++;
		progressBar1->Value++;
		if ((eps_max < eps) || (numStep >= Nmax)) {
			break;
		}
	}
	runtime = (clock() - runtime) / 1000.0;
	if (progressBar1->Value < Nmax) {
		progressBar1->Maximum = numStep;
	}

	
	//Вектор невязки
	vector <vector <double>> R(m + 1);
	for (int i = 0; i < m + 1; i++) {
		R[i] = vector <double>(n + 1, 0);
	}
	
	//Норма вектора невязки
	double Nev = 0.0, temp = 0.0;
	for (int i = 1; i < m; i++) {
		for (int j = 1; j < n; j++) {
			R[i][j] = A*V[i][j] + param_x * (V[i][j - 1] + V[i][j + 1]) + param_y * (V[i - 1][j] + V[i + 1][j]) + f_laplas[i][j];
			temp = fabs(R[i][j]);
			if (temp > Nev) {
				Nev = temp;
			}
		}
	}

	
	
	//Погрешность решения тестовой задачи
	double max = 0.0;
	int max_x = 0, max_y = 0;
	for (int i = 0; i < m + 1; i++) {
		for (int j = 0; j < n + 1; j++) {
			temp = fabs(V[i][j] - U(x[j], y[i]));
			if (temp > max) {
				max = temp;
				max_x = j;
				max_y = i;
			}
		}
	}

	
	//Заполнение таблицы численным решением
	if (n < 700) {
		dataGridView1->RowCount = m + 2;
		dataGridView1->ColumnCount = n + 3;

		//  Уберем заголовки строк
		dataGridView1->RowHeadersVisible = false;

		//  Меняем цвет строки и столбца, где лежат исходные x и у
		dataGridView1->RowHeadersDefaultCellStyle->BackColor = Color::Turquoise;
		dataGridView1->ColumnHeadersDefaultCellStyle->BackColor = Color::Turquoise;
		dataGridView1->Rows[0]->DefaultCellStyle->BackColor = Color::Turquoise;
		for (int i = 1; i < m + 2; i++) {
			dataGridView1->Rows[i]->Cells[1]->Style->BackColor = Color::Turquoise;
		}
		dataGridView1->Rows[0]->Cells[0]->Style->BackColor = Color::White;
		dataGridView1->RowHeadersDefaultCellStyle->BackColor = Color::Turquoise;
		dataGridView1->ColumnHeadersDefaultCellStyle->BackColor = Color::Turquoise;
		
		//  Заполняем заголовки таблицы
		for (int i = n, col = 2; i >= 0; i--, col++) {
			dataGridView1->Columns[col]->HeaderText = Convert::ToString(n - i);
			dataGridView1->Rows[0]->Cells[i + 2]->Value = ceil(x[i]*1000)/1000;
		}

		for (int i = m, row = 1; i >= 0; i--, row++) {
			dataGridView1->Rows[row]->Cells[0]->Value = i;
			dataGridView1->Rows[row]->Cells[1]->Value = ceil(y[i]*1000)/1000;
		}
		
		dataGridView1->Rows[0]->Cells[0]->Value = Convert::ToString("j");
		dataGridView1->Columns[1]->HeaderText = Convert::ToString("i");
		dataGridView1->Rows[0]->Cells[1]->Value = Convert::ToString("Y / X");

		
		for (int i = m + 1, k = 0; i > 0; i--, k++) {
			for (int j = 2, p = 0; j < n + 3; j++, p++) {
				dataGridView1->Rows[i]->Cells[j]->Value = ceil(V[k][p]*1000)/1000;
			}
		}
	}
	

	
	//вывод результатов
	label8->Visible = true;
	label9->Visible = true;
	label10->Visible = true;
	label11->Visible = true;
	label12->Visible = true;
	label13->Visible = true;
	label19->Visible = true;

	label8->Text = "Количество проведённых итераций = " + Convert::ToString(numStep);
	label9->Text = "Достигнутая точность = " + Convert::ToString(eps_max);
	label10->Text = "Погрешность схемы = " + Convert::ToString(max);
	label11->Text = "Максимальное отклонение в узле: (" + Convert::ToString(max_x) + ", " + Convert::ToString(max_y) + ")";
	label12->Text = "Норма невязки = " + Convert::ToString(Nev);
	label13->Text = "Значение оптимального параметра: " + Convert::ToString(w);	
	label19->Text = "Время выполения = " + Convert::ToString(runtime);

	
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	progressBar1->Value = 0;

	int n = Convert::ToInt32(numericUpDown1->Text);
	int m = Convert::ToInt32(numericUpDown2->Text);

	//Граничные условия Задачи
	double a = -1, b = 1;
	double c = -1, d = 1;

	//  Шаги
	double h = (b - a) / n;
	double k = (d - c) / m;

	double w = Convert::ToDouble(numericUpDown3->Text);
	if (checkBox1->Checked) {
		double temp1, temp2;
		temp1 = pow(sin(M_PI / (2.0 * n)), 2);
		temp2 = pow(sin(M_PI / (2.0 * m)), 2);
		temp2 = 2 * pow(k, 2) * temp1 + 2 * pow(h, 2) * temp2;
		temp1 = pow(h, 2) + pow(k, 2);
		temp2 /= temp1;
		w = 2 / (1 + sqrt(temp2 * (2 - temp2))); //Оптимальный параметр
	}


	// Параметры шаблона сетки
	double param_x = 1 / pow(h, 2);
	double param_y = 1 / pow(k, 2);
	double A = -2 * (param_x + param_y);

	// узлы сетки
	vector<double> x(n + 1);
	vector<double> y(m + 1);

	for (int i = 0; i < x.size(); i++) {
		x[i] = a + i * h;
	}

	for (int i = 0; i < y.size(); i++) {
		y[i] = c + i * k;
	}

	vector <vector <double>> V(m + 1);
	for (int i = 0; i < m + 1; i++) {
		V[i] = vector <double>(n + 1, 0);
	}


	for (int i = 0; i < m + 1; i++) {
		V[i][0] = Mu(-1, y[i]);
	}

	for (int i = 0; i < m + 1; i++) {
		V[i][n] = Mu(1, y[i]);
	}

	for (int i = 1; i < n; i++) {
		V[0][i] = Mu(x[i], -1);
	}

	for (int i = 1; i < n; i++) {
		V[m][i] = Mu(x[i], 1);
	}


	vector < vector <double>> f_laplas(m + 1);
	for (int i = 0; i < m + 1; i++) {
		f_laplas[i] = vector <double>(n + 1, 0);
	}

	for (int i = 1; i < m; i++) {
		for (int j = 1; j < n; j++) {
			f_laplas[i][j] = Laplas_osn(x[j], y[i]);
		}
	}

	double start_time = clock();
	//Метод верхней релаксации
	int Nmax = Convert::ToInt32(numericUpDown4->Text); // Максимальное число итераций
	int numStep = 0; // Номер итерации
	double eps = Convert::ToDouble(numericUpDown5->Text); // Заданная точность
	double eps_max = 0.0; // текущее значение точности
	double eps_cur = 0.0; // для подсчета текущего значения точности
	double v_old; // старое значение комп вект x
	double v_new; // новое значение комп вект x
	progressBar1->Maximum = Nmax;
	label23->Visible = true;
	label23->Text = "Основная сетка";

	while (true) {
		eps_max = 0.0;
		for (int i = 1; i < m; i++) {
			for (int j = 1; j < n; j++) {
				v_old = V[i][j];
				v_new = A * v_old + param_x * (V[i][j - 1] + V[i][j + 1]) + param_y * (V[i - 1][j] + V[i + 1][j]);
				V[i][j] = v_old - w * (v_new + f_laplas[i][j]) / A;
				eps_cur = fabs(V[i][j] - v_old);
				if (eps_cur > eps_max) {
					eps_max = eps_cur;
				}
			}
		}
		numStep++;
		progressBar1->Value++;
		if ((eps_max < eps) || (numStep >= Nmax)) {
			break;
		}
	}
	start_time = (clock() - start_time)/1000.0;
	if (progressBar1->Value < Nmax) {
		progressBar1->Maximum = numStep;
	}

	// Расчёт вектора невязки и его норма
	//Вектор невязки
	vector <vector <double>> R(m + 1);
	for (int i = 0; i < m + 1; i++) {
		R[i] = vector <double>(n + 1, 0);
	}


	double Nev = 0.0, temp = 0.0;
	for (int i = 1; i < m; i++) {
		for (int j = 1; j < n; j++) {
			R[i][j] = A * V[i][j] + param_x * (V[i][j - 1] + V[i][j + 1]) + param_y * (V[i - 1][j] + V[i + 1][j]) + f_laplas[i][j];
			temp = fabs(R[i][j]);
			if (temp > Nev) {
				Nev = temp;
			}
		}
	}

	//Погрешность решения основной задачи------------------
	int n_2 = 2 * n;
	int m_2 = 2 * m;
	double h_2 = (b - a) / n_2;
	double k_2 = (d - c) / m_2;
	double param_x_2 = 1 / pow(h_2, 2);
	double param_y_2 = 1 / pow(k_2, 2);
	double A_2 = -2 * (param_x_2 + param_y_2);
	double temp1, temp2;
	temp1 = pow(sin(M_PI / (2.0 * n_2)), 2);
	temp2 = pow(sin(M_PI / (2.0 * m_2)), 2);
	temp2 = 2 * pow(k_2, 2) * temp1 + 2 * pow(h_2, 2) * temp2;
	temp1 = pow(h_2, 2) + pow(k_2, 2);
	temp2 /= temp1;
	double w_2 = 2 / (1 + sqrt(temp2 * (2 - temp2))); 


	// узлы вспомогательной сетки
	vector<double> x_2(n_2 + 1);
	vector<double> y_2(m_2 + 1);

	for (int i = 0; i < x_2.size(); i++) {
		x_2[i] = a + i * h_2;
	}

	for (int i = 0; i < y_2.size(); i++) {
		y_2[i] = c + i * k_2;
	}

	vector <vector <double>> V_2(m_2 + 1);
	for (int i = 0; i < m_2 + 1; i++) {
		V_2[i] = vector <double>(n_2 + 1, 0);
	}

	for (int i = 0; i < m_2 + 1; i++) {
		V_2[i][0] = Mu1(y_2[i]);
	}

	for (int i = 0; i < m_2 + 1; i++) {
		V_2[i][n_2] = Mu2(y_2[i]);
	}

	for (int i = 1; i < n_2; i++) {
		V_2[0][i] = Mu3(x_2[i]);
	}

	for (int i = 1; i < n_2; i++) {
		V_2[m_2][i] = Mu4(x_2[i]);
	}


	vector < vector <double>> f_laplas_2(m_2 + 1);
	for (int i = 0; i < m_2 + 1; i++) {
		f_laplas_2[i] = vector <double>(n_2 + 1, 0);
	}

	for (int i = 1; i < m_2; i++) {
		for (int j = 1; j < n_2; j++) {
			f_laplas_2[i][j] = Laplas_osn(x_2[j], y_2[i]);
		}
	}

	double start_time2 = clock();

	int Nmax_2 = Convert::ToInt32(numericUpDown6->Text);
	int numStep_2 = 0;
	double eps_2 = Convert::ToDouble(numericUpDown7->Text); 
	double eps_max_2 = 0.0; 
	double eps_cur_2 = 0.0; 
	double v_old_2;
	double v_new_2;  
	progressBar1->Value = 0;
	progressBar1->Maximum = Nmax_2;
	label23->Text = "Вспомогательная сетка";

	while (true) {
		eps_max_2 = 0.0;
		for (int i = 1; i < m_2; i++) {
			for (int j = 1; j < n_2; j++) {
				v_old_2 = V_2[i][j];
				v_new_2 = A_2 * v_old_2 + param_x_2 * (V_2[i][j - 1] + V_2[i][j + 1]) + param_y_2 * (V_2[i - 1][j] + V_2[i + 1][j]);
				V_2[i][j] = v_old_2 - w_2 * (v_new_2 + f_laplas_2[i][j]) / A_2;
				eps_cur_2 = fabs(V_2[i][j] - v_old_2);
				if (eps_cur_2 > eps_max_2) {
					eps_max_2 = eps_cur_2;
				}
			}
		}
		numStep_2++;
		progressBar1->Value++;
		if ((eps_max_2 < eps_2) || (numStep_2 >= Nmax_2)) {
			break;
		}
	}
	
	start_time2 = (clock() - start_time2) / 1000.0;
	if (progressBar1->Value < Nmax_2) {
		progressBar1->Maximum = numStep_2;
	}
	//Погрешность решения основной задачи
	double max = 0.0;
	int max_x = 0, max_y = 0;
	for (int i = 1; i < m; i++) {
		for (int j = 1; j < n; j++) {
			temp = fabs(V[i][j] - V_2[2 * i][2 * j]);
			if (temp > max) {
				max = temp;
				max_x = j;
				max_y = i;
			}
		}
	}

	//Невязка вспомогательной сетки

	vector <vector <double>> R_2(m_2 + 1);
	for (int i = 0; i < m_2 + 1; i++) {
		R_2[i] = vector <double>(n_2 + 1, 0);
	}


	double Nev_2 = 0.0, temp_2 = 0.0;
	for (int i = 1; i < m_2; i++) {
		for (int j = 1; j < n_2; j++) {
			R_2[i][j] = A_2 * V_2[i][j] + param_x_2 * (V_2[i][j - 1] + V_2[i][j + 1]) + param_y_2 * (V_2[i - 1][j] + V_2[i + 1][j]) + f_laplas_2[i][j];
			temp_2 = fabs(R_2[i][j]);
			if (temp_2 > Nev_2) {
				Nev_2 = temp_2;
			}
		}
	}

	
	//Заполнение таблицы численным решением
	if (n < 700) {
		dataGridView1->RowCount = m + 2;
		dataGridView1->ColumnCount = n + 3;
		
		//  Уберем заголовки строк
		dataGridView1->RowHeadersVisible = false;
		
		//  Меняем цвет строки и столбца, где лежат исходные x и у
		dataGridView1->RowHeadersDefaultCellStyle->BackColor = Color::Turquoise;
		dataGridView1->ColumnHeadersDefaultCellStyle->BackColor = Color::Turquoise;
		dataGridView1->Rows[0]->DefaultCellStyle->BackColor = Color::Turquoise;
		for (int i = 1; i < m + 2; i++) {
			dataGridView1->Rows[i]->Cells[1]->Style->BackColor = Color::Turquoise;
		}
		dataGridView1->Rows[0]->Cells[0]->Style->BackColor = Color::White;
		dataGridView1->RowHeadersDefaultCellStyle->BackColor = Color::Turquoise;
		dataGridView1->ColumnHeadersDefaultCellStyle->BackColor = Color::Turquoise;
		
		//  Заполняем заголовки таблицы
		for (int i = n, col = 2; i >= 0; i--, col++) {
			dataGridView1->Columns[col]->HeaderText = Convert::ToString(n - i);
			dataGridView1->Rows[0]->Cells[i + 2]->Value = ceil(x[i]*1000)/1000;
		}
		
		for (int i = m, row = 1; i >= 0; i--, row++) {
			dataGridView1->Rows[row]->Cells[0]->Value = i;
			dataGridView1->Rows[row]->Cells[1]->Value = ceil(y[i]*1000)/1000;
		}
		
		dataGridView1->Rows[0]->Cells[0]->Value = Convert::ToString("j");
		dataGridView1->Columns[1]->HeaderText = Convert::ToString("i");
		dataGridView1->Rows[0]->Cells[1]->Value = Convert::ToString("Y / X");

		
		for (int i = m + 1, k = 0; i > 0; i--, k++) {
			for (int j = 2, p = 0; j < n + 3; j++, p++) {
				dataGridView1->Rows[i]->Cells[j]->Value = ceil(V[k][p]*1000)/1000;
			}
		}
	}
	

	// Вывод результатов основной задачи

	label8->Visible = true;
	label9->Visible = true;
	label10->Visible = true;
	label11->Visible = true;
	label12->Visible = true;
	label13->Visible = true;
	label19->Visible = true;

	label8->Text = "Количество проведённых итераций = " + Convert::ToString(numStep);
	label9->Text = "Достигнутая точность = " + Convert::ToString(eps_max);
	label10->Text = "Точность задачи = " + Convert::ToString(max);
	label11->Text = "Максимальное отклонение в узле: (" + Convert::ToString(max_x) + ", " + Convert::ToString(max_y) + ")";
	label12->Text = "Норма невязки = " + Convert::ToString(Nev);
	label13->Text = "Значение оптимального параметра: " + Convert::ToString(w);
	label19->Text = "Время выполения = " + Convert::ToString(start_time);

	label14->Visible = true;
	label15->Visible = true;
	label16->Visible = true;
	label17->Visible = true;
	label20->Visible = true;


	label14->Text = "Кол-во итераций на вспомогательнй сетке = " + Convert::ToString(numStep_2);
	label15->Text = "Достигнутая точность на вспомогательной сетке = " + Convert::ToString(eps_max_2);
	label16->Text = "Значение параметра на вспомогательной сетке = " + Convert::ToString(w_2);
	label17->Text = "Невязка вспомогательной сетки = " + Convert::ToString(Nev_2);
	label20->Text = "Время расчёта вспомогательной сетки = " + Convert::ToString(start_time2);

}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void progressBar1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
