#pragma once
void face()     //棋盘界面
{
	setbkcolor(BROWN);
	cleardevice();
	setlinecolor(DARKGRAY);
	for (int i = 0; i < 15; i++)
	{

		line((i + 1) * 30, 30, (i + 1) * 30, 450);
	}
	for (int j = 0; j < 15; j++)
	{
		line(30, (j + 1) * 30, 450, (j + 1) * 30);
	}
	setfillcolor(DARKGRAY);
	fillrectangle(237, 237, 243, 243);
	setfillcolor(WHITE);
	
	//四个选项
	fillrectangle(30, 500, 130, 550);     //认输
	fillrectangle(170, 500, 270, 550);    //求和
	fillrectangle(310, 500, 410, 550);    //重来
	fillrectangle(450, 500, 550, 550);    //悔棋
	fillrectangle(490, 50, 610, 110);        //显示步数
	fillrectangle(490, 160, 610, 220);
	fillrectangle(490, 270, 610, 330);
	fillrectangle(490, 380, 610, 440);
	TCHAR s1[] = _T("黑方步数");
	TCHAR s2[] = _T("白方步数");
	TCHAR s3[] = _T("认输");
	TCHAR s4[] = _T("求和");
	TCHAR s5[] = _T("重来");
	TCHAR s6[] = _T("悔棋");
	settextcolor(BLACK);
	settextstyle(25, 0, _T("楷体"));
	setbkmode(TRANSPARENT);
	outtextxy(495, 65, s1);
	outtextxy(495, 285, s2);
	outtextxy(50, 510, s3);
	outtextxy(190, 510, s4);
	outtextxy(330, 510, s5);
	outtextxy(470, 510, s6);
}