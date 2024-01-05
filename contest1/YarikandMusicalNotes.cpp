// https://codeforces.com/contest/1899/problem/D
#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> arr(n);
        unordered_map<double, ll> umpp;
        for(ll i = 0; i < n; i++) 
            cin >> arr[i];
        ll ans = 0;
        for(ll i = n-1; i >= 0; i--){
            double d = arr[i] - log2(arr[i]);
            ans += umpp[d];
            umpp[d]++;
        }
        cout << ans << "\n";
    }
    return 0;
}
