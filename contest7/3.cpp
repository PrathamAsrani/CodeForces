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
    ll n, f, a, b;
    cin >> n >> f >> a >> b;
    vector<ll> arr(n);
    for(ll i = 0; i < n; i++)
        cin >> arr[i];
    
    ll prev = 0, mini = LLONG_MAX;
    for(ll i = 0; i < n; i++){
        mini = min(abs(arr[i]-prev)*a, b);
        f -= mini;
        prev = arr[i];
    }
    if(f > 0)
        cout << "YES\n";
    else
        cout << "NO\n";
}   