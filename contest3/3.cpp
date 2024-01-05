// https://codeforces.com/contest/1915/problem/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(int argc, char const *argv[])
{
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll val = 0;
        for(int i = 0; i < n; i++) {
            ll v;
            cin >> v;
            val += v;
        }
        ll a = sqrt(val);
        if(a*a == val) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
