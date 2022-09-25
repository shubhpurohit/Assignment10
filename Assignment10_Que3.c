#include<stdio.h>
int oddEven(int);
int main()
{
    int n,x;
    printf("Enter an number:- ");
    scanf("%d",&n);
    x=oddEven(n);
    if(x==1)
        printf("The number is even.");
    else
        printf("The number is odd.");
    return 0;

}

int oddEven(int n)
{
    if(n%2==0)
     return 1;
    else
       return 0;
}
