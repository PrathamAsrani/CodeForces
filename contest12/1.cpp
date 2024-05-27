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
     
    (n >= m && n%2 == m%2)? cout << "YES\n" : cout << "NO\n";
}   