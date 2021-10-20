#include<bits/stdc++.h>
using namespace std;


int knapsack(int wt[],int val[],int n,int W)
{
    vector<vector<int>>t(n+1,vector<int>(W+1));

    
    for(int i = 0; i <= n; i++)
	  {
		for(int j = 0; j <= W; j++)
		{
			if (i == 0 || j == 0)
				t[i][j] = 0;
        }
    }

    for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= W; j++)
		{
            if (wt[i - 1] <= j)
				t[i][j] = max(val[i - 1] +t[i - 1][j - wt[i - 1]],t[i - 1][j]);
			else
				t[i][j] = t[i - 1][j];
		}
	}

	return t[n][W];
}



int main()
{
    int i,j,n,W;
    int wt[10],val[10];
    cout<<"\nEnter the total number of values\n";
    cin>>n;
    cout<<"\nEnter the Weights\n";
    for(i=0;i<n;i++)
        cin>>wt[i];
    cout<<"\nEnter the Profits\n";
    for(i=0;i<n;i++)
        cin>>val[i];
    cout<<"\nEnter the Maximum Weight\n";
    cin>>W;
    int ans=knapsack(wt,val,n,W);
    cout<<"\nMaximum Profit - \n"<<ans;
    return 0;
}

