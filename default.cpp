#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define ii ({ll a; cin >> a; a;})
#define si ({string string_input; cin >> string_input; string_input;})

ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a%b); }
ll lcm(ll a, ll b) { return a/gcd(a, b) * b; }

template <typename T>
void dis(vector<T> &v) { for(auto &i: v) cout << i << " "; cout << "\n"; } 

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
    vector<ll> v(n);
    
}   