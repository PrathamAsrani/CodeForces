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
    for(auto &x: v) cin >> x;
    ll ans = max(v[0], v[1])-1;
    for(int i = 1; i+1 < n; i++){
        ans = min(ans, max(v[i], v[i+1])-1);
    }
    cout << ans << "\n";
}   