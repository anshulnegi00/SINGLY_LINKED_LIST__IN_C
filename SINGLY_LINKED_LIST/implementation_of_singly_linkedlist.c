#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

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





}