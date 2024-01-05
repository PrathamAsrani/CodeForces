// https://codeforces.com/contest/1915/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(int argc, char const *argv[])
{
    ll t;
    cin >> t;
    while(t--){
        ll a, b, c;
        cin >> a >> b >> c;
        if(a == b) cout << c << "\n";
        else if(b == c) cout << a << "\n";
        else cout << b << "\n";
    }
    return 0;
}
