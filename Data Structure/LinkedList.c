#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* link;
}*head=NULL,*temp,*ptr,*ptr1;
void display()
{
    if(head==NULL)
        printf("List is empty\n");
    else
    {
        ptr=head;
        while(ptr!=NULL)
        {
            printf("%d\t",ptr->data);
            ptr=ptr->link;
        }
        printf("\n");
    }
}
int insertion_at_beginning(int data)
{
    temp=((struct node*)malloc(sizeof(struct node)));
    if(temp==NULL)
    {
        printf("No memory available\n");
        return 0;
    }
    else
    {
        temp->data=data;
        temp->link=head;
        head=temp; 
        return 1;
    }
}
int insertion_at_end(int data)
{
    if(head==NULL)
        return insertion_at_beginning(data);
    else
    {
        temp=((struct node*)malloc(sizeof(struct node)));
        if(temp==NULL)
        {
            printf("No memory available\n");
            return 0;
        }
        else{
            ptr=head;
            while(ptr->link!=NULL)
                ptr=ptr->link;
            temp->data=data;
            ptr->link=temp;
            temp->link=NULL;
            return 1;

        }
    }
}
int insertion_at_any_point(int data,int key)
{
    if(head==NULL)
        return insertion_at_beginning(data);
    else{
        temp=((struct node*)malloc(sizeof(struct node)));
        if(temp==NULL)
        {
            printf("No memory available\n");
            return 0;
        }
        else{
            ptr=head;
            while(ptr->data!=key && ptr->link!=NULL)
            {
                ptr=ptr->link;
            }
            temp->data=data;
            temp->link=ptr->link;
            ptr->link=temp;
            return 1;
        }
    }
}
int deletion_at_beginning()
{   int del;
    if(head==NULL)
    {
        printf("List is empty\n");
        return 0;
    }
    else
    {
        del=head->data;
        printf("%d deleted\n",head->data);
        ptr=head;
        head=ptr->link;
        free(ptr);
        return del;
    }
}
int deletion_at_end()
{
    int del;
    if(head==NULL)
    {
        printf("List is empty\n");
        return 0;
    }
    else
    {
        ptr=head;
        ptr1=ptr->link;
        while(ptr1->link!=NULL)
        {   ptr=ptr->link;
            ptr1=ptr1->link;
        }
        del=ptr1->data;
        free(ptr1);
        ptr->link=NULL;
        return del;
    }     
}
int deletion_at_any_point(int key)
{
    int del;
    if(head==NULL)
    {
        printf("List is empty\n");
        return 0;
    }
    if(head->data==key)
    {
        del=deletion_at_beginning();
        return del;
    }
    else
    {
        ptr=head;
        ptr1=ptr->link;
        while(ptr1!=NULL && ptr1->data!=key)
        {
            ptr=ptr->link;
            ptr1=ptr1->link;
        }
        if(ptr1==NULL)
        {
            printf("%d not found\n",key);
            return 0;
        }
        else{
        del=ptr1->data;
        ptr->link=ptr1->link;
        free(ptr1);
        return del;
        }

    }
}
int main()
{
    int ch,data,key,del;
    do{
        printf("\n----LINKED LIST----\n");
        printf("1.Insertion at beginning\n2.Insertion at end\n3.Insertion at any point\n4.Deletion at beginning\n5.Deletion at end\n6.Deletion at any point\n7.Display\n8.Exit\n");
        printf("Enter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Enter the data\n");
                scanf("%d",&data);
                if(insertion_at_beginning(data)==0)
                {
                    break;
                }
                else
                {
                    printf("%d Inserted\n",data);
                }
                break;
            case 2:printf("Enter the data\n");
                scanf("%d",&data);
                if(insertion_at_end(data)==0)
                {
                    break;
                }
                else
                {
                    printf("%d Inserted\n",data);
                }
                break;
            case 3:printf("Enter the data\n");
                scanf("%d",&data);
                printf("Enter the item after which data is to be inserted\n");
                scanf("%d",&key);
                if(insertion_at_any_point(data,key)==0)
                    break;
                else
                    printf("%d Inserted\n",data);
                break;
            case 4:del=deletion_at_beginning();
                if(del==0)
                    break;
                else
                    printf("%d deleted\n",del);
                break;
            case 5:del=deletion_at_end();
                if(del==0)
                    break;
                else
                    printf("%d deleted\n",del);
                break;
            case 6:printf("Enter the item after which data is to be deleted\n");
                scanf("%d",&key);
                del=deletion_at_any_point(key);
                if(del==0)
                    break;
                else
                    printf("%d deleted\n",del);
                break;
            case 7:display();
                break;
            case 8:exit(0);
            default:printf("invalid choice\n");
        }
    }while(ch!=8);
    return 0;
}

