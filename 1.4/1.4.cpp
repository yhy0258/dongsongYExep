#include "pch.h"

using namespace System;

//最大值函数
int max(int a,int b, int c=-10000, int m=10000)
{
	m = a > b ? a : b;//先比较其中两个
	m = m > c ? m : c;//再比较前两个较大者和最后一个
	return m;//返回最大值
}

int main(array<System::String ^> ^args)
{
	int m, a, b, c;//声明变量，临时变量、三个用于比较的变量

	Console::WriteLine(L"请输入三个整数");

	Console::WriteLine(L"第一个整数a");

	a = Int32::Parse(Console::ReadLine());//将读取的字符串转换为整型

	Console::WriteLine(L"第二个整数b");

	b = Int32::Parse(Console::ReadLine());

	Console::WriteLine(L"第三个整数c");

	c = Int32::Parse(Console::ReadLine());

	m = max(a, b, c);//输入三个参数调用函数

	Console::WriteLine("({1},{2},{3}) 三个数中最大数为{0}", m, a, b, c);

	m = max(a, b);//输两个个参数调用函数

	Console::WriteLine("({0},{1}) 二个数中最大数为{2}\n", a, b, m);

	m = max(b, c);

	Console::WriteLine("({1},{2}) 二个数中最大数为{0}\n", m, b, c);

	Console::Read();//暂停

	return 0;
}
