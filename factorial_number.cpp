#include <iostream>
using namespace std;

int main() {
	int number, factorial_number, counter_number;
	cout << "Enter a positive integer:";
cin >> number;
	factorial_number = 1;
	counter_number = 1;
	do{
		factorial_number *= counter_number;
	 	counter_number++;
}
while(counter_number <= number);
	cout << "The factorial of " << number << " is " << factorial_number << endl;
}
