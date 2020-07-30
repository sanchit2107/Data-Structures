#include<stdio.h>
main ()
{
    int a[20],n,beg,end,i,k,item,mid;
    printf("Enter Array size: ");
    scanf("%d",&n);
    printf("Enter Array elements : \n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        printf("Enter item to be Searched:\n");
        scanf("%d",&item);
    beg=0;
    end=n-1;
    mid=(beg+end)/2;
    while(beg<=end && a[mid]!=item)
    {
        if(item<a[mid])
            end=mid-1;
        else
            beg=mid+1;
        mid=(beg+end)/2;
    }
    if(a[mid]==item)
        printf("Element found at position =  %d ",mid+1);
    else
        printf("Element not found");
}
