#include "pch.h"

#include "stdlib.h"

using namespace System;

//������������������Cube
ref class Cube

{
	//˽����������
private:

	double Length,  Width, Volume,S;// ��,,�����������

	initonly double Heigt; //��

	literal double p = 0.9;//�ܶ�

	//������������
public:
	// ��ʽ���캯��
	Cube() : Length(0), Width(0), Heigt(0)//���캯������

	{

		Volume = Length * Width * Heigt;

		Console::WriteLine(L"Ĭ�Ϲ��캯�������Ϊ��{0}", Volume);//��ʾ���캯�������õ�ʱ��

	}

	Cube(double l, double w, double h) : Length(l), Width(w), Heigt(h)//���캯������

	{

		Volume = Length * Width * Heigt;

		Console::WriteLine(L"�вι��캯�������Ϊ��{0}", Volume);

	}

	Cube(double l, double w) :Length(l), Width(w) //���캯������
	{
		S = Length * Width;
		Console::WriteLine(L"�вι��캯�������Ϊ��{0}",S);
	}
	Cube(Cube^ cube)//���캯������

	{//���ƹ��캯��:����ĵ�һ��������������ĸ��پ��



		Length = cube->Length;

		Width = cube->Width;

		Heigt = cube->Heigt;

		Volume = Length * Width * Heigt; ;

		Console::WriteLine(L"A3�������ĸ��پ�����ƹ��캯�������Ϊ��{0}", Volume);

	}

	Cube(Cube% cube)//���캯������

	{  //���ƹ��캯��:����ĵ�һ������������������ö���



		Length = cube.Length;

		Width = cube.Width;

		Heigt = cube.Heigt;

		Volume = Length * Width * Heigt; ;

		Console::WriteLine(L"B3�����������ø��ƹ��캯�������Ϊ��{0}", Volume);

	}

	//Cube(double l, double w) : Length(l), Width(w)//���캯������

	//{

	//	Volume = Length * Width;

	//	Heigt = 2 * Heigt;  //����

	//	Console::WriteLine(L"2�������Ĺ��캯�������Ϊ��{0}", Volume);

	//}

	//void ShowQua(void)

	//{

	//	Heigt = 2 * Heigt; //������

	//	Console::WriteLine("��������������Ϊ��{0}", Volume * p);

	//}
	//��������
	~Cube()

	{

		Console::WriteLine(L"�������캯�������Ϊ��{0 }", Volume);//��ʾ�������������õ�ʱ��

	}
	void ShowRes(void)

	{

		Console::WriteLine("�������������Ϊ��{0}", Volume);

	}

	void ShowQua(void)

	{

		Console::WriteLine("��������������Ϊ��{0}", Volume * p);

	}
	
	
	//�ս�������
	!Cube()

	{

		Console::WriteLine(L"�����սắ�������Ϊ��{0}", Volume);//��ʾ�������������õ�ʱ��

	}

};

int main(array<System::String^>^ args)

{
	//������
	Cube^ cube1 = gcnew Cube;// A:�����޲ι��캯��

	Cube^ cube2 = gcnew Cube(4, 5, 6);// B:�����вι��캯��
	/*���ú���*/
	cube2->ShowRes();
	//ջ����
	/*Cube  a, b(2, 3, 4);*/

	//Cube  c(4, 5);
	///*���������вι��캯��*/
	//Cube^ d = gcnew Cube(5, 6);//��������������

	//Cube^ cube3 = gcnew Cube(cube2);//�������������

	//Cube^ cube4 = gcnew Cube(*cube2);//����ָ�����������

	//Cube cube5(cube2);

	//Cube^ cube6 = gcnew Cube(b);

	//Cube cube7(b);

	//delete cube2;

	//cube2->ShowQua();

	system("pause");

	cube2->~Cube();

	return 0;

}