//Write a program to calculate factorial of a number
#include<stdio.h>
int main()
{
    int i,n,sum=1;
    printf("ENTER THE VALUE\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum*i;
    }
    printf("%d",sum);
    return 0;
}