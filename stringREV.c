#include<stdio.h>
#include<string.h>
void rev(char[]);
void main()
{
    char str[100];
    printf("Enter the string :");
    gets(str);
    rev(str);
} 
    
    void rev(char str[])
    {
        char reverse[20];
        int i=0,j,len;
        while(str[i]!='\0')
        {
            i++;
        }
        len=i;
        printf("length is %d\n",len);
        for(j=0;j<len;j++)
        {
            reverse[j]=str[i-1];
            i--;
        }
        reverse[j]='\0';
        printf("reversed string is %s\n",reverse);
    }

    