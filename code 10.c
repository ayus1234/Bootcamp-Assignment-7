//Program to print all Armstrong numbers under 1000

#include<stdio.h>
int main()
{
    int i,j,temp,N,cube,sum;
    for(i=1;i<=1000;i++)
    {
        temp=i;
        sum=0;
        while(temp>0)
        {
            N=temp%10;
            cube=0;
            for(j=1;j<=N;j++)
            {
                cube=j*j*j;
            }
            sum=sum+cube;
            temp=temp/10;
        }
        if(sum==i)
           printf("%d ",i);
    }
    return 0;
}