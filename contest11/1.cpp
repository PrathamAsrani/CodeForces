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
    ll x, y;
    cin >> x >> y;
    ll screens = (y/2) + (y%2);
    ll freecells = (screens*15) - ((y/2)*8) - ((y%2)*4);
    if(freecells >= x){
        cout << screens << "\n";
    }else{
        x -= freecells;
        screens += ceil(x/15.0);
        cout << screens << "\n";
    }
}   