#include<stdio.h>
#define size 50
int CQueue[size];
int rear = - 1;
int front = - 1;
int item;
main()
{
    int choice;
    while (1)
    {
        printf("                          \n");
        printf("1.Insert element to queue \n");
        printf("2.Delete element from queue \n");
        printf("3.Display all elements of queue \n");
        printf("4.Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            CQueue_insert();
            break;
      /*  case 2:
            CQueue_delete();
            break;*/
        case 3:
            CQueue_display();
            break;
        case 4:
            exit(1);
        default:
            printf("Wrong choice \n");
        }
    }
}

CQueue_insert()
{
    if((front=rear+1) || (front==0 && rear==size-1))
    {
        printf("Circular Queue is OVERFLOW..\n");

    }

    else if(rear == -1)
    {
        rear=0;
    }
    else
        rear=rear+1;
    printf("Inset the element in queue : ");
    scanf("%d", &item);
    CQueue[rear]=item;
    printf("Element Inserted...\n ");
}

CQueue_delete()
{
    if(front==-1)
        printf("Circular Queue is UNDERFLOW \n");
    else if(front==rear)
    {
        printf("Element Deleted is : %d",CQueue[front]);

        front=-1;
        rear=-1;
    }
    else if(front==size-1)
    {
        printf("Element Deleted is : %d",CQueue[front]);

        front=0;
    }
    else
    {
        printf("Element Deleted is : %d",CQueue[front]);

        front=front+1;
    }

}

CQueue_display()
{
    int i;
    printf("\n");
    if (front > rear)
    {

        for (i = 0; i <= rear; i++)
            printf("%d ", CQueue[i]);
    }
    else
    {
        for (i = front; i <= rear; i++)
            printf("%d ", CQueue[i]);
    }
}
