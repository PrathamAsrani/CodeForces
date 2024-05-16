#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, k, q;
        cin >> n >> k >> q;
        vector<ll> a(k+1), b(k+1);
        a[0] = b[0] = 0;
        for(int i = 0; i < k; i++){
            cin >> a[i + 1];
        }
        for(int i = 0; i < k; i++){
            cin >> b[i + 1];
        }
        vector<double> sp;
        for(int i = 1; i <= k; i++){
            sp.push_back((double)(a[i] - a[i-1])/(b[i] - b[i-1]));
        }
        while(q--){
            ll ans = 0;
            ll dis;
            cin >> dis;
            if(dis == 0){
                cout << "0\n";
                continue;
            }
            int idx = lower_bound(a.begin(), a.end(), dis) - a.begin();
            idx--;
            // cout << dis << " " << a[idx] << " " << sp[idx] << "\n";
            ans += (dis - a[idx])/sp[idx];
            dis -= (dis - a[idx]);
            // cout << ans << " " << dis << "\n";
            while(idx > 0){
                idx--;
                ans += (dis/sp[idx]);
                dis -= a[idx];
            }
            cout << ans << "\n";
        }
    }
    return 0;
}
