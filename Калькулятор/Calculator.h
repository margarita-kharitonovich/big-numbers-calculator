#pragma once
#include "BigDigits.h"
#include <iostream>
#include <iomanip>
#include <msclr/marshal_cppstd.h>

namespace Êàëüêóëÿòîğ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Ñâîäêà äëÿ Calculator
	/// </summary>
	
	public ref class Calculator : public System::Windows::Forms::Form
	{
	public:
		Calculator(void)
		{
			InitializeComponent();
			panel1->Hide();
			panel2->Hide();
			panel3->Hide();
		};

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~Calculator()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
		long long precision;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel6;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TextBox^ textBox3;

	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::ToolStripMenuItem^ íàõîæäåíèåÎñòàòêàToolStripMenuItem1;

	private: System::Windows::Forms::ToolStripMenuItem^ íàõîæäåíèåÔàêòîğèàëàToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ìåíşToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ îïåğàöèèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñëîæåíèåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âû÷èòàíèåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ óìíîæåíèåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ äåëåíèåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ íàõîæäåíèåÎñòàòêàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âîçâåäåíèåÂÑòåïåíüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ çàãğóçèòüÑÔàéëàToolStripMenuItem;



	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::ToolStripMenuItem^ ñîõğàíèòüÂÔàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñïğàâêàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ îÏğîãğàììåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ğóêîâîäñòâîÏîëüçîâàòåëÿToolStripMenuItem;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Calculator::typeid));
			this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ìåíşToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îïåğàöèèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñëîæåíèåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âû÷èòàíèåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->óìíîæåíèåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->äåëåíèåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->íàõîæäåíèåÎñòàòêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âîçâåäåíèåÂÑòåïåíüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çàãğóçèòüÑÔàéëàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîõğàíèòüÂÔàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñïğàâêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îÏğîãğàììåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ğóêîâîäñòâîÏîëüçîâàòåëÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->tableLayoutPanel6->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel6
			// 
			this->tableLayoutPanel6->BackColor = System::Drawing::Color::Transparent;
			this->tableLayoutPanel6->ColumnCount = 1;
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel6->Controls->Add(this->flowLayoutPanel1, 0, 6);
			this->tableLayoutPanel6->Controls->Add(this->textBox1, 0, 1);
			this->tableLayoutPanel6->Controls->Add(this->comboBox1, 0, 5);
			this->tableLayoutPanel6->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel6->Controls->Add(this->textBox2, 0, 3);
			this->tableLayoutPanel6->Controls->Add(this->label2, 0, 2);
			this->tableLayoutPanel6->Controls->Add(this->menuStrip1, 0, 7);
			this->tableLayoutPanel6->Controls->Add(this->label3, 0, 4);
			this->tableLayoutPanel6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel6->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
			this->tableLayoutPanel6->RowCount = 8;
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 25)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 25)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 53)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 69)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 74)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 36)));
			this->tableLayoutPanel6->Size = System::Drawing::Size(1003, 603);
			this->tableLayoutPanel6->TabIndex = 15;
			this->tableLayoutPanel6->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Calculator::tableLayoutPanel6_Paint);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->flowLayoutPanel1->AutoSize = true;
			this->flowLayoutPanel1->Controls->Add(this->button2);
			this->flowLayoutPanel1->Controls->Add(this->button1);
			this->flowLayoutPanel1->Location = System::Drawing::Point(269, 495);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(464, 49);
			this->flowLayoutPanel1->TabIndex = 15;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(3, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(226, 43);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Ğàññ÷èòàòü";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Calculator::button2_Click);
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(235, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(226, 43);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Î÷èñòèòü";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Calculator::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Verdana", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(3, 28);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(997, 154);
			this->textBox1->TabIndex = 10;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Calculator::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Calculator::textBox1_KeyPress);
			// 
			// comboBox1
			// 
			this->comboBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Verdana", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"+ (ñëîæåíèå)", L"- (âû÷èòàíèå)", L"* (óìíîæåíèå)",
					L"/ (äåëåíèå)", L"% (íàõîæäåíèå îñòàòêà îò äåëåíèÿ)", L"^ Âîçâåäåíèå â ñòåïåíü", L"Íàõîæäåíèå ôàêòîğèàëà"
			});
			this->comboBox1->Location = System::Drawing::Point(267, 439);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(469, 36);
			this->comboBox1->TabIndex = 5;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Calculator::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(357, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(289, 25);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Ââåäèòå ïåğâîå ÷èñëî";
			this->label1->Click += gcnew System::EventHandler(this, &Calculator::label1_Click_1);
			// 
			// textBox2
			// 
			this->textBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Verdana", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(3, 213);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox2->Size = System::Drawing::Size(997, 154);
			this->textBox2->TabIndex = 3;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Calculator::textBox2_TextChanged);
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Calculator::textBox2_KeyPress);
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(358, 185);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(287, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Ââåäèòå âòîğîå ÷èñëî";
			this->label2->Click += gcnew System::EventHandler(this, &Calculator::label2_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::White;
			this->menuStrip1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Verdana", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ìåíşToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 566);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1003, 37);
			this->menuStrip1->TabIndex = 16;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Calculator::menuStrip1_ItemClicked);
			// 
			// ìåíşToolStripMenuItem
			// 
			this->ìåíşToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->îïåğàöèèToolStripMenuItem,
					this->çàãğóçèòüÑÔàéëàToolStripMenuItem, this->ñîõğàíèòüÂÔàéëToolStripMenuItem, this->ñïğàâêàToolStripMenuItem
			});
			this->ìåíşToolStripMenuItem->Name = L"ìåíşToolStripMenuItem";
			this->ìåíşToolStripMenuItem->Size = System::Drawing::Size(96, 33);
			this->ìåíşToolStripMenuItem->Text = L"Ìåíş";
			this->ìåíşToolStripMenuItem->Click += gcnew System::EventHandler(this, &Calculator::ìåíşToolStripMenuItem_Click);
			// 
			// îïåğàöèèToolStripMenuItem
			// 
			this->îïåğàöèèToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->ñëîæåíèåToolStripMenuItem,
					this->âû÷èòàíèåToolStripMenuItem, this->óìíîæåíèåToolStripMenuItem, this->äåëåíèåToolStripMenuItem, this->íàõîæäåíèåÎñòàòêàToolStripMenuItem,
					this->âîçâåäåíèåÂÑòåïåíüToolStripMenuItem, this->toolStripMenuItem2
			});
			this->îïåğàöèèToolStripMenuItem->Name = L"îïåğàöèèToolStripMenuItem";
			this->îïåğàöèèToolStripMenuItem->Size = System::Drawing::Size(345, 34);
			this->îïåğàöèèToolStripMenuItem->Text = L"Îïåğàöèè";
			// 
			// ñëîæåíèåToolStripMenuItem
			// 
			this->ñëîæåíèåToolStripMenuItem->Name = L"ñëîæåíèåToolStripMenuItem";
			this->ñëîæåíèåToolStripMenuItem->Size = System::Drawing::Size(500, 34);
			this->ñëîæåíèåToolStripMenuItem->Text = L"Ñëîæåíèå";
			this->ñëîæåíèåToolStripMenuItem->Click += gcnew System::EventHandler(this, &Calculator::ñëîæåíèåToolStripMenuItem_Click);
			// 
			// âû÷èòàíèåToolStripMenuItem
			// 
			this->âû÷èòàíèåToolStripMenuItem->Name = L"âû÷èòàíèåToolStripMenuItem";
			this->âû÷èòàíèåToolStripMenuItem->Size = System::Drawing::Size(500, 34);
			this->âû÷èòàíèåToolStripMenuItem->Text = L"Âû÷èòàíèå";
			this->âû÷èòàíèåToolStripMenuItem->Click += gcnew System::EventHandler(this, &Calculator::âû÷èòàíèåToolStripMenuItem_Click);
			// 
			// óìíîæåíèåToolStripMenuItem
			// 
			this->óìíîæåíèåToolStripMenuItem->Name = L"óìíîæåíèåToolStripMenuItem";
			this->óìíîæåíèåToolStripMenuItem->Size = System::Drawing::Size(500, 34);
			this->óìíîæåíèåToolStripMenuItem->Text = L"Óìíîæåíèå";
			this->óìíîæåíèåToolStripMenuItem->Click += gcnew System::EventHandler(this, &Calculator::óìíîæåíèåToolStripMenuItem_Click);
			// 
			// äåëåíèåToolStripMenuItem
			// 
			this->äåëåíèåToolStripMenuItem->Name = L"äåëåíèåToolStripMenuItem";
			this->äåëåíèåToolStripMenuItem->Size = System::Drawing::Size(500, 34);
			this->äåëåíèåToolStripMenuItem->Text = L"Äåëåíèå";
			this->äåëåíèåToolStripMenuItem->Click += gcnew System::EventHandler(this, &Calculator::äåëåíèåToolStripMenuItem_Click);
			// 
			// íàõîæäåíèåÎñòàòêàToolStripMenuItem
			// 
			this->íàõîæäåíèåÎñòàòêàToolStripMenuItem->Name = L"íàõîæäåíèåÎñòàòêàToolStripMenuItem";
			this->íàõîæäåíèåÎñòàòêàToolStripMenuItem->Size = System::Drawing::Size(500, 34);
			this->íàõîæäåíèåÎñòàòêàToolStripMenuItem->Text = L"Íàõîæäåíèå îñòàòêà îò äåëåíèÿ";
			this->íàõîæäåíèåÎñòàòêàToolStripMenuItem->Click += gcnew System::EventHandler(this, &Calculator::íàõîæäåíèåÎñòàòêàToolStripMenuItem_Click);
			// 
			// âîçâåäåíèåÂÑòåïåíüToolStripMenuItem
			// 
			this->âîçâåäåíèåÂÑòåïåíüToolStripMenuItem->Name = L"âîçâåäåíèåÂÑòåïåíüToolStripMenuItem";
			this->âîçâåäåíèåÂÑòåïåíüToolStripMenuItem->Size = System::Drawing::Size(500, 34);
			this->âîçâåäåíèåÂÑòåïåíüToolStripMenuItem->Text = L"Âîçâåäåíèå â ñòåïåíü";
			this->âîçâåäåíèåÂÑòåïåíüToolStripMenuItem->Click += gcnew System::EventHandler(this, &Calculator::âîçâåäåíèåÂÑòåïåíüToolStripMenuItem_Click);
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(500, 34);
			this->toolStripMenuItem2->Text = L"Íàõîæäåíèå ôàêòîğèàëà";
			this->toolStripMenuItem2->Click += gcnew System::EventHandler(this, &Calculator::toolStripMenuItem2_Click);
			// 
			// çàãğóçèòüÑÔàéëàToolStripMenuItem
			// 
			this->çàãğóçèòüÑÔàéëàToolStripMenuItem->Name = L"çàãğóçèòüÑÔàéëàToolStripMenuItem";
			this->çàãğóçèòüÑÔàéëàToolStripMenuItem->Size = System::Drawing::Size(345, 34);
			this->çàãğóçèòüÑÔàéëàToolStripMenuItem->Text = L"Çàãğóçèòü èç ôàéëà";
			this->çàãğóçèòüÑÔàéëàToolStripMenuItem->Click += gcnew System::EventHandler(this, &Calculator::çàãğóçèòüÑÔàéëàToolStripMenuItem_Click);
			// 
			// ñîõğàíèòüÂÔàéëToolStripMenuItem
			// 
			this->ñîõğàíèòüÂÔàéëToolStripMenuItem->Name = L"ñîõğàíèòüÂÔàéëToolStripMenuItem";
			this->ñîõğàíèòüÂÔàéëToolStripMenuItem->Size = System::Drawing::Size(345, 34);
			this->ñîõğàíèòüÂÔàéëToolStripMenuItem->Text = L"Ñîõğàíèòü â ôàéë";
			this->ñîõğàíèòüÂÔàéëToolStripMenuItem->Click += gcnew System::EventHandler(this, &Calculator::ñîõğàíèòüÂÔàéëToolStripMenuItem_Click);
			// 
			// ñïğàâêàToolStripMenuItem
			// 
			this->ñïğàâêàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->îÏğîãğàììåToolStripMenuItem,
					this->ğóêîâîäñòâîÏîëüçîâàòåëÿToolStripMenuItem
			});
			this->ñïğàâêàToolStripMenuItem->Name = L"ñïğàâêàToolStripMenuItem";
			this->ñïğàâêàToolStripMenuItem->Size = System::Drawing::Size(345, 34);
			this->ñïğàâêàToolStripMenuItem->Text = L"Ñïğàâêà";
			// 
			// îÏğîãğàììåToolStripMenuItem
			// 
			this->îÏğîãğàììåToolStripMenuItem->Name = L"îÏğîãğàììåToolStripMenuItem";
			this->îÏğîãğàììåToolStripMenuItem->Size = System::Drawing::Size(433, 34);
			this->îÏğîãğàììåToolStripMenuItem->Text = L"Î ïğîãğàììå";
			this->îÏğîãğàììåToolStripMenuItem->Click += gcnew System::EventHandler(this, &Calculator::îÏğîãğàììåToolStripMenuItem_Click);
			// 
			// ğóêîâîäñòâîÏîëüçîâàòåëÿToolStripMenuItem
			// 
			this->ğóêîâîäñòâîÏîëüçîâàòåëÿToolStripMenuItem->Name = L"ğóêîâîäñòâîÏîëüçîâàòåëÿToolStripMenuItem";
			this->ğóêîâîäñòâîÏîëüçîâàòåëÿToolStripMenuItem->Size = System::Drawing::Size(433, 34);
			this->ğóêîâîäñòâîÏîëüçîâàòåëÿToolStripMenuItem->Text = L"Ğóêîâîäñòâî ïîëüçîâàòåëÿ";
			this->ğóêîâîäñòâîÏîëüçîâàòåëÿToolStripMenuItem->Click += gcnew System::EventHandler(this, &Calculator::ğóêîâîäñòâîÏîëüçîâàòåëÿToolStripMenuItem_Click);
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Verdana", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(259, 394);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(484, 29);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Âûáåğèòå àğèôìåòè÷åñêóş îïåğàöèş";
			this->label3->Click += gcnew System::EventHandler(this, &Calculator::label3_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->tableLayoutPanel1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Font = (gcnew System::Drawing::Font(L"Verdana", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1003, 603);
			this->panel1->TabIndex = 16;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Calculator::panel1_Paint_1);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->tableLayoutPanel2);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Font = (gcnew System::Drawing::Font(L"Verdana", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1003, 603);
			this->panel2->TabIndex = 17;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel2->Controls->Add(this->textBox4, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->button4, 0, 1);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 2;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 53)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(1003, 603);
			this->tableLayoutPanel2->TabIndex = 0;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::LightSkyBlue;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Verdana", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->HideSelection = false;
			this->textBox4->Location = System::Drawing::Point(3, 3);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBox4->Size = System::Drawing::Size(997, 544);
			this->textBox4->TabIndex = 18;
			this->textBox4->Text = resources->GetString(L"textBox4.Text");
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Calculator::textBox4_TextChanged);
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(774, 555);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(226, 43);
			this->button4->TabIndex = 17;
			this->button4->Text = L"Çàêğûòü";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Calculator::button4_Click_1);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->Controls->Add(this->button3, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->textBox3, 0, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 53)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1003, 603);
			this->tableLayoutPanel1->TabIndex = 0;
			this->tableLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Calculator::tableLayoutPanel1_Paint_2);
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(774, 555);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(226, 43);
			this->button3->TabIndex = 17;
			this->button3->Text = L"Çàêğûòü";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Calculator::button3_Click_1);
			// 
			// textBox3
			// 
			this->textBox3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox3->Location = System::Drawing::Point(3, 3);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox3->Size = System::Drawing::Size(997, 544);
			this->textBox3->TabIndex = 0;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Calculator::textBox3_TextChanged);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->Filter = L"(*.txt)|*.txt";
			this->openFileDialog1->InitialDirectory = L"D:\\\\";
			// 
			// panel3
			// 
			this->panel3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->button5);
			this->panel3->Controls->Add(this->textBox5);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Location = System::Drawing::Point(301, 201);
			this->panel3->MaximumSize = System::Drawing::Size(400, 200);
			this->panel3->MinimumSize = System::Drawing::Size(400, 200);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(400, 200);
			this->panel3->TabIndex = 17;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Calculator::panel3_Paint);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::White;
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(332, 152);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(61, 37);
			this->button5->TabIndex = 2;
			this->button5->Text = L"Îê";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Calculator::button5_Click_1);
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Verdana", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(8, 89);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(385, 34);
			this->textBox5->TabIndex = 1;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Calculator::textBox5_TextChanged);
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Calculator::textBox5_KeyPress);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Verdana", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(5, 55);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(395, 26);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Ââåäèòå òî÷íîñòü ïîñëå çàïÿòîé:";
			this->label4->Click += gcnew System::EventHandler(this, &Calculator::label4_Click_1);
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->Filter = L"(*.txt)|*.txt";
			// 
			// Calculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSkyBlue;
			this->ClientSize = System::Drawing::Size(1003, 603);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->tableLayoutPanel6);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MinimumSize = System::Drawing::Size(500, 500);
			this->Name = L"Calculator";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &Calculator::Calculator_Load);
			this->tableLayoutPanel6->ResumeLayout(false);
			this->tableLayoutPanel6->PerformLayout();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Calculator_Load(System::Object^ sender, System::EventArgs^ e) {
}

