#include<stdio.h>
void main()
{
    int a[20],i,j,n,num,flag;
    printf("\nEnter Size of Elements :");
    scanf(" %d",&n);
    printf("\nEnter Array Elements :");
    for(i=0; i<n; i++)
        scanf(" %d",&a[i]);

    for(i=0;i<n;i++)
    {
        num=a[i];
        for(j=i+1; j<n; i++)
        {
            if(num==a[j])
            {
                a[j]='\0';

            }

        }
    }

    printf("Unique Elements are :");

    for(i=0;i<n;i++)
        printf(" %d",a[i]);
}








