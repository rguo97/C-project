#pragma once
#include"start.h"
void who_win();               //˭���ʤ��
void give_up(MOUSEMSG m, int number);  //����
void sue_for_peace(MOUSEMSG m, int number,int (*p)[15], int white_count, int black_count,int *l,int a);  //���
void new_interface(int(*p)[15], int white_count, int black_count);
void draw(MOUSEMSG m, int number, int white_count, int black_count, int(*p)[15],int *l,int a);  //������
void new_game(MOUSEMSG m);    //����
void back(int* l, int(*p)[15],int number);  //�����������
void ask_back(int* l, int(*p)[15], MOUSEMSG m, int number, int white_count, int black_count, int a);   //����
void moveqizi()
{
	TCHAR s1[5], s2[5], s3[10], s4[10];
	int black_count = 1, white_count = 1;    //���壬�����ƶ�����
	
	int number = 1;     //�����ƶ�����
	
	MOUSEMSG m;
	int p[15][15];   //�洢������Ϣ��ֵΪ1��ʾ���壬-1��ʾ����
	int l[450] = { 0 };  //��¼ÿ�����ӵ����꣬����
	int a = 0;
	
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			p[i][j] = 0;
		}
	}
	m = GetMouseMsg();
	draw(m, number, white_count, black_count, p,l,a);
	

}

/*�ж�ʤ������������ȫͼ��⣬Ѱ����ͬһ���ߡ�ͬһ���ߡ�ͬһб��
 �����������ͬɫ���� */
void who_win()
{

	//����ʤ��
	for (double i = 31; i <= 330; i = i + 30)
	{
		for (double j = 31; j <= 330; j = j + 30)
		{
			if ((getpixel(i, j) == BLACK && getpixel(i + 30, j) == BLACK && getpixel(i + 60, j) == BLACK && getpixel(i + 90, j) == BLACK && getpixel(i + 120, j) == BLACK)
				|| (getpixel(i, j) == BLACK && getpixel(i, j + 30) == BLACK && getpixel(i, j + 60) == BLACK && getpixel(i, j + 90) == BLACK && getpixel(i, j + 120) == BLACK)
				|| (getpixel(i, j) == BLACK && getpixel(i + 30, j + 30) == BLACK && getpixel(i + 60, j + 60) == BLACK && getpixel(i + 90, j + 90) == BLACK && getpixel(i + 120, j + 120) == BLACK)
				|| (getpixel(i, j) == BLACK && getpixel(i - 30, j - 30) == BLACK && getpixel(i - 60, j - 60) == BLACK && getpixel(i - 90, j - 90) == BLACK && getpixel(i - 120, j - 120) == BLACK)
				|| (getpixel(i, j) == BLACK && getpixel(i + 30, j - 30) == BLACK && getpixel(i + 60, j - 60) == BLACK && getpixel(i + 90, j - 90) == BLACK && getpixel(i + 120, j - 120) == BLACK)
				|| (getpixel(i, j) == BLACK && getpixel(i - 30, j + 30) == BLACK && getpixel(i - 60, j + 60) == BLACK && getpixel(i - 90, j + 90) == BLACK && getpixel(i - 120, j + 120) == BLACK))
			{
				Sleep(100);
				//setbkcolor(BLACK);
				//cleardevice(); 
				setfillcolor(LIGHTGRAY);
				fillrectangle(150, 200, 450, 350);
				settextstyle(50, 0, _T("����"));
				settextcolor(BLACK);
				//setbkmode(TRANSPARENT);
				TCHAR s1[] = _T("����ʤ��");
				outtextxy(200, 250, s1);

				Sleep(2500);
				START();
				break;
			}

		}
	}

	//����ʤ��
	for (double i = 35; i <= 450; i = i + 30)
	{
		for (double j = 35; j <= 450; j = j + 30)
		{
			if ((getpixel(i, j) == WHITE && getpixel(i + 30, j) == WHITE && getpixel(i + 60, j) == WHITE && getpixel(i + 90, j) == WHITE && getpixel(i + 120, j) == WHITE)
				|| (getpixel(i, j) == WHITE && getpixel(i, j + 30) == WHITE && getpixel(i, j + 60) == WHITE && getpixel(i, j + 90) == WHITE && getpixel(i, j + 120) == WHITE)
				|| (getpixel(i, j) == WHITE && getpixel(i + 30, j + 30) == WHITE && getpixel(i + 60, j + 60) == WHITE && getpixel(i + 90, j + 90) == WHITE && getpixel(i + 120, j + 120) == WHITE)
				|| (getpixel(i, j) == WHITE && getpixel(i - 30, j - 30) == WHITE && getpixel(i - 60, j - 60) == WHITE && getpixel(i - 90, j - 90) == WHITE && getpixel(i - 120, j - 120) == WHITE)
				|| (getpixel(i, j) == WHITE && getpixel(i - 30, j + 30) == WHITE && getpixel(i - 60, j + 60) == WHITE && getpixel(i - 90, j + 90) == WHITE && getpixel(i - 120, j + 120) == WHITE)
				|| (getpixel(i, j) == WHITE && getpixel(i + 30, j - 30) == WHITE && getpixel(i + 60, j - 60) == WHITE && getpixel(i + 90, j - 90) == WHITE && getpixel(i + 120, j - 120) == WHITE))
			{
				Sleep(100);
				//setbkcolor(BLACK);
				//cleardevice();
				setfillcolor(LIGHTGRAY);
				fillrectangle(150, 200, 450, 350);
				settextstyle(50, 0, _T("����"));
				settextcolor(BLACK);
				//setbkmode(TRANSPARENT);
				TCHAR s1[] = _T("����ʤ��");
				outtextxy(200, 250, s1);
				Sleep(2500);
				START();
				break;
			}
		}
	}
}

