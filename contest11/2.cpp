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
    string r;
    unordered_map<char, int> umpp;
    for(auto c: s) umpp[c]++;
    for(auto itr: umpp) r += itr.first;
    sort(r.begin(), r.end());
    for(char &c: s){
        int idx = r.find(c);
        c = r[r.size() - idx - 1];
    }
    cout << s << "\n";
}   