#include<iostream>
using namespace std;

bool isSafe(int**arr,int x,int y,int n)
{
    if(arr[x][y]==1&&x<n&&y<n){
        return true;
    }
    return false;
}

bool ratmaze(int**arr,int x,int y ,int n, int**solArr)
{
    //base case
    if(x==n-1&&y==n-1)
    {
        solArr[x][y]=1;
        return true;
    }
    if(isSafe(arr,x,y,n)){
        solArr[x][y]=1;
        if(ratmaze(arr,x+1,y,n,solArr))
        {
            return true;
        }
        if(arr,x,y+1,n,solArr)
        {
            return true;
        }
        solArr[x][y]=0;
        return false;
    }
    return false;
}

int main()
{
    int n;
    cin>>n;
    int**arr=new int*[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=new int[n];
    }
    for(int i=0;i<n;i++)
    {
            for(int j=0;j<n;j++){
            cin>>arr[i][j];
            }
    }

 int**solnArr=new int*[n];
    for(int i=0;i<n;i++)
    {
        solnArr[i]=new int[n];
        for(int j=0;j<n;j++){
            solnArr[i][j]=0;
            }
    }
    if(ratmaze(arr,0,0,n,solnArr))
    {
        for(int i=0;i<n;i++)
    {
            for(int j=0;j<n;j++){
            cout<<solnArr[i][j]<<" ";
            }
            cout<<endl;
    }
    }
    return 0;
}
