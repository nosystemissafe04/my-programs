#include<stdio.h>
void main()
{
	float x,d;
	int y,m,k;
	printf("enter the number of days :");
	scanf("%f",&x);
	y=x/365;
	printf("years=%d\n",y);
	d=(x/365)-y;
	y=d*365;
	m=y/30;
	printf("months=%d\n",m);
    k=y-m*30;
    printf("days=%d\n",k);
}
