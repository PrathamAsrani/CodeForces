#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef struct{
    int key, value;
} two;

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
    vector<pair<ll, ll>> a, b, c;
    ll num;
    for(ll i = 0 ; i < n; i++)
        cin >> num, a.push_back({num, i});
    for(ll i = 0 ; i < n; i++)
        cin >> num, b.push_back({num, i});
    for(ll i = 0 ; i < n; i++)
        cin >> num, c.push_back({num, i});
    
    sort(a.begin(), a.end(), greater<pair<int, int>>());
    sort(b.begin(), b.end(), greater<pair<int, int>>());
    sort(c.begin(), c.end(), greater<pair<int, int>>());

    // for(auto i:a)
    //     cout << i.second << " " << i.first << "\t";
    // cout << "\n";
    // for(auto i:b)
    //     cout << i.second << " " << i.first << "\t";
    // cout << "\n";
    // for(auto i:c)
    //     cout << i.second << " " << i.first << "\t";
    // cout << "\n";
    ll ans = 0;
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 3; k++){
                if(a[i].second != b[j].second && a[i].second != c[k].second && b[j].second != c[k].second)
                    ans = max(ans, a[i].first + b[j].first + c[k].first);
            }
        }
    }
    cout << ans << "\n";
}   