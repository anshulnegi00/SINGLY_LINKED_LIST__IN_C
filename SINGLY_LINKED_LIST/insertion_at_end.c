#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*link;
};

void endinsert(struct node**,int);
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
        newnode->link=0;
        
        if(head==0)
        {
            head=temp=newnode;
        }
        
        else
        {
            temp->link=newnode;
            temp=newnode;
        }

        printf("DO YOU WANT TO CONTINUE 0|1\n");
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
    printf("ENTER THE ITEM YOU WANT TO INSERT AT END\n");
    scanf("%d",&item);
    endinsert(&head,item);

    printf("PRINTING DATA AGAIN AFTER INSERTION\n");
    temp=head;
    while(temp!=0)
    {
        printf("%d\n",temp->data);
        temp=temp->link;
    }


}


void endinsert(struct node** headref,int item)
{
  
  struct node *newnode=malloc(sizeof(struct node));
  struct node *temp=*headref;
  newnode->data=item;
  newnode->link=NULL;
  
  while(temp->link!=0)
  {
    temp=temp->link;
  }
   temp->link=newnode;

}