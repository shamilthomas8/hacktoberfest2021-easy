#include<iostream>
#include<queue>


using namespace std;


int main() {
	priority_queue<int> pq;

	pq.push(10);
	pq.push(30);
	pq.push(20);
	pq.push(40);

	cout << "greatest element is :" << pq.top() << endl;
	
	cout << "Emptying the priority queue" << endl;
	while(!pq.empty()) {
		cout << pq.top() << " ";
		pq.pop();
	}

	cout << endl;

}