bool Êàëüêóëÿòîğ::Calculator::Protect(const std::string& str);

// Ñëîæåíèå
void Addition(string str1, string str2);

// Âû÷èòàíèå
void Subtraction(string str1, string str2);

// Óìíîæåíèå
void Multiplication(string str1, string str2);

// Äåëåíèå
void Division(string str1, string str2);

// Íàõîæäåíèå îñòàòêà
void Remainder(string str1, string str2);

// Âîçâåäåíèå â ñòåïåíü
void Exponentiation(string str1, string str2);

// Íàõîæäåíèå ôàêòîğèàëà
void Factorial(string str1);

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);

private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tableLayoutPanel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void tableLayoutPanel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void tableLayoutPanel5_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tableLayoutPanel1_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void tableLayoutPanel6_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void tableLayoutPanel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void tableLayoutPanel1_Paint_2(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e);

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
}
private: System::Void ñëîæåíèåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void âû÷èòàíèåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void óìíîæåíèåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void äåëåíèåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void íàõîæäåíèåÎñòàòêàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void âîçâåäåíèåÂÑòåïåíüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void toolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void çàãğóçèòüÑÔàéëàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e);

private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);

private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);

private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label4_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);

private: System::Void button5_Click_1(System::Object^ sender, System::EventArgs^ e);

private: System::Void ìåíşToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ñïğàâêàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ñîõğàíèòüÂÔàéëToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void îÏğîãğàììåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void ğóêîâîäñòâîÏîëüçîâàòåëÿToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
};
}
