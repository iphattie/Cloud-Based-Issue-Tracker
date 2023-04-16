#include "LoginForm.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace MySql::Data::MySqlClient;
using namespace System::Data;

[STAThreadAttribute]
void main(array<String^>^ args) 
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    IssueTrackerv5::LoginForm loginForm;
    loginForm.ShowDialog();
}

