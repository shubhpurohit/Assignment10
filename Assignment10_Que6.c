#include<stdio.h>
int factorial(int);

int main()
{
    int n,fact;
    printf("Enter an number ");
    scanf("%d",&n);
    fact=factorial(n);
    printf("Factorial is %d",fact);
    return 0;
}

int factorial(int n)
{
    int f=1;
    for(int i=n;i>0;i--)
    {
        f=f*i;
    }
    return f;
}
