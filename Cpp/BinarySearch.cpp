#include<iostream>
using namespace std;

int binarySearch(int arr[],int start, int end , int elem);

int main(){

int arr[]={2,10,12,13,15,20};
// int toFind=21;
int toFind=10;

if(binarySearch(arr,0,5,toFind)<0){
    cout<<"The element is not present in the given array";
}
else{
    cout<<"The element was found at "<<binarySearch(arr,0,6,toFind)<<" index of the array";
}

    return 0;
}


int binarySearch(int arr[],int start, int end , int elem){
    if(start<=end)
    {int mid=(start+end)/2;
    if(arr[mid]==elem){
        return mid;
    }
    else if(arr[mid]>elem){
        end=mid-1;
        return binarySearch(arr,start,end,elem);
    }
    else if(arr[mid]<elem){
        start=mid+1;
        return binarySearch(arr,start,end,elem);
    }
    }
    return -1;
}