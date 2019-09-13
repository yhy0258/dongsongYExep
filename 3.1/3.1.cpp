#include "pch.h"

#include "stdlib.h"

using namespace System;

//定义引用类立方体类Cube
ref class Cube

{
	//私有类型属性
private:

	double Length,  Width, Volume,S;// 长,,宽和体积、面积

	initonly double Heigt; //高

	literal double p = 0.9;//密度

	//公有类型属性
public:
	// 显式构造函数
	Cube() : Length(0), Width(0), Heigt(0)//构造函数重载

	{

		Volume = Length * Width * Heigt;

		Console::WriteLine(L"默认构造函数，体积为：{0}", Volume);//显示构造函数被调用的时机

	}

	Cube(double l, double w, double h) : Length(l), Width(w), Heigt(h)//构造函数重载

	{

		Volume = Length * Width * Heigt;

		Console::WriteLine(L"有参构造函数，体积为：{0}", Volume);

	}

	Cube(double l, double w) :Length(l), Width(w) //构造函数重载
	{
		S = Length * Width;
		Console::WriteLine(L"有参构造函数，面积为：{0}",S);
	}
	Cube(Cube^ cube)//构造函数重载

	{//复制构造函数:左起的第一个参数是引用类的跟踪句柄



		Length = cube->Length;

		Width = cube->Width;

		Heigt = cube->Heigt;

		Volume = Length * Width * Heigt; ;

		Console::WriteLine(L"A3个参数的跟踪句柄复制构造函数，体积为：{0}", Volume);

	}

	Cube(Cube% cube)//构造函数重载

	{  //复制构造函数:左起的第一个参数是引用类的引用对象



		Length = cube.Length;

		Width = cube.Width;

		Heigt = cube.Heigt;

		Volume = Length * Width * Heigt; ;

		Console::WriteLine(L"B3个参数的引用复制构造函数，体积为：{0}", Volume);

	}

	//Cube(double l, double w) : Length(l), Width(w)//构造函数重载

	//{

	//	Volume = Length * Width;

	//	Heigt = 2 * Heigt;  //可以

	//	Console::WriteLine(L"2个参数的构造函数，面积为：{0}", Volume);

	//}

	//void ShowQua(void)

	//{

	//	Heigt = 2 * Heigt; //不可以

	//	Console::WriteLine("这个立方体的质量为：{0}", Volume * p);

	//}
	//析构函数
	~Cube()

	{

		Console::WriteLine(L"调用析造函数，体积为：{0 }", Volume);//显示析构函数被调用的时机

	}
	void ShowRes(void)

	{

		Console::WriteLine("这个立方体的体积为：{0}", Volume);

	}

	void ShowQua(void)

	{

		Console::WriteLine("这个立方体的质量为：{0}", Volume * p);

	}
	
	
	//终结器函数
	!Cube()

	{

		Console::WriteLine(L"调用终结函数，体积为：{0}", Volume);//显示析构函数被调用的时机

	}

};

int main(array<System::String^>^ args)

{
	//堆声明
	Cube^ cube1 = gcnew Cube;// A:调用无参构造函数

	Cube^ cube2 = gcnew Cube(4, 5, 6);// B:调用有参构造函数
	/*调用函数*/
	cube2->ShowRes();
	//栈声明
	/*Cube  a, b(2, 3, 4);*/

	//Cube  c(4, 5);
	///*调用重载有参构造函数*/
	//Cube^ d = gcnew Cube(5, 6);//两个参数的重载

	//Cube^ cube3 = gcnew Cube(cube2);//对象参数的重载

	//Cube^ cube4 = gcnew Cube(*cube2);//对象指针参数的重载

	//Cube cube5(cube2);

	//Cube^ cube6 = gcnew Cube(b);

	//Cube cube7(b);

	//delete cube2;

	//cube2->ShowQua();

	system("pause");

	cube2->~Cube();

	return 0;

}