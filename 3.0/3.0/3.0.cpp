#include "pch.h"

using namespace System;

class CVideo {
public:
	char format[6];//��Ƶ��ʽ��׺
	double time;//��Ƶʱ��
	unsigned int level;//��Ƶ������
	int vol;//��Ƶ����
	int speed;//��Ƶ�����ٶ�
	unsigned stat;//��Ƶ״̬
	char title[32];//��Ƶ����
	int width;//��Ƶ���
	int heigth;//��Ƶ�߶�
	double click;//��Ƶ������



	CVideo() {
		Console::WriteLine("{0", "���캯�������ˡ�");
	}
	~CVideo() {
		Console::WriteLine("{0", "�������������ˡ�");
	}
	void start();//��Ƶ��ʼ
	void stop();//��Ƶ��ͣ
	void step();//��Ƶ���
	void speedChange();//��Ƶ�����ٶ�
	void vodChange();//����
	void share();//��Ƶת��
	void shortCut();//��Ƶ��ͼ


};

int main(array<System::String ^> ^args)
{
    return 0;
}
