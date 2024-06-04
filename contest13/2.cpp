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
    ll n, f, k;
    cin >> n >> f >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    if (k == n){
        cout << "YES\n";
        return ;
    }
    ll fav = a[f - 1];
    sort(a.begin(), a.end(), greater<ll>());

    /*
    ll cnt_fav = count(a.begin(), a.begin() + k, fav);
    ll total = count(a.begin(), a.end(), fav);
    if (cnt_fav == 0) cout << "NO\n";
    else if (total == cnt_fav) cout << "YES\n";
    else cout << "MAYBE\n";
    */
    if (a[k - 1] <= fav and a[k] >= fav)
        cout << "MAYBE\n";
    else if (fav > a[k])
        cout << "YES\n";
    else
        cout << "NO\n";
}