#include <iostream>
using namespace std;

void mergeSort(int A[], int low, int high);
void merge(int A[], int low, int mid, int high);

int main()
{

    int arr[] = {20, 10, 24, 14, 12, 0, 8, 5, 9, 21};

    cout << "\nBefore\n";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    mergeSort(arr, 0, 9);

    cout << "\n\nAfter\n";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

void mergeSort(int A[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        mergeSort(A, low, mid);
        mergeSort(A, mid + 1, high);
        merge(A, low, mid, high);
    }
}

void merge(int A[], int low, int mid, int high)
{
    int i = low;
    int j = mid + 1;
    int k = low;
    int b[high - low + 1];
    while (i <= mid && j <= high)
    {
        if (A[i] <= A[j])
        {
            b[k] = A[i];
            i++;
        }
        else
        {
            b[k] = A[j];
            j++;
        }
        k++;
    }
    if (i > mid)
    {
        while (j <= high)
        {
            b[k] = A[j];
            j++;
            k++;
        }
    }
    else
    {
        while (i <= mid)
        {
            b[k] = A[i];
            i++;
            k++;
        }
    }

    for (int z = low; z <= high; z++)
    {
        A[z] = b[z];
    }
}