#include<stdio.h>
void pop();
void push();
void display();
int top=-1,item,a[10],i,maxsize;
void main()
{   int ch;
    printf("enter the maxsize of the stack\n");
    scanf("%d",&maxsize);
    int choice;
    printf("MENU\n");
    printf("1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
    while(choice!=4){
    printf("enter your choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        
    }
    }
}
void push()
{
    if(top==maxsize-1)
    {
        printf("stack overflow\n");
    }
    else 
    {
        printf("enter the element to be pushed\n");
        scanf("%d",&item);
        top++;
        a[top]=item;

    }
}

void pop()
{
    if(top==-1)
    {
        printf("stack underflow\n");

    }
    else{
        printf("the poped element is %d",a[top]);
        top--;
    }
}

void display()
{
    printf("the elements in the stack are\n");
    for(i=top;i>=0;i--)
    {
        printf("%d\n",a[i]);
    }
}


