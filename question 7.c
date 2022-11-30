#include<stdio.h>
int main()
{
    int count,n;
    printf("ENETR THE VALUE\n");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n%10;
        count++;
        n=n/10;
    }
    
}