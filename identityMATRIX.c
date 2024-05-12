#include<stdio.h>
void main()
{
    int i,j,n,a[100][100];
    printf("enter the order");
    scanf("%d",&n);
    printf("the identity matrix is\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                a[i][j]=1;
                
            }
            else
            {
                a[i][j]=0;
            }
            printf("%d ",a[i][j]);
            
        }
        printf("\n");
    }
}