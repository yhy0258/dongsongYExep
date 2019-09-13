#include "pch.h"

using namespace System;

//输出函数
void inputdata(array<int>^ Heighs, array<String^>^ Names)

{
	/*循环输入所有人的姓名和身高*/
	for (int i = 0; i < Names->Length; i++)

	{

		Console::Write(L"请输入第{0}个姓名：", i + 1);

		Names[i] = Console::ReadLine();

		Console::Write(L"请输入第{0}个身高：", i + 1);

		Heighs[i] = int::Parse(Console::ReadLine());

	}

}

//纵向输出
void outdata(array<int>^ Heighs1, array<String^>^& Names)

{

	Console::WriteLine(L"\n按身高排序后的身高及学员姓名:");

	/*按制表格式循环输出所有人的姓名和身高*/

	for (int i = 0; i < Heighs1->Length; i++) {
		Console::WriteLine(L"\t{0}\t{1}", Heighs1[i], Names[i]);
	}
	Console::WriteLine();

}
//横向输出
//void outdata(array<int>^ Heighs1, array<String^>^& Names)
//
//{
//
//	Console::WriteLine(L"\n按身高排序后的身高及学员姓名:");
//
//	/*按制表格式循环输出所有人的姓名和身高*/
//	for each (int Heigh in Heighs1)
//
//		Console::Write(L"\t{0}", Heigh);
//
//	Console::WriteLine();
//
//	for each (String ^ name in Names)
//
//		Console::Write(L"\t{0}", name);
//
//	Console::WriteLine();
//
//}


int main(array<System::String^>^ args)

{
	/*声明字符串数组、整形数组*/
	array<String^>^ Names=gcnew array<String^>(9);

	array<int>^ Heighs = gcnew array<int>(9);

	inputdata(Heighs, Names);   //数据的输入

	Array::Sort(Heighs, Names); // 对数组按第一个参数进行排序 按身高降序排列

	//反转为升序排列
	Array::Reverse(Heighs);

	Array::Reverse(Names);

	outdata(Heighs, Names); //排序后输出结果

	Console::WriteLine("中间身高的学生姓名是{0},身高是{1}", Names[Names->Length / 2], Heighs[Heighs->Length / 2]);
	return 0;

}

