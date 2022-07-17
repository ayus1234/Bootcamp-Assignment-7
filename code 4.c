//Program to calculate HCF of two numbers

#include<stdio.h>
int main()
{
    int num1,num2,i;
    printf("Enter two numbers\n");
    scanf("%d %d",&num1,&num2);
    for(i=num1<num2?num1:num2;i>=1;i--)
    {
        if(num1%i==0 && num2%i==0)
           break;
    }
    printf("HCF of %d and %d is %d",num1,num2,i);
    return 0;
}