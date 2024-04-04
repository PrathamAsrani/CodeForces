#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool dfs(int node, vector<int> adj[], vector<int> &vis, vector<int> &pathVis, vector<string> &arr, string path, string &s){
    if(path == "") path += s[0];
    vis[node] = pathVis[node] = true;
    for(auto nei : adj[node]){
        if(vis[nei] == false && dfs(nei, adj, vis, pathVis, arr, path + s[nei], s)) return true;
        else if(pathVis[nei]) return true;
    }
    pathVis[node] = false;
    arr.push_back(path);
    return false;
}

int main()
{
    ll n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    vector<int> u(m), v(m);
    for(int i = 0 ; i < m; i++){
        cin >> u[i];
    }
    for(int i = 0 ; i < m; i++){
        cin >> v[i];
    }
    vector<int> adj[n];
    for(int i = 0; i < m; i++){
        adj[u[i]-1].push_back(v[i]-1);
    }
    vector<int> vis(n, false), pathVis(n, false);
    vector<string> arr;
    bool cycle = dfs(0, adj, vis, pathVis, arr, "", s);
    if(cycle){
        cout << -1;
    }else{
        int ans = 0;
        for(auto str : arr){
            // cout << str << "\n";
            unordered_map<char, int> umpp;
            for(char c : str) umpp[c]++, ans = max(umpp[c], ans);
        }
        cout <<  ans;
    }
}