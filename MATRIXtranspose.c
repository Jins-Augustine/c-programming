// transpose of a matrix
#include<stdio.h>
void main()
{
    int i,j,r,c,array[100][100];
    printf("enter the number of rows and columns ");
    scanf("%d%d",&r,&c);
    printf("enter the values ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    printf("the matrix is\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
     printf("the tranpose of matrix is\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",array[j][i]);
        }
        printf("\n");
    }
}