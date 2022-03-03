#include <stdio.h>
void main()
{
double x,a,c,d,q;
int b,z,k;
printf("enter the seconds:");
scanf("%lf",&x);  //25300
a=x/3600;       //7.0277777778
b=x/3600;       //7
c=a-b;          //0.0277777778
d=c*60;         //1.666666668
z=c*60;		//1
q=d-z; 		//0.666666668
k=q*60; 
printf("%d:%d:%d\n",b,z,k); 






}
