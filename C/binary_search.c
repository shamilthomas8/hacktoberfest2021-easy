#include<stdio.h>

int binary(int Arr[],int s,int key);

void main()
{
    int i,key;
    int arr[100],n;
    printf("\nEnter the Size (Max 100)\n");
    scanf("%d",&n);
    printf("\nEnter the Array\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("\nEnter the key element\n");
    scanf("%d",&key);

    if(binary(arr,n,key) == 0)
        printf("\nElement not found\n");
    else
        printf("Element is found at index = %d",binary(arr,n,key));

    

}

int binary(int Arr[], int s , int key)
{
    int l=0,h=s-1;
    int mid =(l+h)/2;
    while(l<=h)
    {
        if(Arr[mid]==key)
            return mid;
        else if(Arr[mid]<key)
            h=mid-1;
        else 
            l=mid+1;
        mid =(l+h)/2;
    }
    return 0;

}
