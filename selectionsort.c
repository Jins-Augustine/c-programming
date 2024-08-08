#include<stdio.h>
void main()
{
    int a[100],i,j,n,temp,small=0;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        small=i;
        for(j=i+1;j<n;j++)
        {
            if(a[small]>a[j])
            {
                small=j;           
            }
        }
        if(i!=small)
        {
            temp=a[i];
            a[i]=a[small];
            a[small]=temp;
        }
    }
    printf("sorted array\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}   
