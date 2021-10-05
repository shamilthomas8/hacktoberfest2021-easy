#include <iostream>
using namespace std;

void quickSort(int A[], int low, int high);
void swap(int &a, int &b);
int partition(int A[], int low, int high);

int main()
{

    int arr[] = {20, 10, 24, 14, 12, 0, 8, 5, 9, 21};

    cout << "\nBefore\n";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    quickSort(arr, 0, 9);

    cout << "\n\nAfter\n";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

int partition(int A[], int low, int high)
{
    int pivot = A[low];
    int i = low + 1;
    int j = high;
    int temp;
    do
    {
        while (A[i] <= pivot)
        {
            i++;
        }
        while (A[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i < j);
    // Swap A[low] and A[j]
    temp = A[low];
    A[low] = A[j];
    A[j] = temp;
    return j;
}

void quickSort(int A[], int low, int high)
{
    int partitionIndex;
    if (low < high)
    {
        partitionIndex = partition(A, low, high);
        quickSort(A, low, partitionIndex - 1);
        quickSort(A, partitionIndex + 1, high);
    }
}
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = a;
}
