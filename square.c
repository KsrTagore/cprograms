#include<stdio.h>
void main()
{
    int a,b,c;
    float r1,r2;
    printf("enter the value of a,b,c:");
    scanf("%d %d %d",&a,&b,&c);
    d=(b*b)-4*a*c;
    if (d>0)
{
    printf("the roots of real and distent");
    r1=-b+sqrt(d)/2*a;
    r2=-b+sqrt(d)/2*a;
    printf("r1=%f\nr2=%f",r1,r2)
}
}
