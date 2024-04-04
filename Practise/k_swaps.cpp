// https://codeforces.com/problemset/problem/1914/B
// accepted

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
    ll n, k;
    cin >> n >> k;
    vector<ll> arr;
    for(int i = n; i >= 1; i--)
        arr.push_back(i);
    sort(arr.begin(), arr.begin()+(k+1));
    for(auto i:arr)
        cout << i << " ";
    cout << "\n";
}   