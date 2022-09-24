#include<stdio.h>
int main()
{
double first, second, temp;
printf("enter the first number");
scanf("%lf",&first);
printf("enter the second number");
scanf("%lf",&second);

temp=first;

first=second;
//value of temp (initial value of first) is assigned or shifted to the first value;

second=temp;
//%.2lf display upto two decimal points//
printf("after swapping, first number = %2.lf\n",first);
printf("after swapping, second number = %2.lf\n",second);
return 0;







}