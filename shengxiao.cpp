#include<stdio.h>
int main()
{
	int year,b,a[12]={1,2,3,4,5,6,7,8,9,10,11,12};
	printf("����������:");
	scanf("%d",&year);
	b=(year-3)%12;
	if(b=0)
		printf("������Ф��a[12]");
	else if(b=1)
		printf("������Ф��a[1]");
	else if(b=2)
		printf("������Ф��a[2]");
	else if(b=3)
		printf("������Ф��a[3]");
	else if(b=4)
		printf("������Ф��a[4]");
	else if(b=5)
		printf("������Ф��a[5]");
	else if(b=6)
		printf("������Ф��a[6]");
	else if(b=7)
		printf("������Ф��a[7]");
	else if(b=8)
		printf("������Ф��a[8]");
	else if(b=9)
		printf("������Ф��a[9]");
	else if(b=10)
		printf("������Ф��a[10]");
	else if(b=11)
		printf("������Ф��a[11]");
	return 0;
}