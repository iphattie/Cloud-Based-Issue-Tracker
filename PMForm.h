#pragma once
#include "DatabaseClass.h"
#include "UserHeader.h"
#include "PriorityClass.h"
#include "StatusClass.h"
#include "TypeClass.h"
#include "IssueClass.h"
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
	private:
		DB db;
		PriorityList^ priList = db.returnPriorityList();
		User^ userinfo = db.returnUserInfo();
		StatusList^ statList = db.returnStatusList();
		TypeList^ tyList = db.returnTypeList();
		IssueList^ issList = db.returnIssueList();

	public:
		PMForm(User^ user) //User^ user
		{
			InitializeComponent();
			PMDatabaseConfirmation();
			DisplayFirstLastName(user);
			//DisplayFirstLastName();
			displayIssueComboBox();
			displayPriorityCombobox();
			displayAssignmentCombobox();
			displayStatusComboBox();
			displayTypeComboBox();
			DisplayFullIssueList();
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

	private: System::Windows::Forms::TabPage^ issueEdit_tab;
	private: System::Windows::Forms::TabPage^ removeIssue_tab;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::DataGridView^ editIssue_datagridview;
	private: System::Windows::Forms::TextBox^ edit_issueTitle_textbox;
	private: System::Windows::Forms::Button^ updateIssue_button;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ComboBox^ edit_issueStatus_combobox;
	private: System::Windows::Forms::ComboBox^ edit_issuePriority_combobox;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::ComboBox^ edit_issueType_combobox;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::ComboBox^ edit_assignTo_combobox;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ issueupdated_label;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::ComboBox^ edit_issueID_combobox;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::ComboBox^ comboBox5;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::ComboBox^ comboBox6;
	private: System::Windows::Forms::ComboBox^ comboBox7;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::ComboBox^ comboBox8;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::ComboBox^ comboBox10;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ removeIssue_datagridview;
	private: System::Windows::Forms::TextBox^ edit_issueDescrip_textbox;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ middle_label;
	private: System::Windows::Forms::DataGridView^ issueList_datagridview;
	private: System::Windows::Forms::Label^ bruhlabel;
	private: System::Windows::Forms::Label^ projectmanager_label;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ createTab_button;
	private: System::Windows::Forms::Button^ editTab_button;
	private: System::Windows::Forms::Button^ listTab_button;
	private: System::Windows::Forms::Label^ PM_database_connection_label;
	private: System::Windows::Forms::Button^ removeTab_button;
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
	private: System::Windows::Forms::Label^ usernameRole_label;
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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->projectmanager_label = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->removeTab_button = (gcnew System::Windows::Forms::Button());
			this->editTab_button = (gcnew System::Windows::Forms::Button());
			this->listTab_button = (gcnew System::Windows::Forms::Button());
			this->createTab_button = (gcnew System::Windows::Forms::Button());
			this->PM_database_connection_label = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->middle_label = (gcnew System::Windows::Forms::Label());
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
			this->issueList_datagridview = (gcnew System::Windows::Forms::DataGridView());
			this->issueEdit_tab = (gcnew System::Windows::Forms::TabPage());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->edit_issueID_combobox = (gcnew System::Windows::Forms::ComboBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->issueupdated_label = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->edit_issueStatus_combobox = (gcnew System::Windows::Forms::ComboBox());
			this->edit_issuePriority_combobox = (gcnew System::Windows::Forms::ComboBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->edit_issueType_combobox = (gcnew System::Windows::Forms::ComboBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->edit_assignTo_combobox = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->edit_issueTitle_textbox = (gcnew System::Windows::Forms::TextBox());
			this->updateIssue_button = (gcnew System::Windows::Forms::Button());
			this->editIssue_datagridview = (gcnew System::Windows::Forms::DataGridView());
			this->removeIssue_tab = (gcnew System::Windows::Forms::TabPage());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->comboBox8 = (gcnew System::Windows::Forms::ComboBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->comboBox10 = (gcnew System::Windows::Forms::ComboBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->removeIssue_datagridview = (gcnew System::Windows::Forms::DataGridView());
			this->usernameRole_label = (gcnew System::Windows::Forms::Label());
			this->bruhlabel = (gcnew System::Windows::Forms::Label());
			this->edit_issueDescrip_textbox = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->PM_tabcontrol->SuspendLayout();
			this->createIssue_tab->SuspendLayout();
			this->issueList_tab->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->issueList_datagridview))->BeginInit();
			this->issueEdit_tab->SuspendLayout();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->editIssue_datagridview))->BeginInit();
			this->removeIssue_tab->SuspendLayout();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->removeIssue_datagridview))->BeginInit();
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
			this->panel1->Controls->Add(this->removeTab_button);
			this->panel1->Controls->Add(this->editTab_button);
			this->panel1->Controls->Add(this->listTab_button);
			this->panel1->Controls->Add(this->createTab_button);
			this->panel1->Location = System::Drawing::Point(139, 42);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(700, 51);
			this->panel1->TabIndex = 1;
			// 
			// removeTab_button
			// 
			this->removeTab_button->BackColor = System::Drawing::Color::White;
			this->removeTab_button->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->removeTab_button->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->removeTab_button->Location = System::Drawing::Point(525, 3);
			this->removeTab_button->Name = L"removeTab_button";
			this->removeTab_button->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->removeTab_button->Size = System::Drawing::Size(168, 41);
			this->removeTab_button->TabIndex = 3;
			this->removeTab_button->Text = L"Remove Issue";
			this->removeTab_button->UseVisualStyleBackColor = false;
			this->removeTab_button->Click += gcnew System::EventHandler(this, &PMForm::removeTab_button_Click);
			// 
			// editTab_button
			// 
			this->editTab_button->BackColor = System::Drawing::Color::White;
			this->editTab_button->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->editTab_button->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editTab_button->Location = System::Drawing::Point(351, 3);
			this->editTab_button->Name = L"editTab_button";
			this->editTab_button->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->editTab_button->Size = System::Drawing::Size(168, 41);
			this->editTab_button->TabIndex = 2;
			this->editTab_button->Text = L"Edit Issue";
			this->editTab_button->UseVisualStyleBackColor = false;
			this->editTab_button->Click += gcnew System::EventHandler(this, &PMForm::editTab_button_Click);
			// 
			// listTab_button
			// 
			this->listTab_button->BackColor = System::Drawing::Color::White;
			this->listTab_button->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->listTab_button->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listTab_button->Location = System::Drawing::Point(177, 3);
			this->listTab_button->Name = L"listTab_button";
			this->listTab_button->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->listTab_button->Size = System::Drawing::Size(168, 41);
			this->listTab_button->TabIndex = 1;
			this->listTab_button->Text = L"List Issues";
			this->listTab_button->UseVisualStyleBackColor = false;
			this->listTab_button->Click += gcnew System::EventHandler(this, &PMForm::listTab_button_Click);
			// 
			// createTab_button
			// 
			this->createTab_button->BackColor = System::Drawing::Color::White;
			this->createTab_button->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->createTab_button->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->createTab_button->Location = System::Drawing::Point(3, 3);
			this->createTab_button->Name = L"createTab_button";
			this->createTab_button->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->createTab_button->Size = System::Drawing::Size(168, 41);
			this->createTab_button->TabIndex = 0;
			this->createTab_button->Text = L"Create Issue";
			this->createTab_button->UseVisualStyleBackColor = false;
			this->createTab_button->Click += gcnew System::EventHandler(this, &PMForm::createTab_button_Click);
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
			this->panel2->Controls->Add(this->middle_label);
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
			// middle_label
			// 
			this->middle_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->middle_label->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->middle_label->ForeColor = System::Drawing::Color::White;
			this->middle_label->Location = System::Drawing::Point(194, 314);
			this->middle_label->Name = L"middle_label";
			this->middle_label->Size = System::Drawing::Size(550, 78);
			this->middle_label->TabIndex = 22;
			this->middle_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// issueStatus_combobox
			// 
			this->issueStatus_combobox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->issueStatus_combobox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->issueStatus_combobox->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->issueStatus_combobox->FormattingEnabled = true;
			this->issueStatus_combobox->Location = System::Drawing::Point(626, 75);
			this->issueStatus_combobox->Name = L"issueStatus_combobox";
			this->issueStatus_combobox->Size = System::Drawing::Size(308, 30);
			this->issueStatus_combobox->TabIndex = 21;
			// 
			// issuePriority_combobox
			// 
			this->issuePriority_combobox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->issuePriority_combobox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
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
			this->issueType_combobox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->issueType_combobox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
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
			this->assignTo_combobox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->assignTo_combobox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->assignTo_combobox->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->assignTo_combobox->FormattingEnabled = true;
			this->assignTo_combobox->Location = System::Drawing::Point(152, 75);
			this->assignTo_combobox->Name = L"assignTo_combobox";
			this->assignTo_combobox->Size = System::Drawing::Size(308, 30);
			this->assignTo_combobox->TabIndex = 18;
			// 
			// IssueDatePicker
			// 
			this->IssueDatePicker->Cursor = System::Windows::Forms::Cursors::Hand;
			this->IssueDatePicker->CustomFormat = L" dd  / MMMMMMMM / yyyy";
			this->IssueDatePicker->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IssueDatePicker->Format = System::Windows::Forms::DateTimePickerFormat::Short;
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
			this->addIssue_button->Click += gcnew System::EventHandler(this, &PMForm::addIssue_button_Click);
			// 
			// label7
			// 
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
			this->label5->Location = System::Drawing::Point(478, 2);
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
			this->issueTitle_textbox->Location = System::Drawing::Point(152, 6);
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
			this->PM_tabcontrol->Controls->Add(this->issueEdit_tab);
			this->PM_tabcontrol->Controls->Add(this->removeIssue_tab);
			this->PM_tabcontrol->ItemSize = System::Drawing::Size(90, 20);
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
			this->createIssue_tab->Location = System::Drawing::Point(4, 24);
			this->createIssue_tab->Name = L"createIssue_tab";
			this->createIssue_tab->Padding = System::Windows::Forms::Padding(3);
			this->createIssue_tab->Size = System::Drawing::Size(942, 512);
			this->createIssue_tab->TabIndex = 0;
			this->createIssue_tab->Text = L"create issue";
			// 
			// issueList_tab
			// 
			this->issueList_tab->Controls->Add(this->panel4);
			this->issueList_tab->Location = System::Drawing::Point(4, 24);
			this->issueList_tab->Name = L"issueList_tab";
			this->issueList_tab->Padding = System::Windows::Forms::Padding(3);
			this->issueList_tab->Size = System::Drawing::Size(942, 512);
			this->issueList_tab->TabIndex = 1;
			this->issueList_tab->Text = L"list issues";
			this->issueList_tab->UseVisualStyleBackColor = true;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Black;
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel4->Controls->Add(this->issueList_datagridview);
			this->panel4->Location = System::Drawing::Point(-2, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(946, 516);
			this->panel4->TabIndex = 5;
			// 
			// issueList_datagridview
			// 
			this->issueList_datagridview->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle8->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle8->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->issueList_datagridview->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle8;
			this->issueList_datagridview->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->issueList_datagridview->Location = System::Drawing::Point(3, 1);
			this->issueList_datagridview->Name = L"issueList_datagridview";
			this->issueList_datagridview->Size = System::Drawing::Size(936, 506);
			this->issueList_datagridview->TabIndex = 0;
			// 
			// issueEdit_tab
			// 
			this->issueEdit_tab->Controls->Add(this->panel5);
			this->issueEdit_tab->Location = System::Drawing::Point(4, 24);
			this->issueEdit_tab->Name = L"issueEdit_tab";
			this->issueEdit_tab->Size = System::Drawing::Size(942, 512);
			this->issueEdit_tab->TabIndex = 2;
			this->issueEdit_tab->Text = L"edit issues";
			this->issueEdit_tab->UseVisualStyleBackColor = true;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Black;
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel5->Controls->Add(this->label21);
			this->panel5->Controls->Add(this->edit_issueDescrip_textbox);
			this->panel5->Controls->Add(this->edit_issueID_combobox);
			this->panel5->Controls->Add(this->label18);
			this->panel5->Controls->Add(this->issueupdated_label);
			this->panel5->Controls->Add(this->label12);
			this->panel5->Controls->Add(this->edit_issueStatus_combobox);
			this->panel5->Controls->Add(this->edit_issuePriority_combobox);
			this->panel5->Controls->Add(this->label11);
			this->panel5->Controls->Add(this->edit_issueType_combobox);
			this->panel5->Controls->Add(this->label10);
			this->panel5->Controls->Add(this->edit_assignTo_combobox);
			this->panel5->Controls->Add(this->label9);
			this->panel5->Controls->Add(this->label8);
			this->panel5->Controls->Add(this->edit_issueTitle_textbox);
			this->panel5->Controls->Add(this->updateIssue_button);
			this->panel5->Controls->Add(this->editIssue_datagridview);
			this->panel5->Location = System::Drawing::Point(0, 0);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(946, 516);
			this->panel5->TabIndex = 8;
			// 
			// edit_issueID_combobox
			// 
			this->edit_issueID_combobox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->edit_issueID_combobox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->edit_issueID_combobox->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit_issueID_combobox->FormattingEnabled = true;
			this->edit_issueID_combobox->Location = System::Drawing::Point(152, 6);
			this->edit_issueID_combobox->Name = L"edit_issueID_combobox";
			this->edit_issueID_combobox->Size = System::Drawing::Size(308, 30);
			this->edit_issueID_combobox->TabIndex = 28;
			// 
			// label18
			// 
			this->label18->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::White;
			this->label18->Location = System::Drawing::Point(4, 1);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(142, 30);
			this->label18->TabIndex = 27;
			this->label18->Text = L"Issue ID:";
			this->label18->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// issueupdated_label
			// 
			this->issueupdated_label->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->issueupdated_label->ForeColor = System::Drawing::Color::White;
			this->issueupdated_label->Location = System::Drawing::Point(731, 188);
			this->issueupdated_label->Name = L"issueupdated_label";
			this->issueupdated_label->Size = System::Drawing::Size(168, 41);
			this->issueupdated_label->TabIndex = 26;
			this->issueupdated_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label12
			// 
			this->label12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(478, 71);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(142, 30);
			this->label12->TabIndex = 16;
			this->label12->Text = L"Issue Status:";
			this->label12->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// edit_issueStatus_combobox
			// 
			this->edit_issueStatus_combobox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->edit_issueStatus_combobox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->edit_issueStatus_combobox->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit_issueStatus_combobox->FormattingEnabled = true;
			this->edit_issueStatus_combobox->Location = System::Drawing::Point(626, 75);
			this->edit_issueStatus_combobox->Name = L"edit_issueStatus_combobox";
			this->edit_issueStatus_combobox->Size = System::Drawing::Size(308, 30);
			this->edit_issueStatus_combobox->TabIndex = 25;
			// 
			// edit_issuePriority_combobox
			// 
			this->edit_issuePriority_combobox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->edit_issuePriority_combobox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->edit_issuePriority_combobox->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit_issuePriority_combobox->FormattingEnabled = true;
			this->edit_issuePriority_combobox->Location = System::Drawing::Point(626, 40);
			this->edit_issuePriority_combobox->Name = L"edit_issuePriority_combobox";
			this->edit_issuePriority_combobox->Size = System::Drawing::Size(308, 30);
			this->edit_issuePriority_combobox->TabIndex = 24;
			// 
			// label11
			// 
			this->label11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(478, 36);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(142, 30);
			this->label11->TabIndex = 23;
			this->label11->Text = L"Issue Priority:";
			this->label11->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// edit_issueType_combobox
			// 
			this->edit_issueType_combobox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->edit_issueType_combobox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->edit_issueType_combobox->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit_issueType_combobox->FormattingEnabled = true;
			this->edit_issueType_combobox->Location = System::Drawing::Point(626, 5);
			this->edit_issueType_combobox->Name = L"edit_issueType_combobox";
			this->edit_issueType_combobox->Size = System::Drawing::Size(308, 30);
			this->edit_issueType_combobox->TabIndex = 23;
			// 
			// label10
			// 
			this->label10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(478, 2);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(142, 30);
			this->label10->TabIndex = 23;
			this->label10->Text = L"Issue Type:";
			this->label10->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// edit_assignTo_combobox
			// 
			this->edit_assignTo_combobox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->edit_assignTo_combobox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->edit_assignTo_combobox->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit_assignTo_combobox->FormattingEnabled = true;
			this->edit_assignTo_combobox->Location = System::Drawing::Point(152, 75);
			this->edit_assignTo_combobox->Name = L"edit_assignTo_combobox";
			this->edit_assignTo_combobox->Size = System::Drawing::Size(308, 30);
			this->edit_assignTo_combobox->TabIndex = 23;
			// 
			// label9
			// 
			this->label9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(4, 71);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(142, 30);
			this->label9->TabIndex = 23;
			this->label9->Text = L"Assign to:";
			this->label9->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(4, 36);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(142, 30);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Issue Title:";
			this->label8->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// edit_issueTitle_textbox
			// 
			this->edit_issueTitle_textbox->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit_issueTitle_textbox->Location = System::Drawing::Point(152, 40);
			this->edit_issueTitle_textbox->MaximumSize = System::Drawing::Size(308, 30);
			this->edit_issueTitle_textbox->MinimumSize = System::Drawing::Size(308, 30);
			this->edit_issueTitle_textbox->Name = L"edit_issueTitle_textbox";
			this->edit_issueTitle_textbox->Size = System::Drawing::Size(308, 29);
			this->edit_issueTitle_textbox->TabIndex = 8;
			// 
			// updateIssue_button
			// 
			this->updateIssue_button->BackColor = System::Drawing::Color::White;
			this->updateIssue_button->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->updateIssue_button->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->updateIssue_button->Location = System::Drawing::Point(731, 144);
			this->updateIssue_button->Name = L"updateIssue_button";
			this->updateIssue_button->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->updateIssue_button->Size = System::Drawing::Size(168, 41);
			this->updateIssue_button->TabIndex = 3;
			this->updateIssue_button->Text = L"Update Issue";
			this->updateIssue_button->UseVisualStyleBackColor = false;
			// 
			// editIssue_datagridview
			// 
			this->editIssue_datagridview->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle7->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->editIssue_datagridview->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle7;
			this->editIssue_datagridview->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->editIssue_datagridview->Location = System::Drawing::Point(1, 268);
			this->editIssue_datagridview->Name = L"editIssue_datagridview";
			this->editIssue_datagridview->Size = System::Drawing::Size(936, 239);
			this->editIssue_datagridview->TabIndex = 1;
			this->editIssue_datagridview->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PMForm::editIssue_datagridview_CellClick);
			// 
			// removeIssue_tab
			// 
			this->removeIssue_tab->Controls->Add(this->panel6);
			this->removeIssue_tab->Location = System::Drawing::Point(4, 24);
			this->removeIssue_tab->Name = L"removeIssue_tab";
			this->removeIssue_tab->Size = System::Drawing::Size(942, 512);
			this->removeIssue_tab->TabIndex = 3;
			this->removeIssue_tab->Text = L"remove issues";
			this->removeIssue_tab->UseVisualStyleBackColor = true;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::Black;
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel6->Controls->Add(this->textBox2);
			this->panel6->Controls->Add(this->comboBox5);
			this->panel6->Controls->Add(this->label13);
			this->panel6->Controls->Add(this->label14);
			this->panel6->Controls->Add(this->label15);
			this->panel6->Controls->Add(this->comboBox6);
			this->panel6->Controls->Add(this->comboBox7);
			this->panel6->Controls->Add(this->label16);
			this->panel6->Controls->Add(this->comboBox8);
			this->panel6->Controls->Add(this->label17);
			this->panel6->Controls->Add(this->comboBox10);
			this->panel6->Controls->Add(this->label19);
			this->panel6->Controls->Add(this->label20);
			this->panel6->Controls->Add(this->button1);
			this->panel6->Controls->Add(this->removeIssue_datagridview);
			this->panel6->Location = System::Drawing::Point(0, 0);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(946, 516);
			this->panel6->TabIndex = 9;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(152, 40);
			this->textBox2->MaximumSize = System::Drawing::Size(308, 30);
			this->textBox2->MinimumSize = System::Drawing::Size(308, 30);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(308, 29);
			this->textBox2->TabIndex = 9;
			// 
			// comboBox5
			// 
			this->comboBox5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox5->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox5->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Location = System::Drawing::Point(152, 6);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(308, 30);
			this->comboBox5->TabIndex = 28;
			// 
			// label13
			// 
			this->label13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(4, 1);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(142, 30);
			this->label13->TabIndex = 27;
			this->label13->Text = L"Issue ID:";
			this->label13->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// label14
			// 
			this->label14->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(479, 112);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(168, 41);
			this->label14->TabIndex = 26;
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label15
			// 
			this->label15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::White;
			this->label15->Location = System::Drawing::Point(478, 71);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(142, 30);
			this->label15->TabIndex = 16;
			this->label15->Text = L"Issue Status:";
			this->label15->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// comboBox6
			// 
			this->comboBox6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox6->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox6->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Location = System::Drawing::Point(626, 75);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(308, 30);
			this->comboBox6->TabIndex = 25;
			// 
			// comboBox7
			// 
			this->comboBox7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox7->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox7->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox7->FormattingEnabled = true;
			this->comboBox7->Location = System::Drawing::Point(626, 40);
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(308, 30);
			this->comboBox7->TabIndex = 24;
			// 
			// label16
			// 
			this->label16->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::White;
			this->label16->Location = System::Drawing::Point(478, 36);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(142, 30);
			this->label16->TabIndex = 23;
			this->label16->Text = L"Issue Priority:";
			this->label16->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// comboBox8
			// 
			this->comboBox8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox8->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox8->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox8->FormattingEnabled = true;
			this->comboBox8->Location = System::Drawing::Point(626, 5);
			this->comboBox8->Name = L"comboBox8";
			this->comboBox8->Size = System::Drawing::Size(308, 30);
			this->comboBox8->TabIndex = 23;
			// 
			// label17
			// 
			this->label17->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::White;
			this->label17->Location = System::Drawing::Point(478, 2);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(142, 30);
			this->label17->TabIndex = 23;
			this->label17->Text = L"Issue Type:";
			this->label17->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// comboBox10
			// 
			this->comboBox10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox10->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox10->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox10->FormattingEnabled = true;
			this->comboBox10->Location = System::Drawing::Point(152, 75);
			this->comboBox10->Name = L"comboBox10";
			this->comboBox10->Size = System::Drawing::Size(308, 30);
			this->comboBox10->TabIndex = 23;
			// 
			// label19
			// 
			this->label19->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label19->BackColor = System::Drawing::Color::Transparent;
			this->label19->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::White;
			this->label19->Location = System::Drawing::Point(4, 71);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(142, 30);
			this->label19->TabIndex = 23;
			this->label19->Text = L"Assign to:";
			this->label19->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// label20
			// 
			this->label20->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label20->BackColor = System::Drawing::Color::Transparent;
			this->label20->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::White;
			this->label20->Location = System::Drawing::Point(4, 36);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(142, 30);
			this->label20->TabIndex = 8;
			this->label20->Text = L"Issue Title:";
			this->label20->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(295, 112);
			this->button1->Name = L"button1";
			this->button1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button1->Size = System::Drawing::Size(168, 41);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Remove Issue";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// removeIssue_datagridview
			// 
			this->removeIssue_datagridview->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			dataGridViewCellStyle9->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle9->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle9->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle9->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle9->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle9->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle9->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->removeIssue_datagridview->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle9;
			this->removeIssue_datagridview->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->removeIssue_datagridview->Location = System::Drawing::Point(1, 159);
			this->removeIssue_datagridview->Name = L"removeIssue_datagridview";
			this->removeIssue_datagridview->Size = System::Drawing::Size(936, 348);
			this->removeIssue_datagridview->TabIndex = 1;
			// 
			// usernameRole_label
			// 
			this->usernameRole_label->AutoSize = true;
			this->usernameRole_label->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usernameRole_label->Location = System::Drawing::Point(194, 13);
			this->usernameRole_label->Name = L"usernameRole_label";
			this->usernameRole_label->Size = System::Drawing::Size(0, 18);
			this->usernameRole_label->TabIndex = 6;
			// 
			// bruhlabel
			// 
			this->bruhlabel->AutoSize = true;
			this->bruhlabel->Location = System::Drawing::Point(447, 17);
			this->bruhlabel->Name = L"bruhlabel";
			this->bruhlabel->Size = System::Drawing::Size(0, 13);
			this->bruhlabel->TabIndex = 7;
			// 
			// edit_issueDescrip_textbox
			// 
			this->edit_issueDescrip_textbox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->edit_issueDescrip_textbox->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->edit_issueDescrip_textbox->Location = System::Drawing::Point(152, 111);
			this->edit_issueDescrip_textbox->MaxLength = 255;
			this->edit_issueDescrip_textbox->Multiline = true;
			this->edit_issueDescrip_textbox->Name = L"edit_issueDescrip_textbox";
			this->edit_issueDescrip_textbox->Size = System::Drawing::Size(537, 151);
			this->edit_issueDescrip_textbox->TabIndex = 8;
			// 
			// label21
			// 
			this->label21->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label21->BackColor = System::Drawing::Color::Transparent;
			this->label21->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::White;
			this->label21->Location = System::Drawing::Point(4, 109);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(124, 30);
			this->label21->TabIndex = 8;
			this->label21->Text = L"Description:";
			this->label21->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// PMForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DimGray;
			this->ClientSize = System::Drawing::Size(984, 661);
			this->Controls->Add(this->bruhlabel);
			this->Controls->Add(this->usernameRole_label);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->issueList_datagridview))->EndInit();
			this->issueEdit_tab->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->editIssue_datagridview))->EndInit();
			this->removeIssue_tab->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->removeIssue_datagridview))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
