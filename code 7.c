//Program to print all Prime numbers between two given numbers

#include<stdio.h>
int main()
{
    int i,j,num1,num2;
    printf("Enter two numbers\n");
    scanf("%d %d",&num1,&num2);
    for(i=num1+1;i<=num2-1;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
               break;
        }
        if(i==j)
           printf("%d ",i);
    }
    return 0;
}