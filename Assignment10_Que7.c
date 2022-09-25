#include<stdio.h>
float calcCombinations(int,int);
int main()
{
    int n,r;
    float comb;
    printf ("Enter the value of N ");
    scanf("%d",&n);
    printf ("Enter the value of R ");
    scanf("%d",&r);
    comb=calcCombinations(n,r);
    printf("\n The number of combinations possible are=%.2f",comb);
    return 0;

}

float calcCombinations(int x,int y)
{
    int fact_n=1,fact_r=1,fact_nr=1;
    float ans;
    for(int i=x;i>=1;i--)
    {
        fact_n*=i;
    }
    for(int j=y;j>=1;j--)
    {
        fact_r*=j;
    }
    for(int k=x-y;k>=1;k--)
    {
        fact_nr*=k;
    }

    ans=fact_n/(fact_r*fact_nr);
    return ans;

}
