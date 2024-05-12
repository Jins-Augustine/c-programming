#include<stdio.h>
void main()
{
    int arr[20],i,n,*p;
    printf("enter the number of elements");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    p=&arr[0];
    printf("elemets are \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(p+i));
    }

}