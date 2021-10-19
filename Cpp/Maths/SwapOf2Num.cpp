#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    a = a ^ b;  
 b = a ^ b;  
 a = a ^ b;  
 cout<<"Numbers are swapped"<<endl;
 cout<<a<<" "<<b;
 return 0;
 }
//////No third variable and no arithmetic signs used..//
