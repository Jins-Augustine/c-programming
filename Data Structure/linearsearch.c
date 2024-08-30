#include<stdio.h>
void main()
{
	int n,x,i,count=0,ar[100];    /*n = number of array elememts
		 	 	      x= search element*/
	int spacecom,timecom=0;
	timecom++;
	timecom++;
	printf("enter the number of elements\t");
	scanf("%d",&n);
	printf("enter the elements\t");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
		timecom++;
	
	}
	timecom+=n+1;
	printf("enter the search element\t");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		if(ar[i]==x)
		{
			count++;
			printf("element found at position %d\n",i+1);
			timecom++;
		
		}
		timecom++;
		
		
	}
	timecom+=n+1;
	if(count>0)
	{
		printf("item is found %d times",count);
		timecom++;
		timecom++;
	}
	else
	{
		printf("item not found");
		timecom++;
		timecom++;
	}
	
	spacecom=(6*4)+(4*n);
	timecom++;
	printf("\nspacecomplexity is %d\n",spacecom);
	printf("timecomplexity is %d",timecom+8);
}
	
	
	