//=================================================================================================================================================
	private: System::Void DisplayFirstLastName(User^ user) //User^ user
	{
		usernameRole_label->Text = user->returnfname() + " " + user->returnlname();
		//usernameRole_label->Text = userinfo->returnFirstName();
	}
//=================================================================================================================================================
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
//=================================================================================================================================================
	private: System::Void clear_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			issueTitle_textbox->Text = "";
			assignTo_combobox->SelectedIndex = -1;
			issueType_combobox->SelectedIndex = -1;
			issuePriority_combobox->SelectedIndex = -1;
			issueStatus_combobox->SelectedIndex = -1;
			description_textbox->Text = "";
			IssueDatePicker->ResetText();
			middle_label->Text = "Boxes Cleared";
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message);
		}
	}
//=================================================================================================================================================
	private: System::Void createTab_button_Click(System::Object^ sender, System::EventArgs^ e)
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
//=================================================================================================================================================
	private: System::Void listTab_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			PM_tabcontrol->SelectTab(issueList_tab);
			DisplayFullIssueList();
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message);
		}
	}
//=================================================================================================================================================
	private: System::Void editTab_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			editIssue_datagridview->DataSource = db.getFULLDisplayIssueList();
			PM_tabcontrol->SelectTab(issueEdit_tab);
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message);
		}
	}
