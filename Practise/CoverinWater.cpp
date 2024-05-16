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
    string s;
    cin >> s;
    vector<ll> v;
    int x = 0;
    for(ll i = 0; i < n; ){
        if(s[i] == '#'){
            i++;
            continue;
        }
        while(i < n && s[i] == '.'){
            x++;
            i++;
        }
        v.push_back(x);
        x = 0;
    }
    v.push_back(x);
    ll mx = *max_element(v.begin(), v.end());
    if(mx < 3){
        cout << accumulate(v.begin(), v.end(), 0) << "\n";
    }else{
        cout << 2 << "\n";
    }
    
}   