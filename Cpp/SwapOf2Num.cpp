#include<iostream>
using namespace std;

void swap(int* x,int* y){
    int temp=*x;
    *x=*y;
    *y=temp;
}


int main(){
    int a,b;
    cout<<"enter the  1st number "<<endl;
    cin>>a;
    cout<<"enter the 2nd number : "<<endl;
    cin>>b;
    swap(&a,&b);
    cout<<"the value of a and b :"<<a<<" "<<b;
}