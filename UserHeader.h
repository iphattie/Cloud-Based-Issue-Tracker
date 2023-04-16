#pragma once
using namespace System;
using namespace System::Collections::Generic;

public ref class User
{
private: 
	List<int>^ userIDList;	
	List<String^>^ usernameList;		
	List<String^>^ firstNameList;
	List<String^>^ lastNameList;
	List<String^>^ emailList;
	String^ fname;
	String^ lname;
public:
//=================================================================================================================================================
	// User ID Functions From mydb.UserInfo
	void addUserIDsRangeToList(List<int>^ lst)
	{
		userIDList = gcnew List<int>();
		userIDList->AddRange(lst);
	}
	List<int>^ returnUserIDList()
	{
		return userIDList;
	}
//=================================================================================================================================================
	// Username Functions From mydb.UserInfo
	void addUsernamesToList(List<String^>^ lst)
	{
		usernameList = gcnew List<String^>();
		usernameList->AddRange(lst);
	}
	List<String^>^ returnUsernameList()
	{
		return usernameList;
	}
//=================================================================================================================================================
	// User First Name Functions From mydb.UserInfo
	void addFirstNamesRangeToList(List<String^>^ lst)
	{
		firstNameList = gcnew List<String^>();
		firstNameList->AddRange(lst);
	}
	List<String^>^ returnFirstNameList()
	{
		return firstNameList;
	}
//=================================================================================================================================================
	// User Last Name Functions From mydb.UserInfo
	void addLastNamesRangeToList(List<String^>^ lst)
	{
		lastNameList = gcnew List<String^>();
		lastNameList->AddRange(lst);
	}
	List<String^>^ returnLastNameList()
	{
		return lastNameList;
	}
//=================================================================================================================================================
	// User Email Functions From mydb.UserInfo
	void addEmailsRangeToList(List<String^>^ lst)
	{
		emailList = gcnew List<String^>();
		emailList->AddRange(lst);
	}
	List<String^>^ returnEmailList()
	{
		return emailList;
	}
//=================================================================================================================================================
	// User First and Last Name of Person Who Logs In
	void addfname(String^ name)
	{
		fname = name;
	}
	String^ returnfname()
	{
		return fname;
	}
	void addlname(String^ name)
	{
		lname = name;
	}
	String^ returnlname()
	{
		return lname;
	}
//=================================================================================================================================================
};