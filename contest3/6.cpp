// https://codeforces.com/contest/1915/problem/F

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    ll n;
    cin >> n;
    vector<pair<ll, ll>> arr(n);
    for(int i = 0; i < n; i++){
        ll a, b;
        cin >> a >> b;
        arr[i] = make_pair(a, b);
    }
    sort(arr.begin(), arr.end());
    ll ans = 0;
    for(int i = 0; i < n; i++) {
        ll end = arr[i].second;
        for(int j = i+1; j < n; j++){
            if(arr[j].second <= end)
                ans++;
        }
    }
    cout << ans <<"\n";
}

int main(){
    ll t;
    cin >> t;
    while(t--) solve();
}