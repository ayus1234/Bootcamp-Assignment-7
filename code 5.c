//Program to check whether two given numbers are co-prime numbers or not

#include<stdio.h>
int main()
{
    int num1,num2,i,j;
    printf("Enter two numbers\n");
    scanf("%d %d",&num1,&num2);
    j=num1<num2?num1:num2;
    for(i=2;i<=j;i++)
    {
        if(num1%i==0 && num2%i==0)
           break;
    }
    if(i>j)
       printf("%d and %d are co prime",num1,num2);
    else
       printf("%d and %d are not co prime",num1,num2);
    return 0;
}