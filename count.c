#include<stdio.h>
int main()
{
    int n,i=2;
    //printf("ENETR THE VALUE\n");
    //scanf("%d",&n);
    for(n=1;n<=100;n++)
    {
        if(n%i==0)
        printf(" ");
        else
        printf("%d",n);

    }
    printf("\n");
}