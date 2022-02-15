#include<stdio.h>
void main()
{
  int x;
  x=~-688;
  printf("%d",x);
}
/*
12=000000000000000000000000000001100
bitwise conversion
12=111111111111111111111111111110011
as we can se whenever we  have one at the starting bit the value shuld be in zero
and we have to add one bit to convert it to thows compliment
12=000000000000000000000000000001100
12=000000000000000000000000000001101
so now we get -13 as a negative value




*/
