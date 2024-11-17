#include<stdio.h>
#include<stdlib.h>
struct node{
    int coef;
    int expo;
    struct node* link;
};
void printPoly(struct node* head){
    struct node* p=head;
    while(p!=NULL){
        if(p->link==NULL){
            printf("%dX^%d",p->coef,p->expo);
        }
        else{
            printf("%dX^%d + ",p->coef,p->expo);
        }
        p=p->link;
    }
}
struct node* createNode(int coef,int expo){
    struct node* newNode=((struct node*)malloc(sizeof(struct node)));
    newNode->coef=coef;
    newNode->expo=expo;
    newNode->link=NULL;
    return newNode;
}
int main(){
    int no1,no2,coef,expo;
    struct node* phead=NULL;
    struct node* rhead=NULL;
    struct node* qhead=NULL;
    struct node* p=NULL;
    struct node* q=NULL;
    struct node* r=NULL;
    printf("Enter the number of terms in polynomial 1:");
    scanf("%d",&no1);
    for(int i=0;i<no1;i++){
        printf("Enter the coefficient and exponent of %d term\n",i+1);
        scanf("%d%d",&coef,&expo);
        struct node* temp=createNode(coef,expo);
        if(phead==NULL){
            phead=temp;
            p=temp;
        }
        else{
            p->link=temp;
            p=temp;
        }
    }
    printf("Polynomial 1 is\n");
    printPoly(phead);

    printf("enter the number of terms of second polynomial:");
    scanf("%d",&no2);
    for(int i=0;i<no2;i++){
        printf("Enter the coefficient and exponent of %d term\n",i+1);
        scanf("%d%d",&coef,&expo);
        struct node* temp=createNode(coef,expo);
        if(qhead==NULL){
            qhead=temp;
            q=temp;

        }
        else{
            q->link=temp;
            q=temp;
        }
    }
    printf("Polynomial 2 is\n");
    printPoly(qhead);

    p=phead;
    q=qhead;

    while(p!=NULL || q!=NULL){
        struct node*temp=((struct node*)malloc(sizeof(struct node)));
        if(p!=NULL &&(q==NULL || p->expo>q->expo)){
            temp->coef=p->coef;
            temp->expo=p->expo;
            p=p->link;
        }
        else if(q!=NULL &&(p==NULL || q->expo>p->expo)){
            temp->coef=q->coef;
            temp->expo=q->expo;
            q=q->link;
        }
        else{
            temp->coef=p->coef+q->coef;
            temp->expo=p->expo;
            p=p->link;
            q=q->link;
        }
        temp->link=NULL;
        if(rhead==NULL){
            rhead=temp;
            r=temp;
        }
        else{
            r->link=temp;
            r=temp;
        }
    }
    printf("Addition of two polynomials is\n");
    printPoly(rhead);
    return 0;
    
}
