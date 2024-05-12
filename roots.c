#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,x,y,d;
    printf("Enter the values of a,b,c in the order ax^2 + b + c");
    scanf("%f %f %f",&a,&b,&c);
    d=(b*b)-(4*a*c);
    x=(-b+sqrt(d))/(2*a);
    y=(b+sqrt(d))/(2*a);
    if(d<0)
        printf("roots are imaginary");
    else if(d==0)
        printf("roots are %f %f",x,x);
    else
        printf("roots are %f %f",x,y);
}