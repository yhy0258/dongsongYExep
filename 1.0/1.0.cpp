// regex_parse.cpp
// compile with: /clr
#include"pch.h"
using namespace System;
using namespace System::Collections;

value class MyClass
{
public:
	try
	{
		MyClass();
	}
	catch (const std::exception&)
	{

	}
	
	~MyClass();

private:

};

MyClass::MyClass()
{
}

MyClass::~MyClass()
{
}

int main(array<System::String^>^ args)
{
	/*array<int>^ num = { 1, 3, 5 };
	ArrayList^ arr = gcnew ArrayList();
	for (int i = 0; i < num->Length; i++)
		arr->Add(num[i]);
	arr->Insert(1, 4);
	Console::WriteLine(arr[2]);*/
	MyClass^ class1 = gcnew MyClass();
	return 0;
}