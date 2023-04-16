#pragma once
#include "DatabaseClass.h"
using namespace System;
using namespace System::Collections::Generic;

public ref class PriorityList
{
private:
	List<int>^ priorityID;
	List<String^>^ priorityName;
	List<String^>^ priorityDescription;

public:
//=================================================================================================================================================
	void addPriorityIDsRangeToList(List<int>^ lst)
	{
		priorityID = gcnew List<int>();
		priorityID->AddRange(lst);
	}
	List<int>^ returnPriorityIDList()
	{
		return priorityID;
	}
//=================================================================================================================================================
	void addPriorityNamesRangeToList(List<String^>^ lst)
	{
		priorityName = gcnew List<String^>();
		priorityName->AddRange(lst);
	}
	List<String^>^ returnPriorityNameList()
	{
		return priorityName;
	}
//=================================================================================================================================================
	void addPriorityDescriptionRangeToList(List<String^>^ lst)
	{
		priorityDescription = gcnew List<String^>();
		priorityDescription->AddRange(lst);
	}
	List<String^>^ returnPriorityDescriptionList()
	{
		return priorityDescription;
	}
//=================================================================================================================================================
};