#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define ii ({ll a; cin >> a; a;})
#define si ({string string_input; cin >> string_input; string_input;})

ll cal_gcd(ll a, ll b) { return b == 0 ? a : cal_gcd(b, a%b); }
ll cal_lcm(ll a, ll b) { return a/cal_gcd(a, b) * b; }

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
    for(auto &x: v) cin >> x;
    ll lcm = 1, moneySpent = 0, mini = 1e18;
    for(int i = 0; i < n; i++){
        lcm = cal_lcm(lcm, v[i]);
    }
    vector<ll> ans(n);
    for(int i = 0; i < n; i++){
        ans[i] = lcm/v[i]; // coins i will put in the bet
        moneySpent += ans[i]; // finding the total spent of coins
        if(ans[i]*v[i] < mini) mini = ans[i]*v[i]; // find the minimum spent I need to make in every ith bet
    }
    // if mini >= moneySpent, then no arrangement is possible, else possible
    if(moneySpent < mini) {for(int i = 0; i < n; cout << ans[i] << " ", i++); cout << "\n";}
    else cout << "-1\n";
}   