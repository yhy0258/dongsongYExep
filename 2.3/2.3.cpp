#include "pch.h"
#include"stdlib.h"//system()
#include"time.h"//rand()

using namespace System;
void shuffle(int wDeck[4][13])//����ȫ0�Ķ�ά����

{  //ϴ��

	int r;

	int card, row, column;



	for (card = 1; card <= 52; card++)

	{
		//ѡ��52��λ���е�һ����֮��˳���ơ�
		r = rand();

		row = r % 4;

		r = rand();

		column = r % 13;


		/*����Ƿ��Ѿ����ú�֮��Ҫ���ƣ�����Ѿ�����������ѡ��λ��ֱ��ѡ��û�з��Ƶ�λ�á�*/
		while (wDeck[row][column] != 0)

		{  //�ѷ��ƣ��ٲ���

			r = rand();

			row = r % 4;

			r = rand();

			column = r % 13;

		}



		wDeck[row][column] = card;

	}

}


//ʵ�ַ��Ƶĺ���

void deal(int wDeck[4][13], array<String^>^ wFace, array<String^>^ wSuit, array<array<String^>^>^ wPai)

{  //����

	int card, row, column;

	Console::WriteLine(L"       A                      B                       C                       D");//��ʾ����

	//��˳��Ѱ���Ƶ�λ�ã���int����ӳ�䵽String���͵�wPai�����С�
	for (card = 1; card <= 52; card++)

	{
		for (row = 0; row <= 3; row++)

		{
			for (column = 0; column <= 12; column++)

			{
				if (wDeck[row][column] == card)//�ҵ��Ƶ�λ��

				{
					wPai[(card - 1) % 4][ (card - 1) % 13] = wFace[column] + " of " + wSuit[row];//ӳ��Ϊ�ַ���

					if ((card - 1) % 4 == 3)//һ��4���ƣ�Ȼ����

					{
						//��ʽ�������ڵ�5�񣬻�ɫ�ַ��ӵ�����8��ʼ��
						Console::WriteLine(L"{0,5} of {1,-8}", wFace[column], wSuit[row]);


					}

					else//û��4����ͬ�����

						Console::Write(L"{0,5} of {1,-8}\t", wFace[column], wSuit[row]);

				}

			}

		}

	}

}

//ʵ��������������ĺ���


void sort(array<array<String^>^>^ wPai)

{
	int row, column;

	array<String^>^ sPai = gcnew array<String^>(52);//����һά�ַ�����

	/*����ά�ַ�����ӳ�䵽һά�ַ����飬����sort()��Ҫ��*/
	for (row = 0; row <= 3; row++)

	{
		for (column = 0; column <= 12; column++)

			sPai[row * 13 + column] = wPai[row][column];

	}

	for (row = 0; row <= 3; row++)

	{
		Array::Sort(sPai, row * 13, 13);//ÿ13��Ϊһ���������

	}

	Console::WriteLine(L"       A                      B                       C                       D");

	for (column = 0; column <= 12; column++)

		Console::WriteLine(L"    {0,-19},    {1,-19},    {2,-19},    {3,-19}",

			sPai[column], sPai[13 + column], sPai[26 + column], sPai[39 + column]);

}

int main(array<System::String^>^ args)

{
	array<String^>^ wSuit = { "Hearts","Diamonds", "Clubs", "Spades" };

	array<String^>^ wFace = { "A", "2","3", "4", "5", "6", "7","8","9", "10", "J", "Q","K" };

	//array<String^, 2> ^ wPai = gcnew  array<String^, 2>(4, 13);   //�����ά���飬�洢�ĸ������ϵ�ÿ����

	//int wDeck[4][13] = { 0 };//����ϴ�Ƶĳ�ʼ��

	//Console::WriteLine(L"�������£�");

	//srand(unsigned(time(NULL)));//�������������

	//shuffle(wDeck);    //ϴ��

	//deal(wDeck, wFace, wSuit, wPai); //����

	//Console::WriteLine(L"���������������£�");

	//sort(wPai);  //�����������

	//ʹ����������鷽��
	array<array<String^>^>^ sPais = gcnew array< array<String^>^ >(4);//�������������

	for (int row = 0; row < 4; row++)   //��ʼ�����������
		sPais[row] = gcnew array<String^>(13);

	int wDeck[4][13] = { 0 };//����ϴ�Ƶĳ�ʼ��

	Console::WriteLine(L"�������£�");

	srand(unsigned(time(NULL)));//�������������

	shuffle(wDeck);    //ϴ��

	deal(wDeck, wFace, wSuit, sPais); //����

	Console::WriteLine(L"���������������£�");

	sort(sPais);  //�����������

	system("PAUSE");  
	return 0;

}

