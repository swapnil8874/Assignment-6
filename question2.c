//Write a program to calculate sum of first N even natural number
#include<stdio.h>
int main()
{
    int i,n,sum=0;
     printf("ENTER THE VALUE\n");
    scanf("%d",&n);
    for(i=0;i<=n;i+=2)
    {
        sum=sum+i;
    }
     printf("%d\n",sum);
        return 0;
    
}