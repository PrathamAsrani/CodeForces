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

bool check(vector<ll> v, int i){
    v.erase(v.begin()+i);
    ll g = 0;
    for(int i = 0; i+1 < v.size(); i++){
        ll gcd = __gcd(v[i], v[i+1]);
        if(g > gcd){
            return false;
        }
        g = gcd;
    }
    return true;
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(auto &x: v) cin >> x;
    if(check(v, n-1)){
        cout << "YES\n";
        return ;
    }
    ll g = 0;
    for(ll i = 0; i+1 < n; i++){
        ll gcd = __gcd(v[i], v[i+1]);
        if(g > gcd){
            for(ll j = max(0LL, i-2); j < min(n, i+2); j++) {
                if(check(v, j) == true) {
                    cout << "YES\n";
                    return ;
                }
            }
            cout << "NO\n";
            return ;
        }
        g = gcd;
    }
}   