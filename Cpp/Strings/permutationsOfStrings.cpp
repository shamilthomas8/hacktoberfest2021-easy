#include <bits/stdc++.h>
using namespace std;

void solve(string s,int left,int right)
{
   if(left==right)
   {
       cout<<s<<endl;
   }
   else
   {
       for(int i=left;i<=right;i++)
       {
           swap(s[left],s[i]);
           solve(s,left+1,right);
           swap(s[left],s[i]);
       }
   }
}

void permutationsOfString(string s)
{
    int n=s.size()-1;
    solve(s,0,n);
}
int main()
{
	string s;
	cin>>s;
	permutationsOfString(s);
	return 0;
}
