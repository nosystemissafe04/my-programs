#include <stdio.h>
void main()
{
int x,a,b,c,d,e,f,g,h,i,j,k,l,m;
printf("enter the number :");
scanf("%d",&x);
printf("%d note(s) of 100\n",b=x/100);
a=x-100*b;
printf("%d note(s) of 50\n",c=a/50);
d=a-50*c;
printf("%d note(s) of 20\n",e=d/20);
f=d-20*e;
printf("%d note(s) of 10\n",g=f/10);
h=f-10*g;
printf("%d note(s) of 5\n",i=h/5);
j=h-5*i;
printf("%d coin(s) of 2\n",k=j/2);
l=j-2*k;
printf("%d coin(s) of 1\n",m=l/1);


}
