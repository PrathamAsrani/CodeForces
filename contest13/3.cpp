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
    vector<ll> a(n), b(n);
    for(auto &x: a) cin >> x;
    for(auto &x: b) cin >> x;
    ll m;
    cin >> m;
    vector<ll> d(m);
    for(auto &x: d) cin >> x;

    multiset<ll> ms;
    for(int i = 0; i < n; i++){
        if(a[i] != b[i]){
            ms.insert(b[i]); // I need to change the b[i] to make it a[i] using dj where 0 <= j <= m-1;
        }
    }

    // check whether d is able to provide the number to change b[i] to a[i]
    for(auto &x: d){
        auto it = ms.find(x);
        if(it != ms.end()){
            ms.erase(it); // changed b[i] to a[i]
        }
    }

    if(ms.empty() == false){
        // if all elements were not changed thena ans if NO
        cout << "NO\n";
        return ;
    }

    ll last = d.back(); // the extra elements will be changed with last value and at d[m-1] last will replace last to make array b equal to a
    bool flag = false;
    for(auto &x: b){
        if(x == last){
            flag = true;
        }
    }

    (flag == true) ? cout << "YES\n" : cout << "NO\n";
}   