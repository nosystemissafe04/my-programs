#include<stdio.h>
void main()
{
int x ,y;
printf("enter the value of x:");
scanf("%d",&x);
printf("enter the value of y:");
scanf("%d",&y);
if(x%y==0)
{
  printf("the given no. is fully divisible");
}
else
{
  printf("the given no. is not divisible: %d\n",x%y);
}
}
