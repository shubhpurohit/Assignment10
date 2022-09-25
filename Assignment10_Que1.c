#include<stdio.h>
float calcArea(float);
int main()
{
    float r;
    float area;
    printf("Enter the radius of the circle: ");
    scanf("%f",&r);
    printf("\n");
    area=calcArea(r);
    printf("%.2f",area);
    return 0;
}

float calcArea(float r)
{
    float ar;
    ar=3.14*r*r;
    return ar;
}

