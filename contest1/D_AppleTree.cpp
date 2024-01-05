#include <bits/stdc++.h>

using namespace std;

vector<int> FreqChild;
vector<vector<int>> adjList;

void solve();
int dfs(int currNode, int parent);

int main(){
    int t;
    cin >> t;
    while(t--){ 
        solve(); 
    }   
    return 0;
}

void solve(){
    int n;
    cin >> n;
    adjList.resize(n+1);
    FreqChild.resize(n+1, 0);
    for(int i = 0; i < n-1; i++){
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    dfs(1, 1);
    int q;
    cin >> q;
    while(q--){
        int x, y;
        cin >> x >> y;
        long long ans = ((long long) FreqChild[x] * (long long) FreqChild[y]);
        cout << ans << "\n";
    }
    FreqChild.clear();
    adjList.clear();
}

int dfs(int currNode, int parent){
    int childCnt = 0;
    for(auto nextNode:adjList[currNode]) if(nextNode != parent) childCnt += dfs(nextNode, currNode);
    if(childCnt == 0 && adjList[currNode].size() == 1){
        // leaf node
        childCnt = 1;
    }
    FreqChild[currNode] = childCnt;
    return childCnt;
}