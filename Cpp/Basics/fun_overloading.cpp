#include<iostream>
using namespace std;

class over{
    public:
    
    void dis(float a ,int b){
        cout<<"sum : "<<a+b<<endl;
    }
    
    void dis (string a,string b){
        cout<<"String sum : "<<a+b<<endl;
    }
};

int main(){
    int a;
    cout<<"enter the number:";
    cin>>a;
    over o;
    o.dis("abhi","jit");
    o.dis(a,4);
    return 0;
}