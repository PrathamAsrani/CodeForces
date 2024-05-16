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
    unordered_map<ll, ll> umpp;
    for(ll i = 0; i < n; i++){
        ll num;
        cin >> num;
        umpp[num]++;
    }
    if(umpp.size() > 2){
        cout << "no\n";
    }else{
        if(umpp.size() == 2){
            int val = 0;
            for(auto i: umpp){
                if(val == 0) val = i.second;
                else val = abs(val - i.second);
            }
            if(val <= 1) cout << "yes\n";
            else cout << "no\n";
        }
        else cout << "yes\n";
    }
}   