//ͨ��number���жϷ������������һ��
void give_up(MOUSEMSG m, int number)     
{
	while ((m.uMsg == WM_LBUTTONUP) && m.x > 30 && m.x < 130 && m.y>500 && m.y < 550)  //������䰴ť
	{
		if (number % 2 != 1)    //��������
		{
			Sleep(100);
			 
			setfillcolor(LIGHTGRAY);
			fillrectangle(150, 200, 450, 350);
			settextstyle(50, 0, _T("����"));
			settextcolor(BLACK);
			//setbkmode(TRANSPARENT);
			TCHAR s1[] = _T("����ʤ��");
			outtextxy(200, 250, s1);
			Sleep(2500);
			START();
			break;
		}
		else    //��������
		{
			Sleep(100);
			//setbkcolor(BLACK);
			//cleardevice();
			setfillcolor(LIGHTGRAY);
			fillrectangle(150, 200, 450, 350);
			settextstyle(50, 0, _T("����"));
			settextcolor(BLACK);
			//setbkmode(TRANSPARENT);
			TCHAR s1[] = _T("����ʤ��");
			outtextxy(200, 250, s1);
			Sleep(2500);
			START();
			break;
			
		}
	}
}

//������һ��������ͨ���ж�number����ż��ȷ��
void sue_for_peace(MOUSEMSG m, int number,int(*p)[15],int white_count,int black_count,int *l,int a)   
{
	while ((m.uMsg == WM_LBUTTONUP) && m.x > 170 && m.x < 270 && m.y>500 && m.y < 550)
	{
		if (number % 2 != 1)     //�������
		{
			Sleep(100);
			//setbkcolor(BLACK);
			//cleardevice(); 
			setfillcolor(LIGHTGRAY);
			fillrectangle(150, 200, 450, 350);
			settextstyle(30, 0, _T("����"));
			settextcolor(BLACK);
			//setbkmode(TRANSPARENT);
			TCHAR s1[] = _T("�������");
			outtextxy(240, 230, s1);
			setfillcolor(WHITE);
			fillrectangle(180, 300, 230, 330);
			fillrectangle(370, 300, 420, 330);
			settextstyle(15, 0, _T("����"));
			settextcolor(BLACK);
			TCHAR s3[] = _T("ͬ��");
			TCHAR s4[] = _T("�ܾ�");
			outtextxy(190, 310, s3);
			outtextxy(380, 310, s4);
			MOUSEMSG n;

			

			while (1)
			{
				n = GetMouseMsg();
				if ((n.uMsg == WM_LBUTTONUP) && n.x > 180 && n.x < 230 && n.y>300 && n.y < 330)  //ͬ�����
				{
					clearrectangle(150, 200, 450, 350);
					setfillcolor(LIGHTGRAY);
					fillrectangle(150, 200, 450, 350);
					settextstyle(30, 0, _T("����"));
					settextcolor(BLACK);
					//setbkmode(TRANSPARENT);
					TCHAR s1[] = _T("˫������");
					outtextxy(240, 230, s1);
					Sleep(2500);
					
					START();
				}
				if ((n.uMsg == WM_LBUTTONUP) && n.x > 370 && n.x < 420 && n.y>300 && n.y < 330)
				{
					
						clearrectangle(150, 200, 450, 350);
						setfillcolor(LIGHTGRAY);
						fillrectangle(150, 200, 450, 350);
						settextstyle(30, 0, _T("����"));
						settextcolor(BLACK);
						//setbkmode(TRANSPARENT);
						TCHAR s1[] = _T("�Է��ܾ�");      //�������ĳһ���ܾ������ʱ��Ҫ��ԭ����
						outtextxy(240, 230, s1);
						new_interface(p, white_count - 1, black_count - 1);  //��ԭ����
						draw(m, number, white_count, black_count, p,l,a);    //��Ϸ����
				}
			}
		}
		else        //�������
		{
			Sleep(100);
			//setbkcolor(BLACK);
			//cleardevice();
			setfillcolor(LIGHTGRAY);
			fillrectangle(150, 200, 450, 350);
			settextstyle(30, 0, _T("����"));
			settextcolor(BLACK);
			//setbkmode(TRANSPARENT);
			TCHAR s1[] = _T("�������");
			outtextxy(240, 230, s1);
			setfillcolor(WHITE);
			fillrectangle(180, 300, 230, 330);
			fillrectangle(370, 300, 420, 330);
			settextstyle(15, 0, _T("����"));
			settextcolor(BLACK);
			TCHAR s3[] = _T("ͬ��");
			TCHAR s4[] = _T("�ܾ�");
			outtextxy(190, 310, s3);
			outtextxy(380, 310, s4);
			MOUSEMSG n;
			
			while (1)
			{
				n = GetMouseMsg();
				if ((n.uMsg == WM_LBUTTONUP) && n.x > 180 && n.x < 230 && n.y>300 && n.y < 330)
				{
					clearrectangle(150, 200, 450, 350);
					setfillcolor(LIGHTGRAY);
					fillrectangle(150, 200, 450, 350);
					settextstyle(30, 0, _T("����"));
					settextcolor(BLACK);
					//setbkmode(TRANSPARENT);
					TCHAR s1[] = _T("˫������");
					outtextxy(240, 230, s1);
					Sleep(2500);
				
					START();
				}
				if ((n.uMsg == WM_LBUTTONUP) && n.x > 370 && n.x < 420 && n.y>300 && n.y < 330)
				{
					
						clearrectangle(150, 200, 450, 350);
						setfillcolor(LIGHTGRAY);
						fillrectangle(150, 200, 450, 350);
						settextstyle(30, 0, _T("����"));
						settextcolor(BLACK);
						//setbkmode(TRANSPARENT);
						TCHAR s1[] = _T("�Է��ܾ�");
						outtextxy(240, 230, s1);
						new_interface(p, white_count , black_count );
						draw(m, number, white_count, black_count, p,l,a);
					
				}
			}
		}
	}
}
void new_interface(int (*p)[15],int white_count,int black_count)   //��ԭ����
{
	TCHAR s1[5],s2[5];
	face();
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			if (p[i][j] == 1)
			{
				setfillcolor(BLACK);
				fillcircle((i+1) * 30, (j+1) * 30, 10);
			}
			if (p[i][j] == -1)
			{
				setfillcolor(WHITE);
				fillcircle((i + 1) * 30, (j + 1) * 30, 10);
			}
		}
	}
	white_count = white_count - 1;
	black_count = black_count - 1;
	_stprintf_s(s1, _T("%d"), black_count);
	outtextxy(535, 185, s1);
	_stprintf_s(s2, _T("%d"), white_count);
	outtextxy(535, 405, s2);
}
void draw(MOUSEMSG m,int number,int white_count,int black_count,int (*p)[15],int *l,int a)  //������
{
	TCHAR s1[5], s2[5];
	int x_recent = 0, y_recent = 0;
	int yushu_x = 0, yushu_y = 0;
	while (true)
	{
		m = GetMouseMsg();
		give_up(m, number);
		sue_for_peace(m, number, p, white_count, black_count,l,a);
		new_game(m);
		ask_back(l, p, m, number, white_count, black_count, a);

		if (m.uMsg == WM_LBUTTONDOWN && m.x >= 30 && m.x <= 450 && m.y >= 30 && m.y <= 450)
		{
			yushu_x = m.x % 30;
			yushu_y = m.y % 30;
			if (yushu_x >= 15)
			{
				x_recent = m.x / 30 + 1;
			}
			else
			{
				x_recent = m.x / 30;
			}
			if (yushu_y >= 15)
			{
				y_recent = m.y / 30 + 1;
			}
			else
			{
				y_recent = m.y / 30;
			}
			if (number % 2 == 1)
			{
				if (p[x_recent - 1][y_recent - 1] == 0)
				{
					setlinecolor(BLACK);
					setfillcolor(BLACK);
					fillcircle(x_recent * 30, y_recent * 30, 10);
					p[x_recent - 1][y_recent - 1] = 1;
					clearrectangle(490, 160, 610, 220);
					setfillcolor(WHITE);
					fillrectangle(490, 160, 610, 220);
					_stprintf_s(s1, _T("%d"), black_count);
					outtextxy(535, 185, s1);
					black_count++;
					number++;
					l[a] = x_recent * 30;          //�����ӵ����걣�浽������
					l[a + 1] = y_recent * 30;
					a = a + 2;
					who_win();
				}
			}
			else
			{
				if (p[x_recent - 1][y_recent - 1] == 0)
				{
					setlinecolor(WHITE);
					setfillcolor(WHITE);
					fillcircle(x_recent * 30, y_recent * 30, 10);
					p[x_recent - 1][y_recent - 1] = -1;
					clearrectangle(490, 380, 610, 440);
					setfillcolor(WHITE);
					fillrectangle(490, 380, 610, 440);
					_stprintf_s(s2, _T("%d"), white_count);
					outtextxy(535, 405, s2);
					white_count++;
					number++;
					l[a] = x_recent * 30;
					l[a + 1] = y_recent * 30;
					a = a + 2;
					who_win();
				}
			}
		}

	}
}
void new_game(MOUSEMSG m)        //���¿�ʼ������
{
	if (m.uMsg == WM_LBUTTONDOWN && m.x > 310 && m.x < 410 && m.y>500 && m.y < 550)
	{
		cleardevice();
		face();
		moveqizi();
	}
}


