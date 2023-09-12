#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*link;
};

void specificdelete(struct node **);

int main()
{
    struct node *head=NULL;
    struct node *temp;
    struct node *newnode;

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

        printf("DO YOU WANT TO CONTINUE 0|1\n");
        scanf("%d",&choice);


    }

    printf("PRINTING DATA\n");
    temp=head;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->link;
    }
    
    specificdelete(&head);

    printf("PRINTING DATA AFTER DELETION\n");
    temp=head;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->link;
    }


}


void specificdelete(struct node **headref)
{

    struct node*temp=*headref;
    struct node*nextnode=NULL;
    int i=1;
    int position;
    printf("ENTER THE POSITION AT WHICH YOU WANT TO DELETE DATA\n");
    scanf("%d",&position);

    while(i<position-1)
    {
        temp=temp->link;
        i++;
    }
    
    nextnode=temp->link;
    temp->link=nextnode->link;
    free(nextnode);

}