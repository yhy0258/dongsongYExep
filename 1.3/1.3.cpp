#include "pch.h"

using namespace System;

int main(array<System::String ^> ^args)
{
	

	double r , h , dResult;

	Console::WriteLine("请输入圆的半径：");

	r = Double::Parse(Console::ReadLine());

	Console::WriteLine("请输入圆柱的高：");

	h = Double::Parse(Console::ReadLine());

	int nID=1;//选择号，初始化进入循环

	while(nID!=0){//循环输出

		Console::WriteLine("1--计算圆周长");//输出选项提示

		Console::WriteLine("2--计算圆面积");

		Console::WriteLine("3--计算圆球体积");

		Console::WriteLine("4--计算圆柱体积");

		Console::Write("请选择<1..4>:或输入0退出");

		nID = Int32::Parse(Console::ReadLine());//输入选择号
		
		switch (nID)//分支输出

		{
			//如果选择号为1，则只执行case1的语句，其余数字同理，没有配对的数字则跳过
		case 1:  dResult = Math::PI * r * 2.0;

			Console::WriteLine("圆周长为: {0}", dResult.ToString());//ToString函数进行类型转换，将double转换为String

			break;

		case 2:  dResult = Math::PI * r * r;

			Console::WriteLine("圆面积为: {0}", dResult.ToString());

			break;

		case 3:  dResult = Math::PI * r * r * r * 4.0 / 3.0;

			Console::WriteLine("圆球体积为: {0}", dResult.ToString());

			break;

		case 4:  dResult = Math::PI * r * r * h;

			Console::WriteLine("圆柱体积为: {0}", dResult.ToString());

			break;
		}
	}
	return 0;
}
