#include "pch.h"

using namespace System;

int main(array<System::String ^> ^args)
{
	double r, area;                       // ��������,Բ�İ뾶�����

	String^ strRadius;                    // ����һ���ַ�������

	Console::Write("����Բ�İ뾶��");     // ��ʾ��ʾ��Ϣ

	strRadius = Console::ReadLine();      // ��ȡ�Ӽ�����ַ���

	r = Double::Parse(strRadius);       // ת����double��ֵ�����ڼ���

	area = Math::PI * r * r;                  // �������

	Console::WriteLine("Բ���ܳ�Ϊ��{0 }\nԲ�����Ϊ��{1}",//{0}�ڲ����ж���Ŀո�

		(2.0 * Math::PI * r).ToString(),

		area.ToString());             // ���Բ���ܳ������

	return 0;
	
}
