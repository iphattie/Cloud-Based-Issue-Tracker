#pragma once
using namespace System;
using namespace System::Collections::Generic;

public ref class StatusList
{
private:
	List<int>^ StatusID;
	List<String^>^ StatusName;
	List<String^>^ StatusDescription;

public:
//=================================================================================================================================================
	void addStatusIDsRangeToList(List<int>^ lst)
	{
		StatusID = gcnew List<int>();
		StatusID->AddRange(lst);
	}
	List<int>^ returnStatusIDList()
	{
		return StatusID;
	}
//=================================================================================================================================================
	void addStatusNamesRangeToList(List<String^>^ lst)
	{
		StatusName = gcnew List<String^>();
		StatusName->AddRange(lst);
	}
	List<String^>^ returnStatusNamesList()
	{
		return StatusName;
	}
//=================================================================================================================================================
	void addStatusDescriptionRangeToList(List<String^>^ lst)
	{
		StatusDescription = gcnew List<String^>();
		StatusDescription->AddRange(lst);
	}
	List<String^>^ returnStatusDescriptionsList()
	{
		return StatusDescription;
	}
//=================================================================================================================================================
};