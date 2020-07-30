#include<stdio.h>
struct node
{
    int info;
    struct node *next;
};
struct node *cstart;

Insert_beg_Circular_Linked_List(int item)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
        printf("Memory not Initialized");
    else if(cstart==NULL)
    {
        temp->info=item;
        temp->next=temp;
        cstart=temp;
        printf("\n %d Inserted at Begining in Circular Linked list..\n\n",temp->info);
    }
    else
    {
        temp->info=item;
        temp->next=cstart->next;
        cstart->next=temp;
        printf("\n %d Inserted at Begining in Circular Linked list..\n\n",temp->info);
    }
}

Insert_end_Circular_Linked_List(int item)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
        printf("Memory not Initialized");
    else if(cstart==NULL)
    {
        temp->info=item;
        temp->next=temp;
        cstart=temp;
        printf("\n %d Inserted at End in Circular Linked list..\n\n",temp->info);
    }
    else
    {
        temp->info=item;
        temp->next=cstart->next;
        cstart->next=temp;
        cstart=temp;
        printf("\n %d Inserted at End in Circular Linked list..\n\n",temp->info);
    }
}

Delete_beg_Circular_Linked_List()
{
    if(cstart==NULL)
        printf("UNDERFLOW..\n\n");
    else if(cstart->next==cstart)
    {
        struct node *temp;
        temp=cstart;
        printf(" %d is Deleted from Begining in Circular Linked List\n\n",temp->info);
        free(temp);
        temp=NULL;
        cstart=NULL;
    }
    else
    {
        struct node *temp;
        temp=cstart->next;
        printf(" %d is Deleted from Begining in Circular Linked List\n\n",temp->info);
        cstart->next=temp->next;
        free(temp);
        temp=NULL;

    }
}

Delete_end_Circular_Linked_List()
{
    if(cstart==NULL)
        printf("UNDERFLOW..\n\n");
    else if(cstart->next==cstart)
    {
        struct node *temp;
        temp=cstart;
        printf(" %d is Deleted from End in Circular Linked List\n\n",temp->info);
        free(temp);
        temp=NULL;
        cstart=NULL;
    }
    else
    {
        struct node *temp,*loc;
        loc=cstart;
        printf(" %d is Deleted from End in Circular Linked List\n\n",temp->info);
        while(loc->next=cstart)
        {
            loc=loc->next;
        }
        loc->next=cstart->next;
        temp=cstart;
        cstart=loc;
        free(temp);
        temp=NULL;
    }
}

Display_Circular_Linked_List()
{
    struct node *loc;
    loc=cstart;
    if(cstart==NULL)
        printf("Circular Linked List is Empty..\n\n");
    else
    {
        while(loc->next!=loc)
        {
            printf("\t%d",loc->info);
            loc=loc->next;
        }
        printf("\n");
    }

}
main()
{
    int item;
    int choice;
    while(1)
    {
        printf("1.Insert at Begining of Circular Linked List.\n");
        printf("\t2.Insert at End of Circular Linked List.\n");
        printf("3.Delete from Begining of Circular Linked List.\n");
        printf("\t4.Delete from End of Circular Linked List.\n");
        printf("5.Display all Elements of Circular Linked List.\n");
        printf("\t6.Exit.\n\n");
        printf("Enter your Choice :");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("Enter item to be Inserted at Begining :");
            scanf("%d",&item);
            Insert_beg_Circular_Linked_List(item);
            break;
        case 2:
            printf("Enter item to be Inserted at End :");
            scanf("%d",&item);
            Insert_end_Circular_Linked_List(item);
            break;
        case 3:
            Delete_beg_Circular_Linked_List();
            break;
        case 4:
            Delete_end_Circular_Linked_List();
            break;
        case 5:
            Display_Circular_Linked_List();
            break;
        case 6:
            exit(0);
        default:printf("Invalid Choice..\n\n");
        }
    }

}
