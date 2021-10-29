#include <bits/stdc++.h>
using namespace std;

void josephusProblem(vector<int> personOfArray, int k, int indexOfDiePerson, int &ans)
{
    // Base Condition
    if (personOfArray.size() == 1)
    {
        ans = personOfArray[0];
        cout << "The person who will save last will stand on the position: " << ans << endl;
        return;
    }

    // Hypotheses
    indexOfDiePerson = (indexOfDiePerson + k) % personOfArray.size();

    personOfArray.erase(personOfArray.begin() + indexOfDiePerson);

    josephusProblem(personOfArray, k, indexOfDiePerson, ans);
}

int main()
{
    int n = 40; // n is number of peoples
    int k = 7;  // k will be the count including that people which will count that which person should die

    vector<int> personOfArray;
    for (int i = 1; i <= n; i++)
    {
        personOfArray.push_back(i);
    }

    k = k - 1;

    int indexOfDiePerson = 0;

    int ans = -1;

    josephusProblem(personOfArray, k, indexOfDiePerson, ans);

    return 0;
}