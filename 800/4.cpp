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
    bool ans = false;
    for(int i = 0; i < n; i++){
        ll x;
        cin >> x;
        if (x == m)
        {
            ans = true;
        }
    }
    if(ans){
        cout << "Yes\n";
    }else{
        cout << "No\n";
    }
}   