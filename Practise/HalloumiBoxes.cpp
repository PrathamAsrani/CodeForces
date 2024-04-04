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
    ll n, k, prev = 0, cnt = 0;
    cin >> n >> k;
    bool f = true;
    for(ll i = 0; i < n; i++){
        int num;
        cin >> num;
        if(prev > num){
            if(cnt == 0) cnt = 2;
            else cnt++;
        }else{
            cnt = 0;
        }
        prev = num;
        if(cnt > k) {
            f = false;
            break;
        }
    }
    if(f) cout << "Yes\n";
    else cout << "No\n";
}   