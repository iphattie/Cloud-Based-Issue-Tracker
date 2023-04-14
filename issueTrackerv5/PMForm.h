#pragma once
#include "DatabaseClass.h"
namespace IssueTrackerv5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PMForm
	/// </summary>
	public ref class PMForm : public System::Windows::Forms::Form
	{
	public:
		DB db;
		PMForm(void)
		{
			InitializeComponent();
			PMDatabaseConfirmation();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PMForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ projectmanager_label;
	protected:

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ createIssue_button;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ listIssues_button;

	private: System::Windows::Forms::Label^ PM_database_connection_label;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ description_textbox;





	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TabControl^ PM_tabcontrol;

	private: System::Windows::Forms::TabPage^ createIssue_tab;
	private: System::Windows::Forms::TabPage^ issueList_tab;






	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ issueTitle_textbox;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label7;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ addIssue_button;
	private: System::Windows::Forms::Button^ clear_button;
	private: System::Windows::Forms::DateTimePicker^ IssueDatePicker;
	private: System::Windows::Forms::ComboBox^ issueStatus_combobox;

	private: System::Windows::Forms::ComboBox^ issuePriority_combobox;

	private: System::Windows::Forms::ComboBox^ issueType_combobox;


	private: System::Windows::Forms::ComboBox^ assignTo_combobox;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox11;






	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->projectmanager_label = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->listIssues_button = (gcnew System::Windows::Forms::Button());
			this->createIssue_button = (gcnew System::Windows::Forms::Button());
			this->PM_database_connection_label = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->issueStatus_combobox = (gcnew System::Windows::Forms::ComboBox());
			this->issuePriority_combobox = (gcnew System::Windows::Forms::ComboBox());
			this->issueType_combobox = (gcnew System::Windows::Forms::ComboBox());
			this->assignTo_combobox = (gcnew System::Windows::Forms::ComboBox());
			this->IssueDatePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->clear_button = (gcnew System::Windows::Forms::Button());
			this->addIssue_button = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->issueTitle_textbox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->description_textbox = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->PM_tabcontrol = (gcnew System::Windows::Forms::TabControl());
			this->createIssue_tab = (gcnew System::Windows::Forms::TabPage());
			this->issueList_tab = (gcnew System::Windows::Forms::TabPage());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->PM_tabcontrol->SuspendLayout();
			this->createIssue_tab->SuspendLayout();
			this->issueList_tab->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// projectmanager_label
			// 
			this->projectmanager_label->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->projectmanager_label->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->projectmanager_label->Location = System::Drawing::Point(12, 9);
			this->projectmanager_label->Name = L"projectmanager_label";
			this->projectmanager_label->Size = System::Drawing::Size(232, 30);
			this->projectmanager_label->TabIndex = 0;
			this->projectmanager_label->Text = L"Project Manger";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Black;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->listIssues_button);
			this->panel1->Controls->Add(this->createIssue_button);
			this->panel1->Location = System::Drawing::Point(12, 42);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(960, 51);
			this->panel1->TabIndex = 1;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(525, 3);
			this->button3->Name = L"button3";
			this->button3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button3->Size = System::Drawing::Size(168, 41);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Create Issue";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(351, 3);
			this->button2->Name = L"button2";
			this->button2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button2->Size = System::Drawing::Size(168, 41);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Create Issue";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// listIssues_button
			// 
			this->listIssues_button->BackColor = System::Drawing::Color::White;
			this->listIssues_button->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->listIssues_button->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listIssues_button->Location = System::Drawing::Point(177, 3);
			this->listIssues_button->Name = L"listIssues_button";
			this->listIssues_button->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->listIssues_button->Size = System::Drawing::Size(168, 41);
			this->listIssues_button->TabIndex = 1;
			this->listIssues_button->Text = L"List Issues";
			this->listIssues_button->UseVisualStyleBackColor = false;
			this->listIssues_button->Click += gcnew System::EventHandler(this, &PMForm::listIssues_button_Click);
			// 
			// createIssue_button
			// 
			this->createIssue_button->BackColor = System::Drawing::Color::White;
			this->createIssue_button->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->createIssue_button->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->createIssue_button->Location = System::Drawing::Point(3, 3);
			this->createIssue_button->Name = L"createIssue_button";
			this->createIssue_button->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->createIssue_button->Size = System::Drawing::Size(168, 41);
			this->createIssue_button->TabIndex = 0;
			this->createIssue_button->Text = L"Create Issue";
			this->createIssue_button->UseVisualStyleBackColor = false;
			this->createIssue_button->Click += gcnew System::EventHandler(this, &PMForm::createIssue_button_Click);
			// 
			// PM_database_connection_label
			// 
			this->PM_database_connection_label->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PM_database_connection_label->Location = System::Drawing::Point(842, 15);
			this->PM_database_connection_label->Name = L"PM_database_connection_label";
			this->PM_database_connection_label->Size = System::Drawing::Size(130, 20);
			this->PM_database_connection_label->TabIndex = 2;
			this->PM_database_connection_label->Text = L"Database Connected";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Black;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->issueStatus_combobox);
			this->panel2->Controls->Add(this->issuePriority_combobox);
			this->panel2->Controls->Add(this->issueType_combobox);
			this->panel2->Controls->Add(this->assignTo_combobox);
			this->panel2->Controls->Add(this->IssueDatePicker);
			this->panel2->Controls->Add(this->clear_button);
			this->panel2->Controls->Add(this->addIssue_button);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->issueTitle_textbox);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->description_textbox);
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(946, 518);
			this->panel2->TabIndex = 4;
			// 
			// issueStatus_combobox
			// 
			this->issueStatus_combobox->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->issueStatus_combobox->FormattingEnabled = true;
			this->issueStatus_combobox->Location = System::Drawing::Point(626, 76);
			this->issueStatus_combobox->Name = L"issueStatus_combobox";
			this->issueStatus_combobox->Size = System::Drawing::Size(308, 30);
			this->issueStatus_combobox->TabIndex = 21;
			// 
			// issuePriority_combobox
			// 
			this->issuePriority_combobox->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->issuePriority_combobox->FormattingEnabled = true;
			this->issuePriority_combobox->Location = System::Drawing::Point(626, 40);
			this->issuePriority_combobox->Name = L"issuePriority_combobox";
			this->issuePriority_combobox->Size = System::Drawing::Size(308, 30);
			this->issuePriority_combobox->TabIndex = 20;
			// 
			// issueType_combobox
			// 
			this->issueType_combobox->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->issueType_combobox->FormattingEnabled = true;
			this->issueType_combobox->Location = System::Drawing::Point(626, 5);
			this->issueType_combobox->Name = L"issueType_combobox";
			this->issueType_combobox->Size = System::Drawing::Size(308, 30);
			this->issueType_combobox->TabIndex = 19;
			// 
			// assignTo_combobox
			// 
			this->assignTo_combobox->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->assignTo_combobox->FormattingEnabled = true;
			this->assignTo_combobox->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"1", L"2", L"3", L"4", L"5" });
			this->assignTo_combobox->Location = System::Drawing::Point(152, 75);
			this->assignTo_combobox->Name = L"assignTo_combobox";
			this->assignTo_combobox->Size = System::Drawing::Size(308, 30);
			this->assignTo_combobox->TabIndex = 18;
			// 
			// IssueDatePicker
			// 
			this->IssueDatePicker->CustomFormat = L"         dd  / MMMMMMMM / yyyy";
			this->IssueDatePicker->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IssueDatePicker->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->IssueDatePicker->Location = System::Drawing::Point(152, 40);
			this->IssueDatePicker->Name = L"IssueDatePicker";
			this->IssueDatePicker->Size = System::Drawing::Size(308, 29);
			this->IssueDatePicker->TabIndex = 17;
			// 
			// clear_button
			// 
			this->clear_button->BackColor = System::Drawing::Color::White;
			this->clear_button->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->clear_button->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clear_button->Location = System::Drawing::Point(750, 314);
			this->clear_button->Name = L"clear_button";
			this->clear_button->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->clear_button->Size = System::Drawing::Size(184, 78);
			this->clear_button->TabIndex = 16;
			this->clear_button->Text = L"Clear";
			this->clear_button->UseVisualStyleBackColor = false;
			this->clear_button->Click += gcnew System::EventHandler(this, &PMForm::clear_button_Click);
			// 
			// addIssue_button
			// 
			this->addIssue_button->BackColor = System::Drawing::Color::White;
			this->addIssue_button->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->addIssue_button->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addIssue_button->Location = System::Drawing::Point(4, 314);
			this->addIssue_button->Name = L"addIssue_button";
			this->addIssue_button->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->addIssue_button->Size = System::Drawing::Size(184, 78);
			this->addIssue_button->TabIndex = 4;
			this->addIssue_button->Text = L"Add Issue";
			this->addIssue_button->UseVisualStyleBackColor = false;
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(478, 71);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(142, 30);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Issue Status:";
			this->label7->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(478, 36);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(142, 30);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Issue Priority:";
			this->label6->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(478, 1);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(142, 30);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Issue Type:";
			this->label5->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(4, 36);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(142, 30);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Date Created:";
			this->label4->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(4, 71);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(142, 30);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Assign to:";
			this->label3->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// issueTitle_textbox
			// 
			this->issueTitle_textbox->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->issueTitle_textbox->Location = System::Drawing::Point(152, 5);
			this->issueTitle_textbox->Name = L"issueTitle_textbox";
			this->issueTitle_textbox->Size = System::Drawing::Size(308, 29);
			this->issueTitle_textbox->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(4, 1);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(142, 30);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Issue Title:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(4, 120);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(124, 30);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Description:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// description_textbox
			// 
			this->description_textbox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->description_textbox->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->description_textbox->Location = System::Drawing::Point(4, 153);
			this->description_textbox->MaxLength = 255;
			this->description_textbox->Multiline = true;
			this->description_textbox->Name = L"description_textbox";
			this->description_textbox->Size = System::Drawing::Size(930, 155);
			this->description_textbox->TabIndex = 1;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Black;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->PM_tabcontrol);
			this->panel3->Location = System::Drawing::Point(12, 99);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(960, 550);
			this->panel3->TabIndex = 5;
			// 
			// PM_tabcontrol
			// 
			this->PM_tabcontrol->Controls->Add(this->createIssue_tab);
			this->PM_tabcontrol->Controls->Add(this->issueList_tab);
			this->PM_tabcontrol->Location = System::Drawing::Point(3, 3);
			this->PM_tabcontrol->Name = L"PM_tabcontrol";
			this->PM_tabcontrol->SelectedIndex = 0;
			this->PM_tabcontrol->Size = System::Drawing::Size(950, 540);
			this->PM_tabcontrol->SizeMode = System::Windows::Forms::TabSizeMode::Fixed;
			this->PM_tabcontrol->TabIndex = 0;
			// 
			// createIssue_tab
			// 
			this->createIssue_tab->Controls->Add(this->panel2);
			this->createIssue_tab->Location = System::Drawing::Point(4, 22);
			this->createIssue_tab->Name = L"createIssue_tab";
			this->createIssue_tab->Padding = System::Windows::Forms::Padding(3);
			this->createIssue_tab->Size = System::Drawing::Size(942, 514);
			this->createIssue_tab->TabIndex = 0;
			this->createIssue_tab->Text = L"tabPage1";
			// 
			// issueList_tab
			// 
			this->issueList_tab->Controls->Add(this->panel4);
			this->issueList_tab->Location = System::Drawing::Point(4, 22);
			this->issueList_tab->Name = L"issueList_tab";
			this->issueList_tab->Padding = System::Windows::Forms::Padding(3);
			this->issueList_tab->Size = System::Drawing::Size(942, 514);
			this->issueList_tab->TabIndex = 1;
			this->issueList_tab->Text = L"tabPage2";
			this->issueList_tab->UseVisualStyleBackColor = true;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Black;
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel4->Controls->Add(this->label14);
			this->panel4->Controls->Add(this->textBox11);
			this->panel4->Location = System::Drawing::Point(-2, -2);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(946, 518);
			this->panel4->TabIndex = 5;
			// 
			// label14
			// 
			this->label14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(4, 120);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(124, 30);
			this->label14->TabIndex = 2;
			this->label14->Text = L"Description:";
			this->label14->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// textBox11
			// 
			this->textBox11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox11->Location = System::Drawing::Point(4, 153);
			this->textBox11->MaxLength = 255;
			this->textBox11->Multiline = true;
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(930, 155);
			this->textBox11->TabIndex = 1;
			// 
			// PMForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DimGray;
			this->ClientSize = System::Drawing::Size(984, 661);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->PM_database_connection_label);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->projectmanager_label);
			this->MaximumSize = System::Drawing::Size(1000, 700);
			this->MinimumSize = System::Drawing::Size(1000, 700);
			this->Name = L"PMForm";
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->PM_tabcontrol->ResumeLayout(false);
			this->createIssue_tab->ResumeLayout(false);
			this->issueList_tab->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void PMDatabaseConfirmation()
	{
		try
		{
			db.OpenDatabase();
			PM_database_connection_label->Text = "Database Connected";
		}
		catch (Exception^ e)
		{
			PM_database_connection_label->Text = "Failed to connect to Database";
		}
	}
	private: System::Void clear_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			issueTitle_textbox->Text = "";
			assignTo_combobox->Text = "";
			issueType_combobox->Text = "";
			issuePriority_combobox->Text = "";
			issueStatus_combobox->Text = "";
			description_textbox->Text = "";
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message);
		}
	}
	private: System::Void createIssue_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			PM_tabcontrol->SelectTab(createIssue_tab);
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message);
		}
	}
	private: System::Void listIssues_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			PM_tabcontrol->SelectTab(issueList_tab);
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message);
		}
	}
	};
}
