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
    ll a, b, c;
    cin >> a >> b >> c;
    ll t = a + b + c;
    if (t & 1)
    {
        cout << -1 << "\n";
        return;
    }
    if (a == 0)
    {
        cout << b << "\n";
    }
    else
    {
        cout << a * 2 << "\n";
    }
}