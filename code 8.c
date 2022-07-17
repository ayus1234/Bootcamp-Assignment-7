//Program to find next Prime number of a given number

#include<stdio.h>
int main()
{
    int num,i,j;
    printf("Enter the number\n");
    scanf("%d",&num);
    for(i=num+1;i<=100;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
               break;
        }
        if(i==j)
        {
            printf("%d ",i);
            break;
        }
    }
    return 0;
}