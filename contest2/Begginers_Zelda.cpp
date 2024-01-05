#include <bits/stdc++.h>

using namespace std;

#define ll long long
int main(int argc, char const *argv[])
{
    ll t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<vector<int>> adj(n+1);
        for(int i = 0; i < n-1; i++){
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int cnt = 0;
        for(auto i:adj) if(i.size() == 1) cnt++;
        cout << (cnt+1)/2 << "\n";
    } 
    return 0;
}
