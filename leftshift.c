#include<stdio.h>
void main()
{
  int x=15;
  int y=x<<5;
  printf("lets shift 15 to 5:%d\n",y);
  printf("lets see how much we were shifting 15:%d\n",y/15);
  while(y%2==0)
  {
    printf("1");
  }

}
