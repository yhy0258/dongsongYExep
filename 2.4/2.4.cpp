#include "pch.h"
#include "stdlib.h"

using namespace System;

int main(array<System::String^>^ args)

{

	String^ delimStr = " ,";//�Կո�򶺺ŷָ������︴��ʱ��ȱ�ٿո�����´���

	array<Char>^ delimiter = delimStr->ToCharArray();//ת��Ϊ�����ַ�

	String^ words;// һ���÷��ŷָ�num����ֵ

	array<String^>^ split = nullptr;//���飬���ڴ����ֺ���ַ���

	array <int>^ data = gcnew array<int>(10);

	int num, i, sum;

	while (1)

	{

		Console::WriteLine(L"���������ݵĸ���:");

		num = int::Parse(Console::ReadLine());//�ַ�������ת��Ϊ����

		if (num == 0) break;//���������ݣ���������

		Console::WriteLine(L"������{0}����,�м��ö��Ż�ո�ָ�:", num);

		words = Console::ReadLine();//��ȡ�ַ���

		split = words->Split(delimiter, num);//���Ϊnum���Ӵ�����delimiter�ַ�����Ϊ�ֽ���� ��numΪ�������

		i = 0;

		for each (String ^ s in split)

		{

			Console::WriteLine("[{0}]", s);//����ַ����������s�ַ���

			data[i++] = Convert::ToInt32(s);//��s�ַ���ת��Ϊ���Ͳ����浽��������

		}
		//�����������
		for (i = 0; i < num; i++)

			Console::Write("-{0}-", data[i]);

		Console::WriteLine();
	}
	
	system("pause");

	return 0;

}