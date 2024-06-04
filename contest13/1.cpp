#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve();

int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();
}

void solve()
{
    ll n, m;
    cin >> n >> m;
    string s;
    cin >> s;

    unordered_map<char, int> umpp;
    for(auto &c: s) umpp[c]++;

    ll ans = 0;
    string tmp = "ABCDEFG";
    for(char &c: tmp){
        if(umpp[c] < m){
            ans += (m-umpp[c]);
        }
    }
    cout << ans << "\n";
}   