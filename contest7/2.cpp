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
    string s, f;
    cin >> s >> f;
    ll cnt_s = 0, cnt_f = 0, ans = 0;
    for(ll i = 0; i < n; i++){
        if(s[i] == '1' && f[i] == '1')
            continue;
        if(s[i] == '1')
            cnt_s++;
        if(f[i] == '1')
            cnt_f++;
    }
    if(cnt_f >= cnt_s)
        cout << cnt_f << "\n";
    else{
        ans = cnt_f;
        ans += (cnt_s - cnt_f);
        cout << ans << "\n";
    }
}