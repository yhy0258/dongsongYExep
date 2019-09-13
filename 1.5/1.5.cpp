#include "pch.h"

using namespace System;

double volume(double r)     //计算出圆球的体积。

{

	return  Math::PI * r * r * r * 4.0 / 3.0;

}
//函数重载
double volume(double r, double h)     //计算出圆柱的体积。

{

	return  Math::PI * r * r * h;

}



int main(array<System::String ^> ^args)
{
	double r, h, dResult;//定义变量

	Console::WriteLine("请输入圆的半径r：");

	r = Int32::Parse(Console::ReadLine());

	Console::WriteLine("再输入圆柱的高度h：");

	h = Int32::Parse(Console::ReadLine());

	dResult = volume(r);//根据形参匹配为圆球体积的volume函数

	Console::WriteLine("圆球的体积为: {0}", dResult.ToString());

	dResult = volume(r, h);//根据形参匹配为圆柱体积的volume函数

	Console::WriteLine("圆柱的体积为: {0}", dResult.ToString());

	Console::Read();//暂停

	return 0;
}
