#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int n;
    do
    {
        cout << "Enter the number that you want for Fibonacci numbers(starting from 3): ";
        cin >> n;
    } while (n < 3);

    cout << "The first " << n << " Fibonacci numbers are:\n";
    for (int x = 0; x < n; x++)
    {
        cout << fibonacci(x) << " ";
    }
    cout << endl;
    return 0;
}