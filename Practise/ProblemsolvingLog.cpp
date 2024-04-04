// https://codeforces.com/problemset/problem/1914/A

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

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
    ll n, ans = 1;
    cin >> n;
    string s;
    cin >> s;
    unordered_map<char, ll> umpp;
    for(ll i = 'A'; i <= 'Z'; i++)
        umpp[i] = ans++;
    ans = 0;
    for(char c:s){
        umpp[c]--;
        if(umpp[c] == 0)
            ans++;
    }
    cout << ans << "\n";
}   