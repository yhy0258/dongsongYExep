#include "pch.h"

using namespace System;

//���ֵ����
int max(int a,int b, int c=-10000, int m=10000)
{
	m = a > b ? a : b;//�ȱȽ���������
	m = m > c ? m : c;//�ٱȽ�ǰ�����ϴ��ߺ����һ��
	return m;//�������ֵ
}

int main(array<System::String ^> ^args)
{
	int m, a, b, c;//������������ʱ�������������ڱȽϵı���

	Console::WriteLine(L"��������������");

	Console::WriteLine(L"��һ������a");

	a = Int32::Parse(Console::ReadLine());//����ȡ���ַ���ת��Ϊ����

	Console::WriteLine(L"�ڶ�������b");

	b = Int32::Parse(Console::ReadLine());

	Console::WriteLine(L"����������c");

	c = Int32::Parse(Console::ReadLine());

	m = max(a, b, c);//���������������ú���

	Console::WriteLine("({1},{2},{3}) �������������Ϊ{0}", m, a, b, c);

	m = max(a, b);//���������������ú���

	Console::WriteLine("({0},{1}) �������������Ϊ{2}\n", a, b, m);

	m = max(b, c);

	Console::WriteLine("({1},{2}) �������������Ϊ{0}\n", m, b, c);

	Console::Read();//��ͣ

	return 0;
}
