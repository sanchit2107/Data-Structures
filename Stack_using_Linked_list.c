/*Implementation of Stack using Linked List*/
#include<stdio.h>
struct node
{
    int info;
    struct node *next;
};
struct node *top;
Stack_push_Linked_list(int item)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
        printf("Memory not Initialized...\n");
    else
    {
        temp->info=item;
        temp->next=top;
        top=temp;
    }
    printf("Element is Pushed into Stack..\n");
}

Stack_pop_Linked_list()
{
    if(top==NULL)
        printf("Stack is UNDERFLOW..\n");
    else
    {
        struct node *temp;
        temp=top;
        printf("Deleted Item is :%d",temp->info);
        free(temp);
        temp=NULL;
    }

    Stack_Display_Linked_list()
    {
        printf("Stack Elements are as follows:");
        struct node *loc;
        loc=top;
        while(loc!=NULL)
        {
            printf("\t");
            printf("%d",loc->info);
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
            printf("\n1.Push into Stack\n");
            printf("2.Display from Stack\n");
            printf("3.Pop from Stack\n");
            printf("4.Exit\n");
            printf("Enter ur Choice..:");
            scanf("%d",&choice);
            switch(choice)
            {
            case 1:

                printf("Enter Item to be Push into Stack : ");
                scanf("%d",&item);
                Stack_push_Linked_list(item);
                break;
            case 2:
                Stack_Display_Linked_list();
                break;
            case 3:
                Stack_pop_Linked_list();
                break;
            case 4:
                exit(0);
            }
        }

    }
