#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve();
void helper(string str, unordered_map<string, bool> &umpp, unordered_set<string> &s);

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
    string str;
    cin >> str;
    /*
    // Brute force
    unordered_set<string> s;
    unordered_map<string, bool> umpp;
    helper(str, umpp, s);
    cout << s.size() << "\n";
    */
    ll ans = 0;
    unordered_set<char> s;
    for (ll i = 0; i < n; i++)
    {
        s.insert(str[i]);
        ans += s.size();
    }
    cout << ans << "\n";
}

void helper(string str, unordered_map<string, bool> &umpp, unordered_set<string> &s)
{
    if (str.empty() || umpp[str])
        return;
    s.insert(str);
    umpp[str] = true;
    if (str.length() > 1)
    {
        helper(str.substr(1), umpp, s);
        helper(str.substr(0, 1) + str.substr(2), umpp, s);
    }
}