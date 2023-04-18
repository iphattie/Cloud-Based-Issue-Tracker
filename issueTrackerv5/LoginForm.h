#pragma once
#include "DataBaseClass.h"
#include "PMForm.h"
namespace IssueTrackerv5 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	private:
		DB db;
		User^ userinfo = db.returnUserInfo();
		String^ username;
		String^ password;
	public:
		LoginForm(void)
		{
			//db.OpenDatabase();
			InitializeComponent();
			DatabaseConfirmation();
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ database_connect_label;
	private: System::Windows::Forms::Label^ login_error_label;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ Username_label;
	private: System::Windows::Forms::TextBox^ username_textbox;
	private: System::Windows::Forms::TextBox^ password_textbox;
	private: System::Windows::Forms::Label^ password_label;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Button^ Login_button;
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;
#pragma region Windows Form Designer generated code
		//=================================================================================================================================================
				/// <summary>
				/// Required method for Designer support - do not modify
				/// the contents of this method with the code editor.
				/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->password_textbox = (gcnew System::Windows::Forms::TextBox());
			this->password_label = (gcnew System::Windows::Forms::Label());
			this->username_textbox = (gcnew System::Windows::Forms::TextBox());
			this->Username_label = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Login_button = (gcnew System::Windows::Forms::Button());
			this->database_connect_label = (gcnew System::Windows::Forms::Label());
			this->login_error_label = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tableLayoutPanel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->AutoSize = true;
			this->tableLayoutPanel1->BackColor = System::Drawing::Color::Black;
			this->tableLayoutPanel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->password_textbox, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->password_label, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->username_textbox, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->Username_label, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox1, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(4, 4);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 5;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 21)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 58)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 21)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 51)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(452, 264);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// password_textbox
			// 
			this->password_textbox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->password_textbox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_textbox->Location = System::Drawing::Point(3, 216);
			this->password_textbox->MinimumSize = System::Drawing::Size(100, 30);
			this->password_textbox->Name = L"password_textbox";
			this->password_textbox->Size = System::Drawing::Size(446, 22);
			this->password_textbox->TabIndex = 3;
			this->password_textbox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->password_textbox->UseSystemPasswordChar = true;
			// 
			// password_label
			// 
			this->password_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->password_label->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_label->ForeColor = System::Drawing::Color::White;
			this->password_label->Location = System::Drawing::Point(3, 192);
			this->password_label->Name = L"password_label";
			this->password_label->Size = System::Drawing::Size(87, 21);
			this->password_label->TabIndex = 2;
			this->password_label->Text = L"Password";
			this->password_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// username_textbox
			// 
			this->username_textbox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->username_textbox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username_textbox->Location = System::Drawing::Point(3, 137);
			this->username_textbox->MinimumSize = System::Drawing::Size(100, 30);
			this->username_textbox->Name = L"username_textbox";
			this->username_textbox->Size = System::Drawing::Size(446, 22);
			this->username_textbox->TabIndex = 1;
			this->username_textbox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Username_label
			// 
			this->Username_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->Username_label->BackColor = System::Drawing::Color::Transparent;
			this->Username_label->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Username_label->ForeColor = System::Drawing::Color::White;
			this->Username_label->Location = System::Drawing::Point(3, 113);
			this->Username_label->Name = L"Username_label";
			this->Username_label->Size = System::Drawing::Size(87, 21);
			this->Username_label->TabIndex = 0;
			this->Username_label->Text = L"Username";
			this->Username_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(151, 19);
			this->pictureBox1->MaximumSize = System::Drawing::Size(150, 75);
			this->pictureBox1->MinimumSize = System::Drawing::Size(150, 75);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(150, 75);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->AutoSize = true;
			this->tableLayoutPanel2->BackColor = System::Drawing::Color::White;
			this->tableLayoutPanel2->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel1, 0, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(12, 12);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(460, 272);
			this->tableLayoutPanel2->TabIndex = 1;
			// 
			// Login_button
			// 
			this->Login_button->BackColor = System::Drawing::Color::White;
			this->Login_button->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->Login_button->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->Login_button->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->Login_button->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->Login_button->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Login_button->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Login_button->Location = System::Drawing::Point(167, 343);
			this->Login_button->Name = L"Login_button";
			this->Login_button->Size = System::Drawing::Size(150, 32);
			this->Login_button->TabIndex = 2;
			this->Login_button->Text = L"Login";
			this->Login_button->UseVisualStyleBackColor = false;
			this->Login_button->Click += gcnew System::EventHandler(this, &LoginForm::Login_button_Click);
			// 
			// database_connect_label
			// 
			this->database_connect_label->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->database_connect_label->Location = System::Drawing::Point(0, 355);
			this->database_connect_label->Name = L"database_connect_label";
			this->database_connect_label->Size = System::Drawing::Size(127, 57);
			this->database_connect_label->TabIndex = 3;
			this->database_connect_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// login_error_label
			// 
			this->login_error_label->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->login_error_label->Location = System::Drawing::Point(12, 297);
			this->login_error_label->Name = L"login_error_label";
			this->login_error_label->Size = System::Drawing::Size(460, 30);
			this->login_error_label->TabIndex = 4;
			this->login_error_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DimGray;
			this->ClientSize = System::Drawing::Size(484, 411);
			this->Controls->Add(this->login_error_label);
			this->Controls->Add(this->database_connect_label);
			this->Controls->Add(this->Login_button);
			this->Controls->Add(this->tableLayoutPanel2);
			this->MaximumSize = System::Drawing::Size(500, 450);
			this->MinimumSize = System::Drawing::Size(500, 450);
			this->Name = L"LoginForm";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
//=================================================================================================================================================
	// Opens the AWS Cloud Database Upon Launch of Program.
	// Required in order to get Username and Password from System in order to login.
	private: System::Void DatabaseConfirmation()
	{
		try
		{
			db.OpenDatabase();
			database_connect_label->Text = "Database Connected";
		}
		catch (Exception^ e)
		{
			database_connect_label->Text = "Failed to connect to Database";
		}
	}
//=================================================================================================================================================
	// When "Login" button is pressed, it will open next Main Menu Form if credentials are correct.
	// If credentials are wrong, show its incorrect.
	private: System::Void Login_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//String^ username = this->username_textbox->Text;
		//String^ password = this->password_textbox->Text;
		username = this->username_textbox->Text;
		password = this->password_textbox->Text;
		try
		{
			bool correct = db.ConfirmLogin(username, password);
			if (correct == true)
			{
				//db.saveUserInfo(username, password, user);
				//MessageBox::Show("Logged In");
				OpenNextForm(username, password);
				//this->Hide();
				//this->Close();
			}
			else
			{
				login_error_label->Text = "Username or Password is incorrect";
			}
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message);
		}
	}
//=================================================================================================================================================
	//Determine whether or not to open Project Manager Interface or Developer Interface.
	//private: System::Void OpenNextForm(String^ user, String^ pass)
	private: System::Void OpenNextForm(String^ user, String^ pass)
	{
		//userinfo = db.userinfo;
		int roleID = db.getRoleID(user, pass);
		IssueTrackerv5::PMForm pmform(userinfo);
		//IssueTrackerv5::PMForm pmform;
		if (roleID == 1)
		{
			//MessageBox::Show("pm");
			this->Hide();
			//Application::Run(% pmform);
			pmform.ShowDialog();
		}
		else if (roleID == 2)
		{
			MessageBox::Show("dev");
		}
	}
	//=================================================================================================================================================
	};
}