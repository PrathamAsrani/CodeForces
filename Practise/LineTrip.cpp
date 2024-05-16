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
    ll n, k;
    cin >> n >> k; 
    ll ans = 0, prev = 0;
    for(ll i = 0; i < n; i++){
        ll num;
        cin >> num;
        if(i == n-1){
            ans = max(ans, (k - num)*2);
        }
        ans = max(ans, num - prev);
        prev = num;
    }
    cout << ans << "\n";
}   