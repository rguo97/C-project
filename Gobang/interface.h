#pragma once
void face()     //���̽���
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
	
	//�ĸ�ѡ��
	fillrectangle(30, 500, 130, 550);     //����
	fillrectangle(170, 500, 270, 550);    //���
	fillrectangle(310, 500, 410, 550);    //����
	fillrectangle(450, 500, 550, 550);    //����
	fillrectangle(490, 50, 610, 110);        //��ʾ����
	fillrectangle(490, 160, 610, 220);
	fillrectangle(490, 270, 610, 330);
	fillrectangle(490, 380, 610, 440);
	TCHAR s1[] = _T("�ڷ�����");
	TCHAR s2[] = _T("�׷�����");
	TCHAR s3[] = _T("����");
	TCHAR s4[] = _T("���");
	TCHAR s5[] = _T("����");
	TCHAR s6[] = _T("����");
	settextcolor(BLACK);
	settextstyle(25, 0, _T("����"));
	setbkmode(TRANSPARENT);
	outtextxy(495, 65, s1);
	outtextxy(495, 285, s2);
	outtextxy(50, 510, s3);
	outtextxy(190, 510, s4);
	outtextxy(330, 510, s5);
	outtextxy(470, 510, s6);
}