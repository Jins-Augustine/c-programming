#include<stdio.h>
void main()
{
    int ar[100],i,n,x,j,left=0,mid,flag=0,temp;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    int right =n-1;
    printf("enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("enter the element to be searched\n");
    scanf("%d",&x);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(ar[j]>ar[j+1])

            {
                temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
        }
    }
    printf("sorted aray\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",ar[i]);
    }
    while(left<=right)
    {
        mid=(left+right)/2;
        if(x==ar[mid])
        {
            flag=1;
            break;
        }
        else if(x<ar[mid])
        {
            right=mid-1;
        }
        else if(x>ar[mid])
        {
            left=mid+1;
        }
    }
    if(flag==1)
    {
        printf("element is found");

    }
    else{
        printf("element not found");
    }

}
