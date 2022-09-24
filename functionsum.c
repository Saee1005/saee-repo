#include<stdio.h>  
void sum();  
void main()   {

    printf("going to calculate sum of two numbers");
    sum();
}
void sum()  
{  
    int a,b;   
    printf("\nEnter two numbers");  
    scanf("%d %d",&a,&b);   
    printf("The sum is %d",a+b);  
}  