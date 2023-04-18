#pragma once
using namespace System;
using namespace System::Collections::Generic;
// User Class - Stores and sends the information of all known users.
public ref class User
{
	// Information of all known users are designated private as a form of data hiding.
private: 
	List<int>^ userIDList;	
	List<String^>^ usernameList;		
	List<String^>^ firstNameList;
	List<String^>^ lastNameList;
	List<String^>^ emailList;
	String^ fname;
	String^ lname;

	// Public Functions - No data manipulation functions - All functions are either to store or send the data into their respective lists.
public:
//==================================================== User ID Functions From mydb.UserInfo ====================================================

	// addUserIDsRangeToList - Function is to store the UserIDs into userIDList.
	void addUserIDsRangeToList(List<int>^ lst)
	{
		userIDList = gcnew List<int>();
		userIDList->AddRange(lst);
	}

	// returnUserIDList - Function to send the userIDList where it is needed.
	List<int>^ returnUserIDList()
	{
		return userIDList;
	}

//================================================= Username Functions From mydb.UserInfo ==========================================================

	// addUsernamesToList - Function is to store the Usernames into usernameList.
	void addUsernamesToList(List<String^>^ lst)
	{
		usernameList = gcnew List<String^>();
		usernameList->AddRange(lst);
	}

	// returnUsernameList - Function to send the usernameList where it is needed.
	List<String^>^ returnUsernameList()
	{
		return usernameList;
	}

//================================================= User First Name Functions From mydb.UserInfo ===================================================

	// addFirstNamesRangeToList - Function is to store the First Names into firstNameList.
	void addFirstNamesRangeToList(List<String^>^ lst)
	{
		firstNameList = gcnew List<String^>();
		firstNameList->AddRange(lst);
	}

	// returnFirstNameList - Function to send firstNameList where it is needed.
	List<String^>^ returnFirstNameList()
	{
		return firstNameList;
	}

//================================================= User Last Name Functions From mydb.UserInfo ====================================================
		
	// addLastNamesRangeToList - Function is to store the First Names into lastNameList.
	void addLastNamesRangeToList(List<String^>^ lst)
	{
		lastNameList = gcnew List<String^>();
		lastNameList->AddRange(lst);
	}

	// returnLastNameList - Function to send lastNameList where it is needed.
	List<String^>^ returnLastNameList()
	{
		return lastNameList;
	}

//================================================= User Email Functions From mydb.UserInfo ========================================================

	// addEmailsRangeToList - Function is to store the Emails into emailList.
	void addEmailsRangeToList(List<String^>^ lst)
	{
		emailList = gcnew List<String^>();
		emailList->AddRange(lst);
	}

	// returnEmailList - Function to send emailList where it is needed.
	List<String^>^ returnEmailList()
	{
		return emailList;
	}

//================================================= User First and Last Name of Person Who Logs In =================================================

	// addfname - Function to store the First Name of the person who signed in.
	void addfname(String^ name)
	{
		fname = name;
	}
	// returnfname - Function to send fname where it is needed.
	String^ returnfname()
	{
		return fname;
	}

	// addlname - Function to store the Last Name of the person who signed in.
	void addlname(String^ name)
	{
		lname = name;
	}
	// returnlname - Function to send the lname where it is needed.
	String^ returnlname()
	{
		return lname;
	}
//=================================================================================================================================================
};