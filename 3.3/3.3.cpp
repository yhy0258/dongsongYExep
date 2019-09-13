#include "pch.h"

using namespace System;

ref  class Stud

{

	int no, deg;//学号、成绩

	System::String^ name; //姓名

public:

	static int sum;

	static int num; // 静态属性

public:

	property double Score {

		double get() { return deg; }

		void set(double d) {

			deg = d;

			if (d < 0)deg = 0;

			if (d > 100) deg = 100;

		}

	}Stud(int n, System::String^ na, int d)

	{
		no = n; deg = d;

		name = na;

		sum += d;

		num++;

	}

	~Stud()

	{
		sum -= deg;

		num--;

	}

	static double avg() { return sum / num; }

	void disp() { Console::WriteLine(L"{0,-5} {1,-8} {2,3}", no, name, deg); }

	void dispn() { Console::WriteLine(L"人数 = {0}", num); }
};

int main(array<System::String ^> ^args)
{
	Stud s1(1, "李四", 89), s2(2, "陈可", 78), s3(3, "张半", 96);

	Stud^ s4 = gcnew Stud(4, "王五", 90);

	Console::WriteLine(L"学号  姓名      成绩");

	s1.disp();

	s2.disp();

	s3.disp();

	s4->disp();

	Console::WriteLine(L"总分 = {0}， 人数 = {1} ，平均分 = {2}", Stud::sum, s1.num, s4->avg());

	delete s4;

	Console::WriteLine(L"总分 = {0}， 人数 ={1} ，平均分 = {2}", Stud::sum, s1.num, s4->avg());

	return 0;
}
