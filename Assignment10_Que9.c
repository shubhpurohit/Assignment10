#include<stdio.h>
int DigiChecker(int,int);
int main()
{
    int n,d,c;
    printf("Enter an number ");
    scanf("%d",&n);
    printf("\nEnter an digit to check ");
    scanf("%d",&d);
    c=DigiChecker(n,d);
    if(c==1)
        printf("\nThe number is present");
    else if(c==0)
        printf("The number is not present");
    return 0;
}
int DigiChecker(int x,int y)
{
    while(x!=0)
    {
    if(x%10==y)
      {return 1;
        break;
      }
    else
        x=x/10;
    }
    if(x==0)
        return 0;


}
