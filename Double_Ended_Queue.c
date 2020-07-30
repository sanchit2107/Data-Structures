#include <stdio.h>
#define size 5

void insertq(int[], int);
void deleteq(int[]);
void display(int[]);

int front =  - 1;
int rear =  - 1;

int main()
{
    int n, ch;
    int queue[size];
    do
    {
        printf("\n\n Double Ended Queue:\n1. Insert at FRONT \n2. Delete from REAR \n3. Display\n0. Exit");
        printf("\nEnter Choice 0-3? : ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
                printf("\nEnter number: ");
                scanf("%d", &n);
                insertq(queue, n);
                break;
            case 2:
                deleteq(queue);
                break;
            case 3:
                display(queue);
                break;
        }
    }while (ch != 0);
}


void insertq(int queue[], int item)
{
    if (front == 0)
    {
        printf("Double Ended Queue is OVERFLOW\n");
        return;
    }
    else if (front ==  - 1)
    {
        rear=0;
        front=0;
    }
    else
    {
        front=front-1;
    }
    queue[front] = item;
}

void display(int queue[])
{
     int i;

        printf("\nThe Queue elements are:");
        for(i=rear; i < front; i++)
        {
           printf("%d\t ",queue[i]);
        }
     }

void deleteq(int queue[])
{
    if (rear ==  - 1)
    {
        printf("Double Ended Queue is UNDERFLOW ");
    }
    else if (front == rear)
    {
        printf("\n %d deleted", queue[front]);
        front =  - 1;
        rear =  - 1;
    }
    else
    {
        printf("\n %d deleted", queue[front]);
        rear=rear-1;
    }
}
