vector<vector<int>> construct2DArray(vector<int>& a, int m, int n) {
        int l=a.size();
        if(m*n < l or m*n > l) return {};
        vector<vector<int>> ans(m, vector<int> (n,0)); //v[m][n]; memset(v,0,size of v);
        for(int i=0; i<l; i++)
        {
            ans[i/n][i%n]=a[i];  //row index= i/n column index i%n
        }
        return ans;
    }
