#include "pch.h"
#include"stdlib.h"
using namespace System;


//void alter(double *a, double *b) //使用指针的方式实现放大器的函数
//
//{
//
//	double *z = a;      //按规则进行放大
//
//	*a = *a + *b;
//
//	*b = *z * *b;
//
//}

//void alter(double& a, double& b) //使用本地C++引用的方式实现放大器的函数
//
//{
//
//	double z = a;      //按规则进行放大
//
//	a = a + b;
//
//	b = z * b;
//
//}

//void alter(double% a, double% b) //使用C++/CLI跟踪引用的方式实现放大器的函数
//
//{
////	按规则进行放大
//	double z = a;      //临时存放a的值
//
//	a = a + b;
//
//	b = z * b;
//
//}

void alter(double^ a, double^ b) //使用句柄的方式实现放大器的函数

{
	//按规则进行放大
	double z = *a;      

	*a = *a + *b;

	*b = z * *b;

}

void Swap(double^ x, double^ y)  //交换器的函数

{

	double temp = *x;//交换两个数
	*x = *y;
	*y = temp;
}

int main(array<System::String^>^ args)

{
	double^ x = gcnew double();
	double^ y = gcnew double();
	Console::WriteLine("请输入x的值");
	*x= Double::Parse(Console::ReadLine());//读入x数据
	Console::WriteLine("请输入y的值");
	*y = Double::Parse(Console::ReadLine());//读入y数据;

	while (*x != 0.0 && *y != 0.0)  //当两个数同时为0时就退出  

	{

		/*alter(&x, &y);    */          //使用放大器,指针
		alter(x, y);//放大器
		Swap(x, y);    //交换器

		Console::WriteLine("x is {0},\ny is {1}.", x, y);    //输出经交换器后的数值

		Console::WriteLine("请输入x的值");

		x = Double::Parse(Console::ReadLine());//读入x数据
		Console::WriteLine("请输入y的值");

		y = Double::Parse(Console::ReadLine());//读入y数据


	}

	system("pause");

	return 0;

}

