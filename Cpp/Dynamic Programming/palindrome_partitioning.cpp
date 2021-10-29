#include <bits/stdc++.h>
using namespace std;

int t[1001][1001];

bool isPallindrome(string s, int i, int j)
{
    if (i == j)
    {
        return true;
    }
    if (i > j)
    {
        return true;
    }

    // Using two pointer technique to check pallindrome
    while (i < j)
    {
        if (s[i] != s[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int palindromePartitioningMemoziationOrTopDown(string s, int i, int j)
{
    if (i >= j)
    {
        return 0;
    }
    if (isPallindrome(s, i, j) == true)
    {
        return 0;
    }
    if (t[i][j] != -1)
    {
        return t[i][j];
    }

    int mn = INT_MAX, left, right;
    for (int k = i; k <= j - 1; k++)
    {
        if (t[i][k] != -1)
        {
            left = t[i][k];
        }
        else
        {
            left = palindromePartitioningMemoziationOrTopDown(s, i, k);
            t[i][k] = left;
        }
        if (t[k + 1][j] != -1)
        {

            right = t[k + 1][j];
        }
        else
        {
            right = palindromePartitioningMemoziationOrTopDown(s, k + 1, j);
            t[k + 1][j] = right;
        }
        int tempAns = 1 + left + right;

        if (tempAns < mn)
        {
            mn = tempAns;
        }
    }
    return t[i][j] = mn;
}

int main()
{
    // string s = "abbac";
    string s = "ababb";
    int n = s.size();
    int i = 0;
    int j = n - 1;

    memset(t, -1, sizeof(t));

    cout << "The minimum number of partition to make string " << s << " palindrome is " << palindromePartitioningMemoziationOrTopDown(s, i, j);

    return 0;
}