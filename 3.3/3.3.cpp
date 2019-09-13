#include "pch.h"

using namespace System;

ref  class Stud

{

	int no, deg;//ѧ�š��ɼ�

	System::String^ name; //����

public:

	static int sum;

	static int num; // ��̬����

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

	void dispn() { Console::WriteLine(L"���� = {0}", num); }
};

int main(array<System::String ^> ^args)
{
	Stud s1(1, "����", 89), s2(2, "�¿�", 78), s3(3, "�Ű�", 96);

	Stud^ s4 = gcnew Stud(4, "����", 90);

	Console::WriteLine(L"ѧ��  ����      �ɼ�");

	s1.disp();

	s2.disp();

	s3.disp();

	s4->disp();

	Console::WriteLine(L"�ܷ� = {0}�� ���� = {1} ��ƽ���� = {2}", Stud::sum, s1.num, s4->avg());

	delete s4;

	Console::WriteLine(L"�ܷ� = {0}�� ���� ={1} ��ƽ���� = {2}", Stud::sum, s1.num, s4->avg());

	return 0;
}
