#include "pch.h"
#include"stdlib.h"//system()
#include"time.h"//rand()

using namespace System;
void shuffle(int wDeck[4][13])//传入全0的二维数组

{  //洗牌

	int r;

	int card, row, column;



	for (card = 1; card <= 52; card++)

	{
		//选择52个位置中的一个，之后顺序发牌。
		r = rand();

		row = r % 4;

		r = rand();

		column = r % 13;


		/*检查是否已经设置好之后要发牌，如果已经发牌则重新选择位置直到选中没有发牌的位置。*/
		while (wDeck[row][column] != 0)

		{  //已发牌，再产生

			r = rand();

			row = r % 4;

			r = rand();

			column = r % 13;

		}



		wDeck[row][column] = card;

	}

}


//实现发牌的函数

void deal(int wDeck[4][13], array<String^>^ wFace, array<String^>^ wSuit, array<array<String^>^>^ wPai)

{  //发牌

	int card, row, column;

	Console::WriteLine(L"       A                      B                       C                       D");//显示牌手

	//按顺序寻找牌的位置，将int数组映射到String类型的wPai数组中。
	for (card = 1; card <= 52; card++)

	{
		for (row = 0; row <= 3; row++)

		{
			for (column = 0; column <= 12; column++)

			{
				if (wDeck[row][column] == card)//找到牌的位置

				{
					wPai[(card - 1) % 4][ (card - 1) % 13] = wFace[column] + " of " + wSuit[row];//映射为字符串

					if ((card - 1) % 4 == 3)//一行4张牌，然后换行

					{
						//格式：数字在第5格，花色字符从倒数第8开始。
						Console::WriteLine(L"{0,5} of {1,-8}", wFace[column], wSuit[row]);


					}

					else//没到4张则同行输出

						Console::Write(L"{0,5} of {1,-8}\t", wFace[column], wSuit[row]);

				}

			}

		}

	}

}

//实现整理排序及输出的函数


void sort(array<array<String^>^>^ wPai)

{
	int row, column;

	array<String^>^ sPai = gcnew array<String^>(52);//定义一维字符串组

	/*将二维字符串组映射到一维字符串组，满足sort()的要求*/
	for (row = 0; row <= 3; row++)

	{
		for (column = 0; column <= 12; column++)

			sPai[row * 13 + column] = wPai[row][column];

	}

	for (row = 0; row <= 3; row++)

	{
		Array::Sort(sPai, row * 13, 13);//每13个为一组进行排序

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

	//array<String^, 2> ^ wPai = gcnew  array<String^, 2>(4, 13);   //定义二维数组，存储四个人手上的每张牌

	//int wDeck[4][13] = { 0 };//用于洗牌的初始化

	//Console::WriteLine(L"发牌如下：");

	//srand(unsigned(time(NULL)));//创建随机数种子

	//shuffle(wDeck);    //洗牌

	//deal(wDeck, wFace, wSuit, wPai); //发牌

	//Console::WriteLine(L"排序整理后的牌如下：");

	//sort(wPai);  //整理排序及输出

	//使用数组的数组方法
	array<array<String^>^>^ sPais = gcnew array< array<String^>^ >(4);//定义数组的数组

	for (int row = 0; row < 4; row++)   //初始化数组的数组
		sPais[row] = gcnew array<String^>(13);

	int wDeck[4][13] = { 0 };//用于洗牌的初始化

	Console::WriteLine(L"发牌如下：");

	srand(unsigned(time(NULL)));//创建随机数种子

	shuffle(wDeck);    //洗牌

	deal(wDeck, wFace, wSuit, sPais); //发牌

	Console::WriteLine(L"排序整理后的牌如下：");

	sort(sPais);  //整理排序及输出

	system("PAUSE");  
	return 0;

}

