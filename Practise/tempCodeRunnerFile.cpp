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
    
    ans.first = a[b-1] + val1;
    ans.second = a[s-1] + val2;
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
    
    vector<vector<pair<int, int>>> dp(n+1, vector<pair<int, int>>(n+1, {-1, -1}));
    auto it = helper(p, a, b, s, dp, k);

    if(it.first == it.second){
        cout << "Draw\n";
    }else if(it.first > it.second){
        cout << "Bodya\n";
    }else{
        cout << "Sasha\n";
    }
}   