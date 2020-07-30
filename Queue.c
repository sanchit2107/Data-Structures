#include<stdio.h>
int Queue[20];
int REAR=-1;
int FRONT=-1;
int n;
int ITEM;
char chh;
Queue_Insert()
{
    if(REAR==n-1)
        printf("Queue is OVERFLOW \n");
    else if(REAR==-1)
    {
        FRONT=0;
        REAR=0;

    }
    else
    {
        REAR=REAR+1;
    }
    printf("ENTER ITEM TO BE INSERTRED IN QUEUE");
    scanf("%d",&ITEM);
    Queue[REAR]=ITEM;
    printf("Element is Inserted..\n");

}
Queue_Delete()
{
    if(FRONT==-1)
        printf("Queue is UNDERFLOW..\n");
    else if(FRONT==REAR)
    {
        ITEM=Queue[FRONT];
        Queue[FRONT]=NULL;
        FRONT=-1;
        REAR=-1;
        printf("Element DELETED..\n");
    }
    else
    {
        ITEM=Queue[FRONT];
        Queue[FRONT]=NULL;
        FRONT=FRONT+1;
    }
}
Queue_Display()
{

    int i;
    if (FRONT == - 1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue elements are : \n");
        for (i = FRONT; i <= REAR; i++)
            printf("%d ", Queue[i]);
        printf("\n");
    }
}
main()
{
    do
    {
        printf("1.INSERT an item into Queue.\n");
        printf("2.DELETE an item into Queue.\n");
        printf("3.DISPLAY all item from Queue.\n");
        printf("4.EXIT.\n");
        int ch;

        printf("Enter your Choice :");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            Queue_Insert();
            break;
        case 2:
            Queue_Delete();
            break;
        case 3:
            Queue_Display();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid Choice..\n");
        }

        printf("Do u want to continue..???  ");
        scanf("%c",chh);
    }while(chh=='y' || chh=='Y');

}

