#include "pch.h"

using namespace System;

//�������
void inputdata(array<int>^ Heighs, array<String^>^ Names)

{
	/*ѭ�����������˵����������*/
	for (int i = 0; i < Names->Length; i++)

	{

		Console::Write(L"�������{0}��������", i + 1);

		Names[i] = Console::ReadLine();

		Console::Write(L"�������{0}����ߣ�", i + 1);

		Heighs[i] = int::Parse(Console::ReadLine());

	}

}

//�������
void outdata(array<int>^ Heighs1, array<String^>^& Names)

{

	Console::WriteLine(L"\n�������������߼�ѧԱ����:");

	/*���Ʊ��ʽѭ����������˵����������*/

	for (int i = 0; i < Heighs1->Length; i++) {
		Console::WriteLine(L"\t{0}\t{1}", Heighs1[i], Names[i]);
	}
	Console::WriteLine();

}
//�������
//void outdata(array<int>^ Heighs1, array<String^>^& Names)
//
//{
//
//	Console::WriteLine(L"\n�������������߼�ѧԱ����:");
//
//	/*���Ʊ��ʽѭ����������˵����������*/
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
	/*�����ַ������顢��������*/
	array<String^>^ Names=gcnew array<String^>(9);

	array<int>^ Heighs = gcnew array<int>(9);

	inputdata(Heighs, Names);   //���ݵ�����

	Array::Sort(Heighs, Names); // �����鰴��һ�������������� ����߽�������

	//��תΪ��������
	Array::Reverse(Heighs);

	Array::Reverse(Names);

	outdata(Heighs, Names); //�����������

	Console::WriteLine("�м���ߵ�ѧ��������{0},�����{1}", Names[Names->Length / 2], Heighs[Heighs->Length / 2]);
	return 0;

}

