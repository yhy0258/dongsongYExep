#include "pch.h"

using namespace System;

int main(array<System::String ^> ^args)
{
	double r, area;                       // 声明变量,圆的半径和面积

	String^ strRadius;                    // 声明一个字符串变量

	Console::Write("输入圆的半径：");     // 显示提示信息

	strRadius = Console::ReadLine();      // 获取从键入的字符串

	r = Double::Parse(strRadius);       // 转换成double数值，用于计算

	area = Math::PI * r * r;                  // 计算面积

	Console::WriteLine("圆的周长为：{0 }\n圆的面积为：{1}",//{0}内不能有多余的空格。

		(2.0 * Math::PI * r).ToString(),

		area.ToString());             // 输出圆的周长和面积

	return 0;
	
}