//=================================================================================================================================================
	private: System::Void removeTab_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			PM_tabcontrol->SelectTab(removeIssue_tab);
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message);
		}
	}
//=================================================================================================================================================
	private: System::Void displayPriorityCombobox()
	{
		List<int>^ priID = priList->returnPriorityIDList();
		List<String^>^ priName = priList->returnPriorityNameList();
		for (int i = 0; i < priID->Count; i++)
		{
			this->issuePriority_combobox->Items->Add(priID[i] + ": " + priName[i]);
			this->edit_issuePriority_combobox->Items->Add(priID[i] + ": " + priName[i]);
		}
	}
//=================================================================================================================================================
	private: System::Void displayAssignmentCombobox()
	{
		List<int>^ userid = userinfo->returnUserIDList();
		List<String^>^ fname = userinfo->returnFirstNameList();
		List<String^>^ lname = userinfo->returnLastNameList();
		for (int i = 0; i < userid->Count; i++)
		{
			this->assignTo_combobox->Items->Add(userid[i] + ": " + fname[i] + " " + lname[i]);
			this->edit_assignTo_combobox->Items->Add(userid[i] + ": " + fname[i] + " " + lname[i]);
			//this->assignTo_combobox->Items->Add(userinfo->userIDList[i] + ": " + userinfo->userNameList[i]);
		}
	}
