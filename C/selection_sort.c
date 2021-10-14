#include<stdio.h>
void main()
{
    int a[10],n,i,j,min,temp;
    printf("Enter the size of array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nsorting..\n");
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            min=j;
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }

    for(i=0;i<n;i++)
    {
        printf("\t%d",a[i]);
    }
}
