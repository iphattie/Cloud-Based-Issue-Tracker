#pragma once
using namespace System;
using namespace System::Collections::Generic;

public ref class IssueList
{
private:
	List<int>^ issueListID;
	List<String^>^ issueListTitle;
	List<String^>^ issueListDescrip;
	List<String^>^ issueListDateCreated;
	List<int>^ issueListUserID;
	List<int>^ issueListTypeID;
	List<int>^ issueListPriorityID;
	List<int>^ issueListStatusID;

public:
//=================================================================================================================================================
	// Issue ID Functions From mydb.IssueList
	void addIssueIDRangeToList(List<int>^ lst)
	{
		issueListID = gcnew List<int>();
		issueListID->AddRange(lst);
	}
	List<int>^ returnIssueIDList()
	{
		return issueListID;
	}
//=================================================================================================================================================
	// Issue Title Functions From mydb.IssueList
	void addIssueTitleRangeToList(List<String^>^ lst)
	{
		issueListTitle = gcnew List<String^>();
		issueListTitle->AddRange(lst);
	}
	List<String^>^ returnIssueTitleList()
	{
		return issueListTitle;
	}
//=================================================================================================================================================
	// Issue Description Functions From mydb.IssueList
	void addIssueDescriptionRangeToList(List<String^>^ lst)
	{
		issueListDescrip = gcnew List<String^>();
		issueListDescrip->AddRange(lst);
	}
	List<String^>^ returnIssueDescriptionList()
	{
		return issueListDescrip;
	}
//=================================================================================================================================================
	// Issue Date Created Functions From mydb.IssueList
	void addIssueDateCreatedRangeToList(List<String^>^ lst)
	{
		issueListDateCreated = gcnew List<String^>();
		issueListDateCreated->AddRange(lst);
	}
	List<String^>^ returnIssueDateCreatedList()
	{
		return issueListDateCreated;
	}
//=================================================================================================================================================
	// Issue User ID Functions From mydb.IssueList
	void addIssueUserIDRangeToList(List<int>^ lst)
	{
		issueListUserID = gcnew List<int>();
		issueListUserID->AddRange(lst);
	}
	List<int>^ returnIssueUserIDList()
	{
		return issueListUserID;
	}
//=================================================================================================================================================
	// Issue Type ID Functions From mydb.IssueList
	void addIssueTypeIDRangeToList(List<int>^ lst)
	{
		issueListTypeID = gcnew List<int>();
		issueListTypeID->AddRange(lst);
	}
	List<int>^ returnIssueTypeIDList()
	{
		return issueListTypeID;
	}
//=================================================================================================================================================
	// Issue Priority ID Functions From mydb.IssueList
	void addIssuePriorityIDRangeToList(List<int>^ lst)
	{
		issueListPriorityID = gcnew List<int>();
		issueListPriorityID->AddRange(lst);
	}
	List<int>^ returnIssuePriorityIDList()
	{
		return issueListPriorityID;
	}
//=================================================================================================================================================
	//Issue Status ID Functions From mydb.IssueList
	void addIssueStatusIDRangeToList(List<int>^ lst)
	{
		issueListStatusID = gcnew List<int>();
		issueListStatusID->AddRange(lst);
	}
	List<int>^ returnIssueStatusIDList()
	{
		return issueListStatusID;
	}
//=================================================================================================================================================
};