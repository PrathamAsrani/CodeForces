#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

#define ii ({ll a; cin >> a; a;})
#define si ({string string_input; cin >> string_input; string_input;})
#define vll vector<ll>
#define vi vector<int>
#define vvi vector<vector<int>>
#define pb push_back

ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a%b); }
ll lcm(ll a, ll b) { return a/gcd(a, b) * b; }

template <typename T>
void dis(vector<T> &v) { for(auto &i: v) cout << i << " "; cout << "\n"; } 
template <typename T, size_t N>
void show(T (&arr)[N]) { for(int i = 0; i < N; i++) cout << arr[i] << " "; cout << "\n"; }

void solve();

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t = ii;
    while (t--) solve();
}

void solve()
{
    ll n = ii;
    vll v(n);
    for(auto &num: v) num = ii;
}   