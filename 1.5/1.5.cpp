#include "pch.h"

using namespace System;

double volume(double r)     //�����Բ��������

{

	return  Math::PI * r * r * r * 4.0 / 3.0;

}
//��������
double volume(double r, double h)     //�����Բ���������

{

	return  Math::PI * r * r * h;

}



int main(array<System::String ^> ^args)
{
	double r, h, dResult;//�������

	Console::WriteLine("������Բ�İ뾶r��");

	r = Int32::Parse(Console::ReadLine());

	Console::WriteLine("������Բ���ĸ߶�h��");

	h = Int32::Parse(Console::ReadLine());

	dResult = volume(r);//�����β�ƥ��ΪԲ�������volume����

	Console::WriteLine("Բ������Ϊ: {0}", dResult.ToString());

	dResult = volume(r, h);//�����β�ƥ��ΪԲ�������volume����

	Console::WriteLine("Բ�������Ϊ: {0}", dResult.ToString());

	Console::Read();//��ͣ

	return 0;
}
