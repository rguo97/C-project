#include<iostream>
#include<graphics.h>
#include<math.h>
#include<conio.h>
#include<time.h>
using namespace std;
#define PI 3.1415926
void clock(int hour, int minute, int second)//ª≠÷∏’Î
{
	double hour_x, hour_y;
	double minute_x, minute_y;
	double second_x, second_y;
	second_x = 400 + 150 * cos(second * 2 * PI / 60 - PI / 2);
	second_y = 400 + 150 * sin(second * 2 * PI / 60 - PI / 2);
	setlinestyle(PS_SOLID, 3);
	setlinecolor(BLACK);
	line(400, 400, second_x, second_y);
	minute_x = 400 + 110 * cos(minute * 2 * PI / 60 + second * 2 * PI / 3600 - PI / 2);
	minute_y = 400 + 110 * sin(minute * 2 * PI / 60 + second * 2 * PI / 3600 - PI / 2);
	setlinestyle(PS_SOLID, 5);
	line(400, 400, minute_x, minute_y);
	hour_x = 400 + 70 * cos(hour * 2 * PI / 12 + minute * 2 * PI /720  + second * 2 * PI / 360/60  - PI / 2);
	hour_y = 400 + 70 * sin(hour * 2 * PI / 12 + minute * 2 * PI / 720 + second * 2 * PI / 360/60  - PI / 2);
	setlinestyle(PS_SOLID, 10);
	line(400, 400, hour_x, hour_y);
}
void clocka()//ª≠±Ì≈Ã
{
	setfillcolor(BLACK);
	bar(395, 205, 405, 215);
	bar(395, 585, 405, 595);
	bar(205, 395, 215, 405);
	bar(585, 395, 595, 405);
	for (int i = 0; i < 60; i = i + 5)
	{
		fillcircle(400 + 190 * cos(i*PI * 2 / 60 - PI / 2), 400 + 190 * sin(i*PI * 2 / 60 - PI / 2), 4);
	}
	for (int j = 0; j < 60; j++)
	{
		fillcircle(400 + 190 * cos(j*PI * 2 / 60 - PI / 2), 400 + 190 * sin(j*PI * 2 / 60 - PI / 2), 1);
	}
}
int main()
{
	initgraph(800, 800);
	setbkcolor(WHITE);
	cleardevice();
	setlinecolor(BLUE);
	circle(400, 400, 200);
	while (!_kbhit())
	{
		time_t now;
		time(&now);
		struct tm timein;
		localtime_s(&timein, &now);
		clocka();
		clock(timein.tm_hour, timein.tm_min, timein.tm_sec);
		Sleep(1000);
		cleardevice();
		setlinestyle(PS_SOLID, 1);
		setlinecolor(BLUE);
		circle(400, 400, 200);
	}
	_getch();
	closegraph();
}