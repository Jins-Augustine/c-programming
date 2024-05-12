#include<stdio.h>
void main()
{
    char ch;
    int count=0;
    FILE *fp;
    fp=fopen("marklist.c","r");
    while((ch=fgetc(fp))!=EOF)
    {
      
        if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u')
        {
            count++;
        }
    }
    printf("Count of vowels: %d\n", count);
    fclose(fp);

}