//������뷨���½�һ�����飬�����������������룬����Ļ���ɾ��������Ȼ�����������

void back(int *l, int (*p)[15],int number)  //���������0
{
	int x_sum=0,y_sum=0;
	
	x_sum = l[number * 2 - 2] / 30 - 1;
	y_sum = l[number * 2 - 1] / 30 - 1;

	p[x_sum][y_sum] = 0;
}

//����
void ask_back(int* l, int(*p)[15], MOUSEMSG m, int number,int white_count,int black_count,int a)
{
	while ((m.uMsg == WM_LBUTTONUP) && m.x > 450 && m.x < 550 && m.y>500 && m.y < 550)
	{
		if (number % 2 != 1)
		{
			Sleep(100);
			//setbkcolor(BLACK);
			//cleardevice(); 
			setfillcolor(LIGHTGRAY);
			fillrectangle(150, 200, 450, 350);
			settextstyle(30, 0, _T("����"));
			settextcolor(BLACK);
			//setbkmode(TRANSPARENT);
			TCHAR s1[] = _T("�����������");
			outtextxy(240, 230, s1);
			setfillcolor(WHITE);
			fillrectangle(180, 300, 230, 330);
			fillrectangle(370, 300, 420, 330);
			settextstyle(15, 0, _T("����"));
			settextcolor(BLACK);
			TCHAR s3[] = _T("ͬ��");
			TCHAR s4[] = _T("�ܾ�");
			outtextxy(190, 310, s3);
			outtextxy(380, 310, s4);
			MOUSEMSG n;



			while (1)
			{
				n = GetMouseMsg();
				if ((n.uMsg == WM_LBUTTONUP) && n.x > 180 && n.x < 230 && n.y>300 && n.y < 330)
				{
					cleardevice();
					number--;
					back(l, p,number);

					//white_count = white_count - 1;
					black_count = black_count - 1;
					new_interface(p, white_count, black_count);
					draw(m, number, white_count, black_count, p, l, a);

				}
				if ((n.uMsg == WM_LBUTTONUP) && n.x > 370 && n.x < 420 && n.y>300 && n.y < 330)
				{

					clearrectangle(150, 200, 450, 350);
					setfillcolor(LIGHTGRAY);
					fillrectangle(150, 200, 450, 350);
					settextstyle(30, 0, _T("����"));
					settextcolor(BLACK);
					//setbkmode(TRANSPARENT);
					TCHAR s1[] = _T("�Է��ܾ�");
					outtextxy(240, 230, s1);
					new_interface(p, white_count , black_count );
					draw(m, number, white_count, black_count, p, l, a);
				}
			}
		}
		else
		{
			Sleep(100);
			//setbkcolor(BLACK);
			//cleardevice();
			setfillcolor(LIGHTGRAY);
			fillrectangle(150, 200, 450, 350);
			settextstyle(30, 0, _T("����"));
			settextcolor(BLACK);
			//setbkmode(TRANSPARENT);
			TCHAR s1[] = _T("�����������");
			outtextxy(240, 230, s1);
			setfillcolor(WHITE);
			fillrectangle(180, 300, 230, 330);
			fillrectangle(370, 300, 420, 330);
			settextstyle(15, 0, _T("����"));
			settextcolor(BLACK);
			TCHAR s3[] = _T("ͬ��");
			TCHAR s4[] = _T("�ܾ�");
			outtextxy(190, 310, s3);
			outtextxy(380, 310, s4);
			MOUSEMSG n;

			while (1)
			{
				n = GetMouseMsg();
				if ((n.uMsg == WM_LBUTTONUP) && n.x > 180 && n.x < 230 && n.y>300 && n.y < 330)
				{
					cleardevice();
					number--;
					back(l, p,number);
					white_count = white_count - 1;
					//black_count = black_count - 1;
					new_interface(p, white_count, black_count);
					draw(m, number, white_count, black_count, p, l, a);
				}
				if ((n.uMsg == WM_LBUTTONUP) && n.x > 370 && n.x < 420 && n.y>300 && n.y < 330)
				{

					clearrectangle(150, 200, 450, 350);
					setfillcolor(LIGHTGRAY);
					fillrectangle(150, 200, 450, 350);
					settextstyle(30, 0, _T("����"));
					settextcolor(BLACK);
					//setbkmode(TRANSPARENT);
					TCHAR s1[] = _T("�Է��ܾ�");
					outtextxy(240, 230, s1);
					new_interface(p, white_count , black_count );
					draw(m, number, white_count, black_count, p, l, a);

				}
			}
		}
	}
}