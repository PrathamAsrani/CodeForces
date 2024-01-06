#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve();

int main(){
    ll t;
    cin >> t;
    while(t--) solve();
}

void solve(){
    ll n, k, d;
    cin >> n >> k >> d;
    vector<ll> a(n), b(k);
    for(auto &i:a) cin >> i;
    for(auto &i:b) cin >> i;

    ll i = 0, ans = 0;
    while(i < min(d, n*2)){
        ll same = 0;
        for(int j = 0; j < n; j++)
            same += (a[j] == (j+1)) ? 1:0;
        
        ans = max(ans, same+(d-i+1)/2);

        ll val = b[i%k];
        for(int j = 0; j < val; j++)
            a[j]++;
        i++;
    }
    cout << ans-1 << "\n";  
}