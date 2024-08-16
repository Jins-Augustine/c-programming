#include<stdio.h>
void main()
{
    int a[100][100],b[100][3],i,j,r,c,k=1,nonzero=0;
    printf("Enter the number of rows and colums\n");
    scanf("%d%d",&r,&c);
    printf("enter the elements of sparse matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("SPARSE MATRIX IS\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]!=0)
            {
                nonzero++;
                b[k][0]=i;
                b[k][1]=j;
                b[k][2]=a[i][j];
                k++;
            }
        }
    }
    b[0][0]=r;
    b[0][1]=c;
    b[0][2]=nonzero;
    printf("\nROWS\tCOLUMNS\tVALUES\n");
    for(i=0;i<=nonzero;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

    
}