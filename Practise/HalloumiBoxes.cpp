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
    ll n, k, prev = 0, cnt = 0;
    cin >> n >> k;
    bool f = true;
    for(ll i = 0; i < n; i++){
        int num;
        cin >> num;
        if(prev > num) f = false;
        prev = num;
    }
    if(!f && k == 1) cout << "No\n";
    else cout << "Yes\n";
}   