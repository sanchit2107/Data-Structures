#include<stdio.h>

struct node
{
    int info;
    struct node *next;
    struct node *prev;
};
struct node *front;
struct node *rear;

Insert_Queue_Doubly_Linked_List(int item)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
        printf("Memory not Initialized..\n\n");
    else if(rear==NULL)
    {
        temp->info=item;
        temp->prev=NULL;
        temp->next=NULL;
        front=temp;
        rear=temp;
        printf("\t%d is Inserted in Queue using Doubly Linked List..\n\n",temp->info);
    }
    else
    {
        temp->info=item;
        temp->next=NULL;
        temp->prev=rear;
        rear->next=temp;
        rear=temp;
        printf("\t%d is Inserted in Queue using Doubly Linked List..\n\n",temp->info);
    }
}

Delete_Queue_Doubly_Linked_List()
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    if(front=NULL)
        printf("Queue is UNDERFLOW..\n\n");
    else if(front->next==NULL)
    {
        temp=front;
        printf("\t%d is Deleted from Queue ....\n\n",temp->info);
        front=NULL;
        free(temp);
        temp=NULL;
    }
    else
    {
        temp=front;
        printf("\t%d is Deleted from Queue ....\n\n",temp->info);
        front=front->next;
        front->prev=NULL;
        free(temp);
        temp=NULL;

    }
}

Display_Queue()
{
    struct node *loc;
    loc=front;
    while(loc!=NULL)
    {
        printf("\t%d",loc->info);
        loc=loc->next;
    }
    printf("\n");
}

main()
{
    int item,choice;
    while(1)
    {
        printf("\t\t***IMPLEMENTATION OF QUEUE USING DOUBLY LINKED LIST***\n\n");
        printf("1.Insert in Queue.\n");
        printf("2.Delete from Queue.\n");
        printf("3.Display all Elements Queue.\n");
        printf("\t4.Exit.\n\n");
        printf("Enter your Choice :");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("Enter item to be Inserted at Begining :");
            scanf("%d",&item);
            Insert_Queue_Doubly_Linked_List(item);
            break;
        case 2:
            Delete_Queue_Doubly_Linked_List();
            break;
        case 3:
            printf("\nQueue Elements are as folows : \n");
            Display_Queue();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid Choice..\n\n");
        }
    }
}
