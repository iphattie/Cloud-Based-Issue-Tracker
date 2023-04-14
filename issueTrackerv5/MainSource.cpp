#include "LoginForm.h"
#include "DatabaseClass.h"
#include "PMForm.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    IssueTrackerv5::LoginForm loginForm;
    loginForm.ShowDialog();
}

