#include<iostream>
using namespace std;

void swap(int *x,int *y){
    int temp=0;
    temp=*x;
    *x=*y;
    *y=temp;

}

int main(){
    int a,b;
    cout<<"enter the 1st number : "<<endl;
    cin>>a;

    cout<<"enter the 2nd number : "<<endl;
    cin>>b;
    swap(&a,&b);
    cout<<"1st number is : "<<a<<endl;
     cout<<"2nd number is : "<<b<<endl;

}