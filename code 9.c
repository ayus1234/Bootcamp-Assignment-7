//Program to check whether a given number is an Armstrong number or not

#include<stdio.h>
int main()
{
    int num,temp,i,j,cube,sum=0;
    printf("Enter the number\n");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        j=num%10;
        cube=0;
        for(i=1;i<=j;i++)
        {
            cube=i*i*i;
        }
        sum=sum+cube;
        num=num/10;
    }
    if(sum==temp)
       printf("%d is an Armstrong Number",temp);
    else
       printf("%d is not an Armstrong Number",temp);
    return 0;
}