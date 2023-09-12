#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void begindelete(struct node **);

int main()
{    
    int choice=1;
    struct node *head=NULL;
    struct node *temp;
    struct node *newnode;
    

    while(choice)
    {

    newnode=(struct node*)malloc(sizeof(struct node));
    printf("ENTER DATA \n");
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

    printf("DO YOU WANT TO CONINUE   0|1\n");
    scanf("%d",&choice);
    
    
    }

    printf("PRINTING DATA \n");
    temp=head;
    while(temp!=0)
    {
        printf("%d\n",temp->data);
        temp=temp->link;
    }


    begindelete(&head);

    printf("PRINTING DATA AFTER DELETION FROM BEGINNING\n");
    temp=head;
    while(temp!=0)
    {
        printf("%d\n",temp->data);
        temp=temp->link;
    }



}


void begindelete(struct node**headref)
{

  struct node*temp=*headref;

  *headref=(*headref)->link;
  free(temp);


}