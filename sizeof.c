#include<stdio.h>
void main ()
{
  int x,y,z;
  x=sizeof(33);
  y=sizeof(22.22);
  z=sizeof('a');
  printf("%d%d%d",x,y,z);
}
