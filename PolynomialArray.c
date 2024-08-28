#include<stdio.h>
void main()
{
    float poly[100];
    int d,i;
    do{
        printf("Enter the degree of the polynomial : ");
        scanf("%d",&d);
    
        if(d<1)
        {
         printf("Degree should be atleast 1\n");
        }
    }
    while(d<1);
    for(i=d;i>=0;i--)
    {
        printf("Enter the coefficient of x^%d : ",i);
        scanf("%f",&poly[i]);
    }
    printf("Polynomial is : ");
    for(i=d;i>=0;i--)
    {
        if(poly[i]!=0)
        {
            if(i==d)
            {
                printf("%2f x^%d",poly[i],i);
            }
            else if(i==1)
            {
                printf(" + %2f x",poly[i]);
            }
            else if(i==0)
            {
                printf(" + %2f",poly[i]);
            }
            else
            {
                printf(" + %2f x^%d",poly[i],i);
            }
        }
    }

}