#include<stdio.h>

struct node
{
    int info;
    struct node *next;
    struct node *prev;
};
struct node *start;

Insert_beg_Doubly_Linked_List(int item)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
        printf("Memory not Initialized..\n\n");
    else if(start==NULL)
    {
        temp->info=item;
        temp->prev=NULL;
        temp->next=NULL;
        start=temp;
        printf("%d is Insertedat Begining in Doubly Linked List\n\n",temp->info);
    }
    else
    {
        temp->info=item;
        temp->prev=NULL;
        temp->next=start;
        start->prev=temp;
        start=temp;
        printf("%d is Inserted at Begining in Doubly Linked List\n\n",temp->info);
    }
}

Insert_end_Doubly_Linked_List(int item)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
        printf("Memory not Initialized..\n\n");
    else if(start==NULL)
    {
        temp->info=item;
        temp->prev=NULL;
        temp->next=NULL;
        start=temp;
        printf("%d is Inserted at End in Doubly Linked List\n\n",temp->info);
    }
    else
    {
        struct node *loc;
        temp->info=item;
        temp->next=NULL;
        loc=start;
        while(loc->next!=NULL)
        {
            loc=loc->next;
        }
        temp->prev=loc;
        loc->next=temp;
        printf("%d is Inserted at End in Doubly Linked List\n\n",temp->info);
    }
}

Delete_beg_Doubly_Linked_List()
{
    struct node *temp;
    if(start==NULL)
        printf("Doubly Linked List is UNDERFLOW..\n\n");
    else if(start->next==NULL)
    {
        temp=start;
        printf("%d is Deleted from Doubly Linked List..\n\n",temp->info);
        start=NULL;
        free(temp);
        temp=NULL;
    }
    else
    {
        temp=start;
        printf("%d is Deleted from Doubly Linked List..\n\n",temp->info);
        start=start->next;
        start->prev=NULL;
        free(temp);
        temp=NULL;
    }
}

Delete_end_Doubly_Linked_List()
{
    struct node *temp;
    if(start==NULL)
        printf("Doubly Linked List is UNDERFLOW..\n\n");
    else if(start->next==NULL)
    {
        temp=start;
        printf("%d is Deleted from End in Doubly Linked List..\n\n",temp->info);
        start=NULL;
        free(temp);
        temp=NULL;
    }
    else
    {
        struct node *loc;
        loc=start;
        while(loc->next!=NULL)
        {
            loc=loc->next;
        }
        temp=loc->prev;
        printf("%d is Deleted from End in Doubly Linked List..\n\n",loc->info);
        temp->next=NULL;
        free(loc);
        loc=NULL;
    }
}

Display_Doubly_Linked_List()
{
    struct node *loc;
    loc=start;
    while(loc!=NULL)
    {
        printf("\t%d",loc->info);
        loc=loc->next;
    }
    printf("\n");
}

main()
{
    int item;
    int choice;
    while(1)
    {
        printf("1.Insert at Begining of Doubly Linked List.\n");
        printf("\t2.Insert at End of Doubly Linked List.\n");
        printf("3.Delete from Begining of Doubly Linked List.\n");
        printf("\t4.Delete from End of Doubly Linked List.\n");
        printf("5.Display all Elements of Doubly Linked List.\n");
        printf("\t6.Exit.\n\n");
        printf("Enter your Choice :");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("Enter item to be Inserted at Begining :");
            scanf("%d",&item);
            Insert_beg_Doubly_Linked_List(item);
            break;
        case 2:
            printf("Enter item to be Inserted at End :");
            scanf("%d",&item);
            Insert_end_Doubly_Linked_List(item);
            break;
        case 3:
            Delete_beg_Doubly_Linked_List();
            break;
        case 4:
            Delete_end_Doubly_Linked_List();
            break;
        case 5:
            Display_Doubly_Linked_List();
            break;
        case 6:
            exit(0);
        default:
            printf("Invalid Choice..\n\n");
        }
    }

}
