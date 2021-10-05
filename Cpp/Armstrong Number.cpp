#include <iostream>
using namespace std;
int main()
{
    int num,n,r,sum=0;
    cout<<"enter the number"<<endl;
    cin>>n;
    num=n;
    while(num>0)
    {
        r=num%10;
        
        sum = sum + r*r*r;
        num=num/10;
        
    }
    if(sum==n)
        cout<<"is an armstrong number";
    else
        cout<<"is not an armstrong nummber";
  
    return 0;
}