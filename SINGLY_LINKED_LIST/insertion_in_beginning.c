#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};
void begininsert(struct node**,int);
int main()
{
    struct node *head=NULL;
    struct node *newnode;
    struct node *temp;
     
    int choice=1;

    while(choice)
    {
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("ENTER DATA\n");
    scanf("%d",&newnode->data);
    newnode->link=NULL;

    if(head==NULL)
    {
        head=temp=newnode;
    }
    else
    {
        temp->link=newnode;
        temp=newnode;
    }
    

    printf("DO YOU WANT TO CONTINUE  (0|1)\n");
    scanf("%d",&choice);
    }
    printf("PRINTING DATA\n");
    temp=head;
    while(temp!=0)
    {
        printf("%d\n",temp->data);
        temp=temp->link;
    
    }
    int item;
    printf("enter element you want to insert");
    scanf("%d",&item);
    begininsert(&head,item);
    
    printf("PRINTING DATA AGAIN\n");
    temp=head;
    while(temp!=0)
    {
        printf("%d\n",temp->data);
        temp=temp->link;
    }


}   



void begininsert(struct node** headref,int item)
{
    
    struct node*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=item;
    newnode->link=*headref;
    *headref=newnode;

}