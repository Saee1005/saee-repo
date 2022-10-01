
#include<stdio.h>
#include<math.h>
int main()
{
float p,r,R,emi;
int n;
printf("enter principal amount");
scanf("%f",&p);
printf("enter annual intrest rate");
scanf("%f",&R);
printf("enter number of months");
scanf("%d",&n);

r=R/(12*100);
emi = p*r*pow(1+r,n)/(pow(1+r,n)-1);
printf("montly emi %f",emi);
return 0;




}