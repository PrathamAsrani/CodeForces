#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve();

pair<int, int> helper(vector<ll> &p, vector<ll> &a, int b, int s, vector<vector<pair<int, int>>> &dp, int k){
    if(k == 0) return {0, 0};
    if(dp[b][s].first != -1 && dp[b][s].second != -1) return dp[b][s];
    pair<int, int> ans;

    auto both = helper(p, a, p[b], p[s], dp, k-1);
    auto take_s = helper(p, a, b, p[s], dp, k-1);
    auto take_b = helper(p, a, p[b], s, dp, k-1);
    auto dont_take = helper(p, a, b, s, dp, k-1);

    int val1 = max({both.first, take_s.first, take_b.first, dont_take.first}), 
        val2 = max({both.second, take_s.second, take_b.second, dont_take.second});
    
    ans.first = a[b] + val1;
    ans.second = a[s] + val2;
    return dp[b][s] = ans;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();
}

void solve()
{
    ll n, k, b, s;
    cin >> n >> k >> b >> s;
    vector<ll> p(n), a(n);
    for(auto &x: p) cin >> x;
    for(auto &x: a) cin >> x;
    a.insert(a.begin(), 0);
    p.insert(p.begin(), 0);
    
    /*
    vector<vector<pair<int, int>>> dp(n+1, vector<pair<int, int>>(n+1, {-1, -1}));
    auto it = helper(p, a, b, s, dp, k);

    if(it.first == it.second){
        cout << "Draw\n";
    }else if(it.first > it.second){
        cout << "Bodya\n";
    }else{
        cout << "Sasha\n";
    }
    */

    ll mx_b = 0, mx_s = 0, sc_b = 0, sc_s = 0;
    for(int i = 1; i <= min(k, n); i++){
        sc_b += a[b];
        mx_b = max(mx_b, sc_b + (k-i)*a[b]);

        sc_s += a[s];
        mx_s = max(mx_s, sc_s + (k-i)*a[s]);

        b = p[b];
        s = p[s];
    }

    if(mx_b == mx_s){
        cout << "Draw\n";
    }else if(mx_b > mx_s){
        cout << "Bodya\n";
    }else{
        cout << "Sasha\n";
    }

}   