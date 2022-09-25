#include<stdio.h>
void nOdd(int);
int main()
{
    int n;
    printf("Enter an number ");
    scanf("%d",&n);
    nOdd(n);
    return 0;

}
void nOdd(int n)
{
    for(int i=1;i<=2*n;i++)
    {
        if(i%2!=0)
        {
            printf("%d ",i);
        }
    }
}
