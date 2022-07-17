//Program to check whether a given number is there in the Fibonacci series or not.

#include<stdio.h>
int main()
{
    int N,i,term1,term2,term3;
    printf("Enter the number\n");
    scanf("%d",&N);
    if(N==0 || N==1)
       printf("%d is a fibonacci term",N);
    else
    {
        term1=-1;
        term2=1;
        term3=term1+term2;
        for(i=0;term3<N;i++)
        {
            term3=term1+term2;
            term1=term2;
            term2=term3;
        }
        if(N==term3)
           printf("%d is a fibonacci term",N);
        else
           printf("%d is not a fibonacci term",N);
    }
    return 0;
}