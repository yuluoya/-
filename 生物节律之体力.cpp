#include <stdio.h>
#include <iostream>


int main(void)
{
    int year1,year2,month1,month2,day1,day2,i,j,a,b,b1,b2,y,x;
	
  printf("���������ĳ�������\n");                  //�����������
  scanf("%d%d%d",&year1,&month1,&day1);
  printf("����������Ҫ��ѯ������\n");
  scanf("%d%d%d",&year2,&month2,&day2);
  
  

  j=0;
  a=1;
  for(i=year1;i<=year2;i++)                        //�����м�������
  {
  if( (i%4==0 && i%100!=0)||(i%400==0) )
	  j=j+1;
  else
	  j=j+0;
  }
  y=(year2-year1)*365 + j;
 
  int m[12]={31,28,31,30,31,30,31,31,30,31,30,31};
 
  if(a==month1)              b1=day1;
  else if(month1==2)         b1=m[0]+day1;
  else if(month1==3)         b1=m[0]+m[1]+day1;
  else if(month1==4)         b1=m[0]+m[1]+m[2]+day1;                          //����1��1�յ����յ�������b1
  else if(month1==5)         b1=m[0]+m[1]+m[2]+m[3]+day1;
  else if(month1==6)         b1=m[0]+m[1]+m[2]+m[3]+m[4]+day1;
  else if(month1==7)         b1=m[0]+m[1]+m[2]+m[3]+m[4]+m[5]+day1;
  else if(month1==8)         b1=m[0]+m[1]+m[2]+m[3]+m[4]+m[5]+m[6]+day1;
  else if(month1==9)         b1=m[0]+m[1]+m[2]+m[3]+m[4]+m[5]+m[6]+m[7]+day1;
  else if(month1==10)        b1=m[0]+m[1]+m[2]+m[3]+m[4]+m[5]+m[6]+m[7]+m[8]+day1;
  else if(month1==11)        b1=m[0]+m[1]+m[2]+m[3]+m[4]+m[5]+m[6]+m[7]+m[8]+m[9]+day1;
  else if(month1==12)        b1=m[0]+m[1]+m[2]+m[3]+m[4]+m[5]+m[6]+m[7]+m[8]+m[9]+m[10]+day1;
 
  else printf("��������������¿�ʼ\n");


  if(a==month2)              b2=day2;
  else if(month2==2)         b2=m[0]+day2;
  else if(month2==3)         b2=m[0]+m[1]+day2;
  else if(month2==4)         b2=m[0]+m[1]+m[2]+day2;                          //����1��1�յ���ѯ���ڵ�������b2
  else if(month2==5)         b2=m[0]+m[1]+m[2]+m[3]+day2;
  else if(month2==6)         b2=m[0]+m[1]+m[2]+m[3]+m[4]+day2;
  else if(month2==7)         b2=m[0]+m[1]+m[2]+m[3]+m[4]+m[5]+day2;
  else if(month2==8)         b2=m[0]+m[1]+m[2]+m[3]+m[4]+m[5]+m[6]+day2;
  else if(month2==9)         b2=m[0]+m[1]+m[2]+m[3]+m[4]+m[5]+m[6]+m[7]+day2;
  else if(month2==10)        b2=m[0]+m[1]+m[2]+m[3]+m[4]+m[5]+m[6]+m[7]+m[8]+day2;
  else if(month2==11)        b2=m[0]+m[1]+m[2]+m[3]+m[4]+m[5]+m[6]+m[7]+m[8]+m[9]+day2;
  else if(month2==12)        b2=m[0]+m[1]+m[2]+m[3]+m[4]+m[5]+m[6]+m[7]+m[8]+m[9]+m[10]+day2;
 
  else printf("��������������¿�ʼ\n");
  
  
  b=y-b1+b2 ;       //b�ǳ�����������ѯ���ڵ��ܼ������
	  printf("%d\n",b);
	  x=b%28;
	  1<=x<28;
	  if(x<=3)
		  printf("���������ٽ���");
	  else if(x<=12)
		  printf("�������ڵͳ���");
	  else if(x<=14)
		  printf("�������ڸ߳���");
	  else if(x<=26)
	      printf("�������ڵͳ���");
	  else 
		  printf("���������ٽ���");

system("pause");
return 0;


}
