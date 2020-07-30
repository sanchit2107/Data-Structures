#include<stdio.h>

struct node
{
    int info;
    struct node *prev;
    struct node *next;
};
struct node *cstart;

Insert_beg_Circular_Doubly_Linked_List(int item)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
        printf("Memory not Initialized..\n\n");
    else if(cstart==NULL)
    {
        temp->info=item;
        temp->next=temp;
        temp->prev=temp;
        cstart=temp;
        printf("\t%d is Inserted at Begining in Circular Doubly Linked List..\n\n",temp->info);
    }
    else
    {
        struct node*loc;
        loc=cstart;
        while(loc->prev!=cstart)
        {
            loc=loc->prev;
        }
        temp->info=item;
        temp->prev=cstart;
        temp->next=loc;
        loc->prev=temp;
        cstart->next=temp;
        printf("\t%d is Inserted at Begining in Circular Doubly Linked List..\n\n",temp->info);
    }
}

Insert_end_Circular_Doubly_Linked_List(int item)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
        printf("Memory not Initialized..\n\n");
    else if(cstart==NULL)
    {
        temp->info=item;
        temp->next=temp;
        temp->prev=temp;
        cstart=temp;
        printf("\t%d is Inserted at End in Circular Doubly Linked List..\n\n",temp->info);
    }
    else
    {
        struct node*loc;
        loc=cstart;
        while(loc->prev!=cstart)
        {
            loc=loc->prev;
        }
        temp->info=item;
        temp->prev=cstart;
        temp->next=cstart->next;
        cstart->next=temp;
        loc->prev=temp;
        cstart=temp;
        printf("\t%d is Inserted at End in Circular Doubly Linked List..\n\n",temp->info);
    }
}

Display_Circular_Doubly_Linked_list()
{
    struct node *loc;
    loc=cstart;
    while(loc!=NULL)
    {
        printf("\t%d",loc->info);
        loc=loc->prev;
    }
    printf("\n");
}

main()
{
    int item;
    int choice;
    while(1)
    {
        printf("\t\t****Circular Doubly Linked List****\n");
        printf("1.Insert at Begining.\n");
        printf("\t2.Insert at End.\n");
        printf("3.Delete from Begining.\n");
        printf("\t4.Delete from End.\n");
        printf("5.Display all Elements.\n");
        printf("\t6.Exit.\n\n");
        printf("Enter your Choice :");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("Enter item to be Inserted at Begining :");
            scanf("%d",&item);
            Insert_beg_Circular_Doubly_Linked_List(item);
            break;
        case 2:
            printf("Enter item to be Inserted at End :");
            scanf("%d",&item);
            Insert_end_Circular_Doubly_Linked_List(item);
            break;
        /*case 3:
            Delete_beg_Doubly_Linked_List();
            break;
        case 4:
            Delete_end_Doubly_Linked_List();
            break;*/
        case 5:
            Display_Circular_Doubly_Linked_list();
            break;
        case 6:
            exit(0);
        default:
            printf("Invalid Choice..\n\n");
        }
    }

}