//=================================================================================================================================================
	private: System::Void displayStatusComboBox()
	{
		List<int>^ statID = statList->returnStatusIDList();
		List<String^>^ statName = statList->returnStatusNamesList();
		for (int i = 0; i < statID->Count; i++)
		{
			this->issueStatus_combobox->Items->Add(statID[i] + ": " + statName[i]);
			this->edit_issueStatus_combobox->Items->Add(statID[i] + ": " + statName[i]);
		}
	}
//=================================================================================================================================================
	private: System::Void displayTypeComboBox()
	{
		List<int>^ typeID = tyList->returnTypeIDList();
		List<String^>^ typeName = tyList->returnTypeNameList();
		for (int i = 0; i < typeID->Count; i++)
		{
			this->issueType_combobox->Items->Add(typeID[i] + ": " + typeName[i]);
			this->edit_issueType_combobox->Items->Add(typeID[i] + ": " + typeName[i]);
		}
	}
//=================================================================================================================================================
	private: System::Void displayIssueComboBox()
	{
		List<int>^ issID = issList->returnIssueIDList();
		List<String^>^ issTitle = issList->returnIssueTitleList();
		for (int i = 0; i < issID->Count; i++)
		{
			this->edit_issueID_combobox->Items->Add(issID[i] + ": " + issTitle[i]);
		}
	}
