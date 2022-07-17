//Program to find the Nth term of the Fibonnaci series

#include<stdio.h>
int main()
{
    int N,i,term1=-1,term2=1,term3;
    printf("Enter the number\n");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        term3=term1+term2;
        term1=term2;
        term2=term3;
    }
    printf("%d",term3);
    return 0;
}