// the opstimised way is to create a precomputed array which conatins the commulative sum.
// using that which can minimise one nested loop leading to a more efficient program

#include<iostream>
#include<climits>
using namespace std;

int main(){

int arr[]={1,-12,3,4,5};
int n=sizeof(arr)/sizeof(int);

int cummulativeSum_arr[n];
for(int i=0;i<n;i++){
    cummulativeSum_arr[i]=0;
}
cummulativeSum_arr[0]+=arr[0];
for(int i=1;i<n;i++){
    cummulativeSum_arr[i]+=cummulativeSum_arr[i-1]+arr[i];
}

int maxSum=INT_MIN;
int start=0;
int end=0;
for(int i=0;i<n;i++){
    int sum=0;
    for(int j=i;j<n;j++){
        if((cummulativeSum_arr[j]-cummulativeSum_arr[i]+arr[i])>maxSum){
            maxSum=cummulativeSum_arr[j]-cummulativeSum_arr[i]+arr[i];
            start=i;
            end=j;
        }
    }
}

cout<<"The maximum sum is : "<<maxSum<<endl;
cout<<"\nThe subarray is : \n";
for(int i=start;i<=end;i++){
    cout<<arr[i]<<" ";
}

   return 0;
}


//brute force

// int maxSum=INT_MIN;
// int start=0;
// int end=0;

// for(int i=0;i<n;i++){
//     for(int j=i;j<n;j++){
//         int sum=0;
//         for(int k=i;k<=j;k++){
//             sum+=arr[k];
//         }
//         if(sum>maxSum)   {
//             start=i;
//             end=j;
//             maxSum=sum;
//         }
//     }
// }

// cout<<"The maximum sum is : "<<maxSum;
// cout<<"\nThe subarray is as follows : \n";
// for(int i=start;i<=end;i++){
//     cout<<arr[i]<<" ";
// }
 