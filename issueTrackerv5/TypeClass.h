#pragma once
using namespace System;
using namespace System::Collections::Generic;

public ref class TypeList
{
private:
	List<int>^ TypeID;
	List<String^>^ TypeName;
	List<String^>^ TypeDescription;

public:
//=================================================================================================================================================
	void addTypeIDsRangeToList(List<int>^ lst)
	{
		TypeID = gcnew List<int>();
		TypeID->AddRange(lst);
	}
	List<int>^ returnTypeIDList()
	{
		return TypeID;
	}
//=================================================================================================================================================
	void addTypeNamesRangeToList(List<String^>^ lst)
	{
		TypeName = gcnew List<String^>();
		TypeName->AddRange(lst);
	}
	List<String^>^ returnTypeNameList()
	{
		return TypeName;
	}
//=================================================================================================================================================
	void addTypeDescriptionRangeToList(List<String^>^ lst)
	{
		TypeDescription = gcnew List<String^>();
		TypeDescription->AddRange(lst);
	}
	List<String^>^ returnTypeDescriptionList()
	{
		return TypeDescription;
	}
//=================================================================================================================================================
};