#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*link;
};

void specificinsert(struct node**,int);

int main()
{
    int num;
    int choice=1;
    struct node*head=NULL;
    struct node*newnode;
    struct node*temp;

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

    printf("DO YOU WANT TO CONITNUE 0|1\n");
    scanf("%d",&choice);


    }

    printf("PRITINING DATA\n");
    temp=head;
    while(temp!=0)
    {
        printf("%d\n",temp->data);
        temp=temp->link;
    }
    
    printf("ENTER THE DATA YOU WANT TO ENTER\n");
    scanf("%d",&num);
    specificinsert(&head,num);
  
    printf("PRINTING DATA ATER INSERTION\n");
    temp=head;
    while(temp!=0)
    {
        printf("%d\n",temp->data);
        temp=temp->link;
    }



}


void specificinsert(struct node **headref,int num)
{
    int pos;

    struct node*newnode=malloc(sizeof(struct node));
    struct node *temp=*headref;
    

    printf("ENTER THE POSITION\n");
    scanf("%d",&pos);

    int i=1;

    while(i<pos)
    {
        temp=temp->link;
        i++;
    }

    newnode->data=num;
    newnode->link=temp->link;
    temp->link=newnode;

}
