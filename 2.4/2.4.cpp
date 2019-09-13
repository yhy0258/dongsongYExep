#include "pch.h"
#include "stdlib.h"

using namespace System;

int main(array<System::String^>^ args)

{

	String^ delimStr = " ,";//以空格或逗号分隔，这里复制时会缺少空格而导致错误，

	array<Char>^ delimiter = delimStr->ToCharArray();//转换为单个字符

	String^ words;// 一组用符号分隔num个数值

	array<String^>^ split = nullptr;//数组，用于储存拆分后的字符串

	array <int>^ data = gcnew array<int>(10);

	int num, i, sum;

	while (1)

	{

		Console::WriteLine(L"请输入数据的个数:");

		num = int::Parse(Console::ReadLine());//字符串类型转换为整型

		if (num == 0) break;//不输入数据，结束程序

		Console::WriteLine(L"请输入{0}个数,中间用逗号或空格分隔:", num);

		words = Console::ReadLine();//读取字符串

		split = words->Split(delimiter, num);//拆分为num个子串，以delimiter字符数组为分解符， 以num为拆分数。

		i = 0;

		for each (String ^ s in split)

		{

			Console::WriteLine("[{0}]", s);//输出字符串数组里的s字符串

			data[i++] = Convert::ToInt32(s);//将s字符串转换为整型并储存到整型数组

		}
		//输出整型数组
		for (i = 0; i < num; i++)

			Console::Write("-{0}-", data[i]);

		Console::WriteLine();
	}
	
	system("pause");

	return 0;

}