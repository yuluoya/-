#include<stdio.h>
int main()
{
	int year,b,a[12]={子鼠，丑牛，寅虎，卯兔，辰龙，巳蛇，午马，未羊，申猴，酉鸡，戌狗，亥猪}
	printf("你出生的年份:");
	scanf("%d",&year);
	b=(year-3)%12
	if(b=0)
		printf("您的生肖是a[12]");
	else if(b=1)
		printf("您的生肖是a[1]");
	else if(b=2)
		printf("您的生肖是a[2]");
	else if(b=3)
		printf("您的生肖是a[3]");
	else if(b=4)
		printf("您的生肖是a[4]");
	else if(b=5)
		printf("您的生肖是a[5]");
	else if(b=6)
		printf("您的生肖是a[6]");
	else if(b=7)
		printf("您的生肖是a[7]");
	else if(b=8)
		printf("您的生肖是a[8]");
	else if(b=9)
		printf("您的生肖是a[9]");
	else if(b=10)
		printf("您的生肖是a[10]");
	else if(b=11)
		printf("您的生肖是a[11]");
	return 0;
}