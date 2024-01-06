#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve();

int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();
}

void solve(){
    ll n;
    cin >> n;
    int cntNeg = 0, cntZero = 0;

    for(ll i = 0; i < n; i++) {
        ll a;
        cin >> a;
        if(a == 0) cntZero++;
        if(a < 0) cntNeg++;
    }

    if(cntZero)
        cout << "0\n";
    else {
        if(cntNeg%2)
            cout << "0\n";
        else {
            cout << "1\n";
            cout << "1 0\n";
        }
    }
}