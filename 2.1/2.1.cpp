#include "pch.h"
#include"stdlib.h"
using namespace System;


//void alter(double *a, double *b) //ʹ��ָ��ķ�ʽʵ�ַŴ����ĺ���
//
//{
//
//	double *z = a;      //��������зŴ�
//
//	*a = *a + *b;
//
//	*b = *z * *b;
//
//}

//void alter(double& a, double& b) //ʹ�ñ���C++���õķ�ʽʵ�ַŴ����ĺ���
//
//{
//
//	double z = a;      //��������зŴ�
//
//	a = a + b;
//
//	b = z * b;
//
//}

//void alter(double% a, double% b) //ʹ��C++/CLI�������õķ�ʽʵ�ַŴ����ĺ���
//
//{
////	��������зŴ�
//	double z = a;      //��ʱ���a��ֵ
//
//	a = a + b;
//
//	b = z * b;
//
//}

void alter(double^ a, double^ b) //ʹ�þ���ķ�ʽʵ�ַŴ����ĺ���

{
	//��������зŴ�
	double z = *a;      

	*a = *a + *b;

	*b = z * *b;

}

void Swap(double^ x, double^ y)  //�������ĺ���

{

	double temp = *x;//����������
	*x = *y;
	*y = temp;
}

int main(array<System::String^>^ args)

{
	double^ x = gcnew double();
	double^ y = gcnew double();
	Console::WriteLine("������x��ֵ");
	*x= Double::Parse(Console::ReadLine());//����x����
	Console::WriteLine("������y��ֵ");
	*y = Double::Parse(Console::ReadLine());//����y����;

	while (*x != 0.0 && *y != 0.0)  //��������ͬʱΪ0ʱ���˳�  

	{

		/*alter(&x, &y);    */          //ʹ�÷Ŵ���,ָ��
		alter(x, y);//�Ŵ���
		Swap(x, y);    //������

		Console::WriteLine("x is {0},\ny is {1}.", x, y);    //����������������ֵ

		Console::WriteLine("������x��ֵ");

		x = Double::Parse(Console::ReadLine());//����x����
		Console::WriteLine("������y��ֵ");

		y = Double::Parse(Console::ReadLine());//����y����


	}

	system("pause");

	return 0;

}

