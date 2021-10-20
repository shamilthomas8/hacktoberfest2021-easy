#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {-5, -4, -2, 6, -1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxSum = INT_MIN;
    int currSum = 0;
    for (int i = 0; i < n; i++)
    {
        currSum = currSum + arr[i];
        if (currSum > maxSum)
        {
            maxSum = currSum;
        }
        if (currSum < 0)
        {
            currSum = 0;
        }
    }
    cout << "Maximum sum is: " << maxSum;

    return 0;
}