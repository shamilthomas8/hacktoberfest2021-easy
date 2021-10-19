#include <iostream>
using namespace std;
int main()
{
    int num, sum = 0;
    cout << "Enter a number: ";
    cin >> num;
    int n = num;
    while (num > 0)
    {
        int rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    if (n % sum == 0)
        cout << n << " Yes! A Niven number";
    else
        cout << n << " Not A Niven number";
    return 0;
}