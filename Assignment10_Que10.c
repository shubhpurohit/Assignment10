#include<stdio.h>
int primeFactor(int);
int main()
{
    int n;
    printf("Enter an number ");
    scanf("%d",&n);
    primeFactor(n);
    return 0;
}

int primeFactor(int n)
{   int i=2;
    while(i<=n)
    {
    if(n%i==0)
    {
        printf(" %d",i);
    n=n/i;
    }
    else
        i++;
    }
}

