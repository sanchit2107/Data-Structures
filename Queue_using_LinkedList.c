#include<stdio.h>
struct node
{
    int info;
    struct node *next;
};
struct node *front;
struct node *rear;

Insert_Queue_Linked_List(int item)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
        printf("Memory not Initialized..!!!!\n");
    else if(rear==NULL)
    {
        temp->info=item;
        temp->next=NULL;
        front=temp;
        rear=temp;

    }
    else
    {
        temp->info=item;
        temp->next=NULL;
        rear->next=temp;
        rear=temp;
    }
    printf("Element is Inserted in Queue..\n");
}

Delete_Queue_Linked_List()
{
    struct node *temp1;
    if(front==NULL)
        printf("Queue is UNDERFLOW");
    else if(front==rear)
    {
        temp1=front;
        printf("Element Deleted from Queue is : %d\n",temp1->info);
        free(temp1);
        temp1=NULL;
        front=NULL;
        rear=NULL;
    }
    else
    {
        temp1=front;
        printf("Element Deleted from Queue is : %d\n",temp1->info);
        front=front->next;
        free(temp1);
        temp1=NULL;
    }
}

Display_Queue_Linked_List()
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
    int choice;
    int item;
    while(1)
    {
        printf("\t\t*****Implementation of Queue using Linked List*****\n");
        printf("1.Insert an element in Queue\n");
        printf("2.Delete an element from Queue\n");
        printf("3.Display all elements of Queue\n");
        printf("4.Exit\n\n");
        printf("Enter ur choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:

            printf("Enter item to be Inserted in Queue :");
            scanf("%d",&item);
            Insert_Queue_Linked_List(item);
            break;
        case 2:
            Delete_Queue_Linked_List();
            break;
        case 3:
            Display_Queue_Linked_List();
            break;
        case 4:
            exit(0);
        }
    }

}
