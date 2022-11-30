//Write a program to count digits in a given number
#include<stdio.h>
int main()
{
    int i,n,count=0;
    printf("ENTER THE VALUE\n");
    scanf("%d",&n);
    while(n!=0)
    {
        i=n%10;
        count++;
        n=n/10;
    }
    printf("TOTAL DIGITS ARE %d",count);
    
    return 0;
}