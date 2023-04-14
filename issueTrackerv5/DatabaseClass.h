#pragma once
#include "UserHeader.h"
using namespace System;
using namespace System::Data;
using namespace MySql::Data::MySqlClient;
using namespace System::Windows::Forms;
struct something
{

};
public ref class DB
{
public:

	User^ userinfo = nullptr;

	MySqlConnection^ sqlConn = gcnew MySqlConnection();
	MySqlCommand^ sqlCmd = gcnew MySqlCommand();
	DataTable^ sqlDt = gcnew DataTable();
	MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter();
	MySqlDataReader^ sqlRd;
	//=================================================================================================================================================
	// Opens the connect to the AWS RDS Cloud Database.
	void OpenDatabase()
	{
		sqlConn->ConnectionString = "datasource = aws-cs3321.ciih9q6uolxf.us-east-2.rds.amazonaws.com; port = 3306; username = admin; password = CSUHD310343; database = mydb";
		sqlConn->Open();
	}
	//=================================================================================================================================================
	// Connects to the Database and then determines if Username and Password are Correct.
	bool ConfirmLogin(String^ user, String^ pass)
	{
		sqlCmd->Connection = sqlConn;
		sqlCmd->CommandText = "SELECT * FROM mydb.UserInfo WHERE Username = @username AND Password = @password";
		sqlCmd->Parameters->AddWithValue("@username", user);
		sqlCmd->Parameters->AddWithValue("@password", pass);
		sqlRd = sqlCmd->ExecuteReader();

		if (sqlRd->Read())
		{
			getUserInfo(sqlRd);
			sqlRd->Close();
			sqlCmd->Parameters->Clear();
			return true;
		}
		else
		{
			sqlRd->Close();
			sqlCmd->Parameters->Clear();
			return false;
		}
		//int count = 0;
		//while (sqlRd->Read())
		//{
		//	count = count + 1;
		//}
		//sqlRd->Close();
		//sqlCmd->Parameters->Clear();
		//return count;
	}
	//=================================================================================================================================================
	// Connects to the Database and gets the RoleID from Database and converts it into an Integer.
	int getRoleID(String^ user, String^ pass)
	{
		sqlCmd->CommandText = "SELECT RoleID FROM mydb.UserInfo WHERE Username = @username AND Password = @password";
		sqlCmd->Parameters->AddWithValue("@username", user);
		sqlCmd->Parameters->AddWithValue("@password", pass);
		sqlRd = sqlCmd->ExecuteReader();
		String^ roleNo;
		while (sqlRd->Read())
		{
			roleNo = sqlRd[0]->ToString();
		}
		sqlRd->Close();
		sqlCmd->Parameters->Clear();
		return convertStringInt(roleNo);
	}
	//=================================================================================================================================================
	int convertStringInt(String^ num)
	{
		return System::Convert::ToInt32(num);
	}
	//=================================================================================================================================================
	void getUserInfo(MySqlDataReader^ reader)
	{
		userinfo = gcnew User;
		userinfo->userID = reader->GetInt32(0);
		userinfo->username = reader->GetString(1);
		userinfo->firstName = reader->GetString(3);
		userinfo->lastName = reader->GetString(4);
		userinfo->email = reader->GetString(5);
		userinfo->roleID = reader->GetInt32(6);
	}
};