#include<stdio.h>
struct polynomial
{
    float coef;
    int expo;

}arr[100];

int main()
{
    int d,i;
    do{
        printf("Enter the number of terms : ");
        scanf("%d",&d);
        if(d<1)
        {
            printf("There should be atleast 1 term\n");

        }
    }
    while(d<1);
    for(i=0;i<d;i++)
    {
        printf("Enter the exponent of term %d : ",i);
        scanf("%d",&arr[i].expo);
        printf("Enter the coefficient of x^%d : ",arr[i].expo);
        scanf("%f",&arr[i].coef);
    }
    printf("The Polynomial is: \n");

    for(i=0;i<d;i++)
    {
        for(int j=i+1;j<d;j++)
        {
            if(arr[i].expo<arr[j].expo)
            {
                struct polynomial temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }

    }

    for(i=0;i<d;i++)
    {
        if(arr[i].coef==0)
        {
            continue;
        }
        else if(arr[i].expo==0)
        {
            printf("%f",arr[i].coef);
        }
        else if(arr[i].expo==1)
        {
            printf("%fx",arr[i].coef);
        }
        else if(arr[i].coef==1)
        {
            printf("x^%d",arr[i].expo);
        }
        else
        {
            printf("%fx^%d",arr[i].coef,arr[i].expo);
        }
        if(i!=d-1)
        {
            printf(" + ");
        }
        else
        {
            printf("\n");
        }
    }


}