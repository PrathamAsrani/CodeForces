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
    ll mx = LLONG_MIN;
    // check for even pair
    for(int i = 0; i < n-1; i++) mx = max(mx, min(v[i], v[i+1]));
    // check for odd triplet
    for(int i = 0; i < n-2; i++) {
        ll arr[3] = {v[i], v[i+1], v[i+2]};
        sort(arr, arr+3);
        mx = max(mx, arr[1]);
    }
    cout << mx << "\n";
}   