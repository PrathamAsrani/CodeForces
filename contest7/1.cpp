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
    ll x[4], y[4];
    for (int i = 0; i < 4; ++i)
    {
        cin >> x[i] >> y[i];
    }
    sort(x, x + 4);
    sort(y, y + 4);
    ll side = max(x[2] - x[1], y[2] - y[1]);
    ll area = side * side;
    cout << area << endl;
}