#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n, t;
    cin >> n >> t;
    vector<int> adj(n + 1, 0);
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u] = v;
    }
    int src;
    cin >> src;

    int cnt = 0;
    while(adj[src] != 0){
        src = adj[src];
        cnt++;
    }

    if(cnt%2 == 0 and (n-1-cnt)%2 == 0) cout << "Hermione\n";
    else cout << "Ron\n";
}