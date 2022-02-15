#include<stdio.h>
void main()
{
  char x=1,y=2;
  if(x&y)
  {
    printf("the bitwise AND opetation should be performed ");
  }
  if(x&&y)
  {
    printf("the logical AND operation should be performed");
  }
}
