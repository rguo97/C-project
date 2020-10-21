#pragma once
#include<graphics.h>
#include"interface.h"
#include"move.h"
void face();
void moveqizi();
void START()  //开始界面
{
	setbkcolor(BROWN);
	cleardevice();
	setfillcolor(WHITE);
	fillrectangle(200, 200, 400, 300);
	fillrectangle(200, 350, 400, 450);
	settextcolor(GREEN);
	settextstyle(30, 0, _T("宋体"));
	TCHAR s1[] = _T("开始游戏");
	TCHAR s2[] = _T("关于游戏");
	setbkmode(TRANSPARENT);
	outtextxy(230, 225, s1);
	outtextxy(230, 375, s2);
	MOUSEMSG m;
	
	while (1)
	{
		m = GetMouseMsg();
		if (m.uMsg == WM_LBUTTONDOWN && m.x > 200 && m.x < 400 && m.y>200 && m.y < 300)
		{
			face();
			moveqizi();
		}
		if (m.uMsg == WM_LBUTTONDOWN && m.x > 200 && m.x < 400 && m.y>350 && m.y < 450)
		{
			cleardevice();
			setbkcolor(BROWN);
			settextcolor(GREEN);
			settextstyle(30, 0, _T("宋体"));
			TCHAR b1[] = _T("作 者 :要养萨摩耶");
			TCHAR b2[] = _T("联系方式:yaoyangsamoye@163.com");
			setbkmode(TRANSPARENT);
			outtextxy(120, 155, b1);
			outtextxy(120, 250, b2);
			setfillcolor(WHITE);
			fillrectangle(220, 350, 320, 400);
			settextcolor(BLACK);
			settextstyle(30, 0, _T("宋体"));
			TCHAR t[] = _T("返回");
			outtextxy(240, 365, t);
			MOUSEMSG n;
			while (1)
			{
				n = GetMouseMsg();
				if (n.uMsg == WM_LBUTTONDOWN && n.x > 220 && n.x < 320 && n.y>350 && n.y < 400)
				{
					START();
				}
			}

		}
	}
}