#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cout<<"enter m,n\n\t";
    cin>>m>>n;
    while(m != n)
    {
        if(m>n)
        {
            m=m-n;
        }
        else if(n>m)
        {
            n=n-m;
        }
    }
    cout<<"the gdc is :->"<<m;
    return 0;
}