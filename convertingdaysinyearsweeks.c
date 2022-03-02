#include<stdio.h>
void main()
{
 int x,a,y ;
 printf("enter the value of days :");
 scanf("%d",&x);
if (x<365)
{
 printf("years=0\n");
 printf("weeks=%d\n",a=x/7);//
 y=x%7;
 printf("days=%d\n",y);

}
if(x>=365)
 {
 printf("years=%d\n",x/365);
 a=x%365;
 printf("weeks=%d\n",a/7);
 y=a%7;
 printf("days=%d\n",y);
}
/*if (x=365)
{
printf("year=1\n");
}
*/
}
