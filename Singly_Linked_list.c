#include<stdio.h>
struct node
{
    int info;
    struct node *next;
};
struct node *start;

insert_beg_singly()
{
    struct node *temp;
    int item;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("Enter the Item :");
    scanf("%d",&item);
    temp->info=item;
    temp->next=start;
    start=temp;
    printf("New Node is Inserted in Singly Linked List at the Begining\n");
}

insert_end_singly()
{
    struct node *temp;
    struct node *loc;
    int item;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("Enter the Item :");
    scanf("%d",&item);
    if(temp==NULL)
        printf("Linked List is OVERFLOW");
    temp->info=item;
    temp->next=NULL;
    if(start==NULL)
        start=temp;
    else
    {
        loc=start;
        while(loc->next!=NULL)
        {
            loc=loc->next;

        }
        loc->next=temp;
    }
        printf("New Node is Inserted in Singly Linked List at the End\n");

}

delete_beg_linked_list()
{
    if(start == NULL)
        printf("UNDERFLOW..\n");
    else
    {
        struct node *temp;
        temp=(struct node *)malloc(sizeof(struct node));
        temp=start;
        start=start->next;
        printf("Element Deleted from Linked List is :%d\n",temp->info);
        free(temp);
        temp=NULL;
    }

}

delete_end_linked_list()
{
    struct node *temp;
    struct node *loc;
    if(start->next == NULL)
    {
        temp=start;
        start=NULL;
        printf("Deleted Element from end of  Linked List is :%d\n",temp->info);
    }
    else
    {
        loc=start;
        while(loc->next!=NULL)
        {
            temp=loc;
            loc=loc->next;
        }
        temp->next=NULL;
        printf("Deleted Element from end of  Linked List is :%d\n",loc->info);
        free(loc);
        loc=NULL;
    }
}

display_singly()
{
   struct node *locc;
   locc=start;
   while(locc!=NULL)
   {
       printf("\t");
       printf("%d",locc->info);
       locc=locc->next;
   }
}
main()
{
 int choice;
    while (1)
    {
        printf("                          \n");
        printf("1.Insert element at the Begining \n");
        printf("2.Insert element at the End of the List \n");
        printf("3.Display \n");
        printf("4.Quit \n");
        printf("5.Delete from Begining \n");
        printf("6.Delete from End \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert_beg_singly();
            break;
        case 2:
            insert_end_singly();
            break;
        case 3:
            printf("Singly Linked List as follows :\t\n");
            display_singly();
            break;
        case 4:
            exit(1);
        case 5:
            delete_beg_linked_list();
            break;
        case 6:
            delete_end_linked_list();
            break;
        default:
            printf("Wrong choice \n");
        }
    }
}
