#include "pch.h"

using namespace System;

//引用类
ref  class Stud

{

	int no;  //学号

	System::String^ name;//姓名

	array<String^>^ KCMC;//课程名称

	array<int>^ KCCJ;//课程成绩

public:

	Stud(int n, String^ na, int cj1, int cj2, int cj3, int cj4, int cj5)

	{

		no = n;

		name = na;

		KCMC = gcnew array<String^>{ "语文", "数学", "物理", "化学", "英语" };

		KCCJ = gcnew array<int>(5);

		KCCJ[0] = cj1; KCCJ[1] = cj2; KCCJ[2] = cj3;  KCCJ[3] = cj4; KCCJ[4] = cj5;

	}



public:

	property String^ default[int]

	{

		String ^ get(int index)

		{
		return name[index];

		}

	}

		property int  CJ[int]

	{

		int get(int index)

		{


		}

		void set(int index,int deg)

		{

		
		}

	}

		void disp()

	{

		Console::WriteLine(L"{0,-4}{1,-6}{2,5},{3,5},{4,5},{5,5},{6,5}",

			no, name, CJ[0], CJ[1], CJ[2], CJ[3], CJ[4]);

	}

};

int main(array<System::String^>^ args)

{

	Stud s1(1, "张三", 60, 70, 80, 90, 87);

	Stud s2(2, "李四", 65, 75, 85, 95, 96);

	Stud^ s3 = gcnew Stud(3, "王五", 63, 73, 83, 93, 83);

	//修改属性值

	s1.CJ[0] = 76; s3->CJ[0] = 80;

	Console::WriteLine(L"学号 姓名    {0,-4}{1,-4}{2,-4}{3,-4}{4,-4}",

		s1[0], s1[1], s2[2], s3[3], s3[4]);

	s1.disp();

	s2.disp();

	s3->disp();

	return 0;

}