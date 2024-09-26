#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* link;

}*head;
void display()
{
    struct Node* ptr = header;
    // int count = 1;
    if(header == NULL)
    {
        printf("\nEmpty!\n");
        exit(1);
    }
    else
    {
        printf("\nElements are:\n");
        while(ptr != NULL)
        {
            // printf("\nData at node %d is %d", count, ptr->data);
            printf("%d\t", ptr->data);
            ptr = ptr->link;
            // count++;
        }
        printf("\nThere are %d elements.\n", getSize());
    }
}

void insertion_at_begining(int el)
{
    struct node* temp=((struct node*)malloc(sizeof(struct node)));
    if(temp=NULL)
    {
        printf("Not enough space\n");
        exit(1);
    }
    else
    {
        temp->data=el;
        temp->link=head;
        head=temp;
        display();
    }
}
void insertion_at_end(int el)
{
    if(head=NULL)
    {
        insertion_at_begining(el);
    }
    else
    {
        struct node* temp=((struct node*)malloc(sizeof(struct node)));
        if(new_ptr=NULL)
        {
            printf("Not enough space\n");
            exit(1);

        }
        temp->data=el;
        temp->link=NULL;
        struct node* temp=head;
        while(ptr->link!=NULL)
        {
            ptr=ptr->link;
        }
        ptr->link=temp;
        display();
    }
}
void insertion_at_any_point(int el,int pos)
{
    if(pos > getsize() && pos!=getsize()+1)
    {
        printf("invalid position\n");
        return;
    }
    struct node* temp=((struct node*)malloc(sizeof(struct node)));
    temp->data=el;
    temp->link=NULL;
    if(pos==1)
    {
        temp->link=head;
        head=temp;
        display();
        return;
    }
    printf("enter the position of the node(value of data in left: )");
    scanf("%d",&key)
    struct node* ptr=head;
    while(ptr!=NULL && ptr->data!=key)
    {
        ptr=ptr->link;
        i++;
    }
    temp->link=ptr->link;
    ptr->link=temp;
    display();



}

int main()
{
    char choice, cont;
    int el, pos, data;
    do{
        printf("\n1.Insert at front\n2.Insert at rear\n3.Insert at any position\n4.Display\nEnter your option: ");
        scanf("%c", &choice);
        switch(choice)
        {
            case '1':
                printf("\nElement to be inserted: ");
                scanf("%d", &el);
                insertAtFront(el);
                break;
            case '2':
                printf("\nElement to be inserted: ");
                scanf("%d", &el);
                insertAtRear(el);
                break;
            case '3':
                printf("\nElement to be inserted: ");
                scanf("%d", &el);
                printf("\nPosition to be inserted: ");
                scanf("%d", &pos);
                insertAtAny(el, pos);
                break;
            
            case '4':
                display();
                break;
            default:
                printf("\nInvalid option!");
        }
        printf("\nWant to continue? ");
        scanf("%c", &cont);
    }while(1);
    return 0;
}