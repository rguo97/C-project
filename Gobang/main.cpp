/*
�������ʵ����������˫�˶�ս�������п������䣬��ͣ�����
���ߣ�Ҫ����ĦҮ
ʱ�䣺2019-11-9
��ϵ��ʽ��yaoyangsamoye@163.com
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