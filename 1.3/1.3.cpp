#include "pch.h"

using namespace System;

int main(array<System::String ^> ^args)
{
	

	double r , h , dResult;

	Console::WriteLine("������Բ�İ뾶��");

	r = Double::Parse(Console::ReadLine());

	Console::WriteLine("������Բ���ĸߣ�");

	h = Double::Parse(Console::ReadLine());

	int nID=1;//ѡ��ţ���ʼ������ѭ��

	while(nID!=0){//ѭ�����

		Console::WriteLine("1--����Բ�ܳ�");//���ѡ����ʾ

		Console::WriteLine("2--����Բ���");

		Console::WriteLine("3--����Բ�����");

		Console::WriteLine("4--����Բ�����");

		Console::Write("��ѡ��<1..4>:������0�˳�");

		nID = Int32::Parse(Console::ReadLine());//����ѡ���
		
		switch (nID)//��֧���

		{
			//���ѡ���Ϊ1����ִֻ��case1����䣬��������ͬ��û����Ե�����������
		case 1:  dResult = Math::PI * r * 2.0;

			Console::WriteLine("Բ�ܳ�Ϊ: {0}", dResult.ToString());//ToString������������ת������doubleת��ΪString

			break;

		case 2:  dResult = Math::PI * r * r;

			Console::WriteLine("Բ���Ϊ: {0}", dResult.ToString());

			break;

		case 3:  dResult = Math::PI * r * r * r * 4.0 / 3.0;

			Console::WriteLine("Բ�����Ϊ: {0}", dResult.ToString());

			break;

		case 4:  dResult = Math::PI * r * r * h;

			Console::WriteLine("Բ�����Ϊ: {0}", dResult.ToString());

			break;
		}
	}
	return 0;
}
