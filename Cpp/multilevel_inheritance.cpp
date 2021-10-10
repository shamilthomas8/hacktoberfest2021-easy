//by Stuti Goyal

#include<iostream>
using namespace std;
class student
{
	public:
		int rno;
		void get()
		{
			cout<<"enter roll number";
			cin>>rno;
		}
};
class test
{public:
	int m1,m2;
	void show(){
	cout<<"Enter two subject marks";
	cin>>m1>>m2;
}};
class result: public test,public student
{ public:
	float average;
	void print()
{
	average=(m1+m2)/2;
	cout<<"average= "<<average;
}};
int main()
{
result r;
r.get();
r.show();
r.print();

}

