#include<stdio.h>
void buildTree(int a[],int i,int item)
{
	a[i]=item;
	int val;
	char ch;
	printf("Do you want to insert a left child for %d(y/n):",item);
	scanf(" %c",&ch);
	if(ch=='y'||ch=='Y')
	{
		printf("Enter the left child of %d:",item);
		scanf("%d",&val);
		buildTree(a,(2*i)+1,val);
	}
	printf("Do you want to insert a right child for %d",item);
	scanf(" %c",&ch);
	if(ch=='y' || ch=='Y')
	{
		printf("Enter the right child of %d:",item);
		scanf("%d",&val);
		buildTree(a,(2*i)+2,val);
	}
}
	
int main()
{
	int a[100],item,n;
	printf("Enter the total number of nodes:");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		a[i]=-1;
	printf("Enter the root node:");
	scanf("%d",&item);
	buildTree(a,0,item);
	printf("\nTHE BINARY TREE IS\n");
	for(int i=0;i<n;i++)
	{
		if(a[i]==-1)
			printf("-\t");
		else
			printf("%d\t",a[i]);
	}
	return 0;
}
	
