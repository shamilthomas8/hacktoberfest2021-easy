#include <stdio.h>
#include <time.h>

void insertion_sort(int arr[],int n)
{
    int i,key,j,step=0;
    for(i=1; i < n; i++)
    {
        key=arr[i];
        j=i-1;

        while(j>=0 && arr[j] > key)
        {
            arr[j+1]=arr[j];
            j=j-1;
            step++;
        }
        arr[j+1]=key;
    }
    printf("total step : %d \n",step);
}

int main() 
{
    int n;
    clock_t t;
    t = clock();
    printf("enter the size of array : ");
    scanf("%d",&n);
    int arr[n];

    printf("enter the element in array :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    insertion_sort(arr, n);
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds

    printf("insertion_sort() function took %f seconds to execute \n", time_taken);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
