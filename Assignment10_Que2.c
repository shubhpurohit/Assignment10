#include<stdio.h>
int SimpInt(int,int,int);
int main()
{
    int p,r,t,SI;
    printf("Enter the principle amount,rate and time:-");
    scanf("%d%d%d",&p,&r,&t);
    printf("\n");
    SI=SimpInt(p,r,t);
    printf("simple interest is %d",SI);
    return 0;
}

int SimpInt(int x,int y,int z)
{
    int si=(x*y*z)/100;
    return si;
}
