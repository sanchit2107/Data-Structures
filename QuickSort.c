#include<stdio.h>
Quick_Sort(int a[20],int low,int high)
{
    int j;
    if(low<high)
    {
        j=partition(a[20],low,high);
        Quick_Sort(a[20],low,j-1);
        Quick_Sort(a[20],j+1,high);

    }
}

int partition(int a[],int low,int high)
{
    int pivot=a[low];
    int i=low;
    int j=high+1;
    do
    {
        do
        {
            i++;
        }while(pivot>a[i]);
        do
        {
            j--;
        }while(pivot<a[i]);
        if(j>i)
        {
            a[i]=a[i]+a[j];
            a[j]=a[i]-a[j];
            a[i]=a[i]-a[j];
        }
    }while(j>i);

    a[low]=a[low]+a[j];
    a[j]=a[low]-a[j];
    a[low]=a[low]-a[j];
    return j;

}

main()
{
    int a[20],n,i,j,k,low,high;
    printf("Enter Array size :");
    scanf("%d",&n);
    printf("Enter Array Elements : ");
    for(k=0;k<n;k++)
    scanf("%d",&a[k]);
    Quick_Sort(a[20],0,n-1);
    printf("Array after Sorting are as follows:\n");
    for(k=0;k<n;k++)
    printf("%d",a[k]);
}

