//Write a program to calculate sum of squares of first N natural number
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("ENTER THE VALUE\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i*i;
    }
    printf("%d",sum);
    return 0;
}