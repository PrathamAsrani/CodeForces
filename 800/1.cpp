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
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(auto &i: v) cin >> i;
    vector<int> tmp(v.begin(), v.end());
    sort(tmp.begin(), tmp.end());
    if(tmp[0] != v[0]) cout << "no\n";
    else cout << "yes\n";
}   