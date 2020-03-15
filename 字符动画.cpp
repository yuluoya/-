#include <stdlib.h> 
#include <stdio.h> 
#include <conio.h> 
#include <time.h>  
#include <windows.h> 
#include <mmsystem.h>
#pragma comment(lib,"Winmm.lib")
void gotoxy(int x, int y); 
int main()
{
	system("color f0");
    long i;
	char FileName[120], hi[6840];/*这里是字符数组,用来存储从文件打开的字符串*/
	printf("——————请最大化观看——————\n");
	FILE *in;
	//getch(); 
    printf("3\n");
    Sleep(1000);
    printf("2\n");
    Sleep(1000);
    printf("1\n");
    Sleep(1000);
    printf("start/n");
	PlaySound(TEXT("桌面:\\【略略略】txt"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	for(i=1;i<=10000;i++)
	{
		sprintf(FileName,"桌面:\\【略略略】txt\\1 (%ld).txt",i);/*文件地址*/
        
	in=fopen(FileName,"r");
	fread(hi,1,6840,in);
	printf("%s\n%d",hi,i);
	Sleep(30);
	gotoxy(1,1);fclose(in); 
	} 
	return 0;
} 

void gotoxy(int x, int y) //这个函数是将光标位置移动到坐标x,y 
	{
		COORD pos;pos.X = x - 1;pos.Y = y - 1;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	}