#include<iostream>
#include<bits/stdc++.h>
 using namespace std;
int main(long long int x)
    {
        cout<<"Enter number:";
        cin>>x;
    long long int low=1,high=x;

    long long int mid=low+(high-low)/2;

    while(low<=high){
      if(mid*mid==x)
      return mid;
      else if(mid*mid>x)
      high=mid-1;
      else
       low=mid+1;
      mid=low+(high-low)/2;
    }
    return mid-1;
    }
//Time Complexity: O(log N)
//Space Complexity: O(1)
