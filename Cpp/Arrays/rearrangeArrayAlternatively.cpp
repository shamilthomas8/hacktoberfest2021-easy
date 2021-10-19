//Rearrange array alernatively
//level medium
//company : ZOHO
//This is the most efficient approach with 
// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(1).
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    //test cases
    cin >> t;
    while (t--)
    {
        //size of array
        cin >> n;
        long long arr[n];
        //adding elements
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int max_index = n - 1;
        int min_index = 0;
        int max = arr[n - 1] + 1;

        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                arr[i] = (arr[max_index] % max) * max + arr[i];
                max_index--;
            }
            else
            {
                arr[i] = (arr[min_index] % max) * max + arr[i];
                min_index++;
            }
        }

        for (int i = 0; i < n; i++)
        {
            arr[i] /= max;
        }
        //printing elements
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";

        cout << "\n";
    }
}