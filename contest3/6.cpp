// https://codeforces.com/contest/1915/problem/F

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n;	
    long long ans = 0;
    cin >>n;
    map<int, int> mp;
    vector<int> v(n);
    for(int i = 0 ; i < n ; i++){
        int a, b;	
        cin >> a >> b;
        mp[a] = b;
        v[i] = b;
    }
    sort(v.begin(), v.end());
    for(auto& it : mp){
        auto pos = lower_bound(v.begin(), v.end(), it.second);
        ans += pos - v.begin();
        v.erase(pos);
    }
    cout << ans << '\n' ;
}


int32_t main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}