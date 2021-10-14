#include <bits/stdc++.h>
#define ll long long
using namespace std;


vector<ll> vec[500];
bool vis[500];


void dfs(int node, stack<ll> *st){
    vis[node] = 1;
    st->push(node);
    for(auto it:vec[node]){
        if(!vis[it]){
            dfs(it,st);
        }
    }
}

int main() {

    int n, e;
    
    cin >> n >> e;
    
    for(int i=0;i<n;i++){
        int x,y;
        cin >> x >> y;
        vec[x].push_back(y);
        vec[y].push_back(x);
    }
    
    fill(vis,vis+n+1,0);
    
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            stack<ll>st;
            dfs(i,&st);
            while(!st.empty()){
                cout << st.top() << " ";
                st.pop();
            }
            cout << endl;
        } 
    }
    
    
    

}
