#pragma once
#include "UserHeader.h"
#include "PriorityClass.h"
#include "StatusClass.h"
#include "TypeClass.h"
#include "IssueClass.h"
using namespace System;
using namespace System::Data;
using namespace MySql::Data::MySqlClient;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;

public ref class DB
{
private: 	
	PriorityList^ priorityList;
	StatusList^ statusList;
	TypeList^ typeList;
	User^ userinfo;
	IssueList^ issueList;
	
	MySqlConnection^ sqlConn = gcnew MySqlConnection();
	MySqlCommand^ sqlCmd = gcnew MySqlCommand();
	DataTable^ sqlDt = gcnew DataTable();
	MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter();
	MySqlDataReader^ sqlRd;

public:

	DB()
	{
		OpenDatabase();
		getIssueList();
		getPriorityList();
		getUserList();
		getStatusList();
		getTypeList();
		sqlConn->Close();
	}
//=================================================================================================================================================
	IssueList^ returnIssueList()
	{
		return issueList;
	}
//=================================================================================================================================================
	PriorityList^ returnPriorityList()
	{
		return priorityList;
	}
//=================================================================================================================================================
	StatusList^ returnStatusList()
	{
		return statusList;
	}
//=================================================================================================================================================
	TypeList^ returnTypeList()
	{
		return typeList;
	}
//=================================================================================================================================================
	User^ returnUserInfo()
	{
		return userinfo;
	}
//=================================================================================================================================================
	// Opens the connect to the AWS RDS Cloud Database.
	void OpenDatabase()
	{
		sqlConn->ConnectionString = "datasource = aws-cs3321.ciih9q6uolxf.us-east-2.rds.amazonaws.com; port = 3306; username = admin; password = CSUHD310343; database = mydb";
		sqlConn->Open();
	}
//=================================================================================================================================================
	// Connects to the Database and then determines if Username and Password are Correct.
	bool ConfirmLogin(String^ username, String^ pass)
	{
		sqlCmd->Connection = sqlConn;
		sqlCmd->CommandText = "SELECT Username, Password FROM mydb.UserInfo WHERE Username = @username AND Password = @password;";
		sqlCmd->Parameters->AddWithValue("@username", username);
		sqlCmd->Parameters->AddWithValue("@password", pass);
		sqlRd = sqlCmd->ExecuteReader();

		if (sqlRd->Read())
		{
			userinfo->addfname(sqlRd->GetString(0));
			userinfo->addlname(sqlRd->GetString(1));
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
	}
//=================================================================================================================================================
	// Connects to the Database and gets the RoleID from Database and converts it into an Integer.
	int getRoleID(String^ user, String^ pass)
	{
		sqlCmd->CommandText = "SELECT RoleID FROM mydb.UserInfo WHERE Username = @username AND Password = @password;";
		sqlCmd->Parameters->AddWithValue("@username", user);
		sqlCmd->Parameters->AddWithValue("@password", pass);
		sqlRd = sqlCmd->ExecuteReader();
		String^ roleNo;
		if (sqlRd->Read())
		{
			roleNo = sqlRd[0]->ToString();
		}
		sqlRd->Close();
		sqlCmd->Parameters->Clear();
		return convertStringInt(roleNo);
	}
//=================================================================================================================================================
	int convertStringInt(String^ num)
	{ return System::Convert::ToInt32(num); }
//=================================================================================================================================================
	void getIssueList()
	{
		List<int>^ issueListID = gcnew List<int>();
		List<String^>^ issueListTitle = gcnew List<String^>();
		List<String^>^ issueListDescrip = gcnew List<String^>();
		List<String^>^ issueListDateCreated = gcnew List<String^>();
		List<int>^ issueListUserID = gcnew List<int>();
		List<int>^ issueListTypeID = gcnew List<int>();
		List<int>^ issueListPriorityID = gcnew List<int>();
		List<int>^ issueListStatusID = gcnew List<int>();
		sqlCmd->Connection = sqlConn;
		sqlCmd->CommandText = "SELECT * FROM mydb.IssueList;";
		sqlRd = sqlCmd->ExecuteReader();
		issueList = gcnew IssueList;
		int ids;
		int userid;
		int typeID;
		int priorityid;
		int statusid;
		String^ title;
		String^ descrip;
		String^ date;
		while (sqlRd->Read())
		{
			ids = sqlRd->GetInt32(0);
			title = sqlRd->GetString(1);
			descrip = sqlRd->GetString(2);
			date = sqlRd->GetString(3);
			userid = sqlRd->GetInt32(4);
			typeID = sqlRd->GetInt32(5);
			priorityid = sqlRd->GetInt32(6);
			statusid = sqlRd->GetInt32(7);
			issueListID->Add(ids);
			issueListTitle->Add(title);
			issueListDescrip->Add(descrip);
			issueListDateCreated->Add(date);
			issueListUserID->Add(userid);
			issueListTypeID->Add(typeID);
			issueListPriorityID->Add(priorityid);
			issueListStatusID->Add(statusid);
		}
		issueList->addIssueIDRangeToList(issueListID);
		issueList->addIssueTitleRangeToList(issueListTitle);
		issueList->addIssueDescriptionRangeToList(issueListDescrip);
		issueList->addIssueDateCreatedRangeToList(issueListDateCreated);
		issueList->addIssueUserIDRangeToList(issueListUserID);
		issueList->addIssueTypeIDRangeToList(issueListTypeID);
		issueList->addIssuePriorityIDRangeToList(issueListPriorityID);
		issueList->addIssueStatusIDRangeToList(issueListStatusID);
		sqlRd->Close();
	}
//=================================================================================================================================================
	void getPriorityList()
	{
		List<int>^ priorityIDs = gcnew List<int>();
		List<String^>^ priorityNames = gcnew List<String^>();
		List<String^>^ priorityDescrip = gcnew List<String^>();
		sqlCmd->Connection = sqlConn;
		sqlCmd->CommandText = "SELECT * FROM mydb.PriorityList;";
		sqlRd = sqlCmd->ExecuteReader();
		priorityList = gcnew PriorityList;
		int ids;
		String^ names;
		String^ descrip;
		while (sqlRd->Read())
		{
			ids = sqlRd->GetInt32(0);
			names = sqlRd->GetString(1);
			descrip = sqlRd->GetString(2);
			priorityIDs->Add(ids);
			priorityNames->Add(names);
			priorityDescrip->Add(descrip);
		}
		priorityList->addPriorityIDsRangeToList(priorityIDs);
		priorityList->addPriorityNamesRangeToList(priorityNames);
		priorityList->addPriorityDescriptionRangeToList(priorityDescrip);
		sqlRd->Close();
	}
//=================================================================================================================================================
	void getUserList()
	{
		List<int>^ userIDs = gcnew List<int>();
		List<String^>^ usernames = gcnew List<String^>();
		List<String^>^ userFirstNames = gcnew List<String^>();
		List<String^>^ userLastNames = gcnew List<String^>();
		List<String^>^ emails = gcnew List<String^>();
		sqlCmd->Connection = sqlConn;
		sqlCmd->CommandText = "SELECT * FROM mydb.UserInfo;";
		sqlRd = sqlCmd->ExecuteReader();
		userinfo = gcnew User;
		int ids;
		String^ username;
		String^ fname;
		String^ lname;
		String^ email;
		while (sqlRd->Read())
		{
			ids = sqlRd->GetInt32(0);
			username = sqlRd->GetString(1);
			fname = sqlRd->GetString(3);
			lname = sqlRd->GetString(4);
			email = sqlRd->GetString(5);
			userIDs->Add(ids);
			usernames->Add(username);
			userFirstNames->Add(fname);
			userLastNames->Add(lname);
			emails->Add(email);
		}
		userinfo->addUserIDsRangeToList(userIDs);
		userinfo->addUsernamesToList(usernames);
		userinfo->addFirstNamesRangeToList(userFirstNames);
		userinfo->addLastNamesRangeToList(userLastNames);
		userinfo->addEmailsRangeToList(emails);
		sqlRd->Close();
	}
//=================================================================================================================================================
	void getStatusList()
	{
		List<int>^ statusIDs = gcnew List<int>();
		List<String^>^ statusNames = gcnew List<String^>();
		List<String^>^ statusDescrip = gcnew List<String^>();
		sqlCmd->Connection = sqlConn;
		sqlCmd->CommandText = "SELECT * FROM mydb.StatusList;";
		sqlRd = sqlCmd->ExecuteReader();
		statusList = gcnew StatusList;
		int ids;
		String^ names;
		String^ descrip;
		while (sqlRd->Read())
		{
			ids = sqlRd->GetInt32(0);
			names = sqlRd->GetString(1);
			descrip = sqlRd->GetString(2);
			statusIDs->Add(ids);
			statusNames->Add(names);
			statusDescrip->Add(descrip);
		}
		statusList->addStatusIDsRangeToList(statusIDs);
		statusList->addStatusNamesRangeToList(statusNames);
		statusList->addStatusDescriptionRangeToList(statusDescrip);
		sqlRd->Close();
	}
//=================================================================================================================================================
	void getTypeList()
	{
		List<int>^ typeIDs = gcnew List<int>();
		List<String^>^ typeNames = gcnew List<String^>();
		List<String^>^ typeDescrip = gcnew List<String^>();
		sqlCmd->Connection = sqlConn;
		sqlCmd->CommandText = "SELECT * FROM mydb.TypeList;";
		sqlRd = sqlCmd->ExecuteReader();
		typeList = gcnew TypeList;
		int ids;
		String^ names;
		String^ descrip;
		while (sqlRd->Read())
		{
			ids = sqlRd->GetInt32(0);
			names = sqlRd->GetString(1);
			descrip = sqlRd->GetString(2);
			typeIDs->Add(ids);
			typeNames->Add(names);
			typeDescrip->Add(descrip);
		}
		typeList->addTypeIDsRangeToList(typeIDs);
		typeList->addTypeNamesRangeToList(typeNames);
		typeList->addTypeDescriptionRangeToList(typeDescrip);
		sqlRd->Close();
	}
//=================================================================================================================================================
	DataTable^ getFULLDisplayIssueList()
	{
		DataTable^ testsqlDt = gcnew DataTable();
		sqlCmd->Connection = sqlConn;
		//sqlCmd->CommandText = "SELECT * FROM mydb.IssueList";
		sqlCmd->CommandText =
			"SELECT mydb.IssueList.IssueID, mydb.IssueList.Title, mydb.IssueList.Description, mydb.IssueList.DateCreated, " +
			"mydb.UserInfo.UserID, mydb.UserInfo.firstName, mydb.UserInfo.lastName, " +
			"mydb.TypeList.TypeName, " +
			"mydb.PriorityList.PriorityName, " +
			"mydb.StatusList.StatusName " +
			"FROM mydb.IssueList " +
			"JOIN mydb.UserInfo ON mydb.IssueList.UserID = mydb.UserInfo.UserID " +
			"JOIN mydb.TypeList on mydb.IssueList.TypeList_TypeID = mydb.TypeList.TypeID " +
			"JOIN mydb.PriorityList on mydb.IssueList.PriorityID = mydb.PriorityList.PriorityID " +
			"JOIN mydb.StatusList on mydb.IssueList.StatusID = mydb.StatusList.StatusID " +
			"ORDER BY IssueID;";
		sqlRd = sqlCmd->ExecuteReader();
		testsqlDt->Load(sqlRd);
		//sqlDt->Load(sqlRd);
		sqlRd->Close();
		//sqlConn->Close();
		return testsqlDt;
	}
//=================================================================================================================================================
	void addIssue(String^ title, String^ descrip, String^ date, int userid, int tyid, int priid, int statusid)
	{
		sqlCmd->Connection = sqlConn;
		try
		{
			sqlCmd->CommandText = "INSERT INTO `mydb`.`IssueList` (`Title`, `Description`, `DateCreated`, `UserID`, `TypeList_TypeID`, `PriorityID`, `StatusID`) " +
				"VALUES('"+ title +"', '"+ descrip +"', '"+ date +"', '"+ userid +"', '"+ tyid +"', '"+ priid+"', '"+ statusid+"');";

			sqlCmd->ExecuteNonQuery();
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message);
		}
	}
//=================================================================================================================================================
};