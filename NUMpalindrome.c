#include<stdio.h>
void main()
{
    int n,num,d,rev=0;
    printf("enter the number :");
    scanf("%d",&n);
    num=n;
    while(n>0)
    { 
        d=n%10;
        rev=(rev*10)+d;
        n=n/10;


    }
    if(num==rev)
    {
        printf("number is palindrome");
    }
    else
    {
        printf("number not a palindrome");
    }

}