//Write a program to reverse a given number
#include<stdio.h>
int main()
{
    int n,rem,reverse=0;
    printf("ENTER THE VALUE\n");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        reverse=reverse*10+rem;
        n=n/10;
    }
    printf("REVERSE NUMBER IS %d",reverse);
    return 0;
}