//=================================================================================================================================================
	private: System::Void DisplayFullIssueList()
	{
		issueList_datagridview->DataSource = db.getFULLDisplayIssueList();
	}
//=================================================================================================================================================
	private: System::Int32 convertToID(ComboBox^ box)
	{
		String^ input = box->Text;
		int num = input->IndexOf(":");
		String^ extracted = input->Substring(0, num);
		int id;
		if (Int32::TryParse(extracted, id))
		{
			return id;
		}
	}
//=================================================================================================================================================
	private: System::Void addIssue_button_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//String^ str = assignTo_combobox->Text;
		//int AssignTo = convertToUserID(assignTo_combobox, str);
		try
		{
			String^ title = issueTitle_textbox->Text;
			String^ descrip = description_textbox->Text;
			String^ date = IssueDatePicker->Text;
			int userID, typeID, priorityID, statusID;
			userID = convertToID(assignTo_combobox);
			typeID = convertToID(issueType_combobox);
			priorityID = convertToID(issuePriority_combobox);
			statusID = convertToID(issueStatus_combobox);
			//MessageBox::Show("assign to: " + userID + "\ntype id: " + typeID + "\n pri ID: " + priorityID + "\nstatus ID: " + statusID);
			//MessageBox::Show("title: " + title + "\nDate: " + date + "\nDescrip: " + descrip);
			db.addIssue(title, descrip, date, userID, typeID, priorityID, statusID);
			middle_label->Text = "Issue Entry Added";
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Invalid Entry");
		}
	}
//=================================================================================================================================================
	private: System::Void editIssue_datagridview_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) 
	{
		try
		{
			
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message);
		}
	}

};
}
