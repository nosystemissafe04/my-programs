#include<stdio.h>
void main()
{
  int x,y,z;
  double a;
  printf("lets create an program to identify which variable is divisible or not (!~):) \n");
  printf("enter the value of x:");
  scanf("%d",&x);
  printf("enter the value of y :");
  scanf("%d",&y);
  x%y==0?printf("the number is divisible by x:%d\n",y),z=(x/y),printf("x is %d times divided by y \n",z)
  :(printf("the number is not completely divisibile by y:%d\n",x),a=x/y
  ,printf("the division is not complete as it is a terminating number :%.3lf",a));
}
