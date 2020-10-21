/*
这个程序实现了五子棋双人对战，在其中可以认输，求和，悔棋
作者：要养萨摩耶
时间：2019-11-9
联系方式：yaoyangsamoye@163.com
*/
#include<iostream>
#include<graphics.h>
#include<conio.h>
#include"interface.h"
#include"move.h"
#include"start.h"
void main()
{
	initgraph(640, 600);
	{
		START();
	}
	_getch();
	closegraph();
	system("pause");
}