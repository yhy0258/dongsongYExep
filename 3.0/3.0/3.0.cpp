#include "pch.h"

using namespace System;

class CVideo {
public:
	char format[6];//视频格式后缀
	double time;//视频时长
	unsigned int level;//视频清晰度
	int vol;//视频音量
	int speed;//视频播放速度
	unsigned stat;//视频状态
	char title[32];//视频标题
	int width;//视频宽度
	int heigth;//视频高度
	double click;//视频播放量



	CVideo() {
		Console::WriteLine("{0", "构造函数调用了。");
	}
	~CVideo() {
		Console::WriteLine("{0", "析构函数调用了。");
	}
	void start();//视频开始
	void stop();//视频暂停
	void step();//视频快进
	void speedChange();//视频播放速度
	void vodChange();//音量
	void share();//视频转发
	void shortCut();//视频截图


};

int main(array<System::String ^> ^args)
{
    return 0;
}
