// https://codeforces.com/contest/1916/problem/B
#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll GCD(ll a, ll b)
{
    return b == 0 ? a : GCD(b, a % b);
}

ll LCM(ll a, ll b)
{
    return a / GCD(a, b) * b;
}

/*
ll LCM(ll a, ll b){
    ll greater = max(a, b), smaller = min(a, b);
    if(smaller == 1) return greater*greater;
    ll i = greater;
    while(i % smaller != 0) i += greater;
    return i == greater ? (i*(greater/smaller)) : i;
}
*/

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        ll lcm = LCM(a, b);
        ll s = min(a, b), g = max(a, b);
        if (s == 1)
            cout << g * g << "\n";
        else if (g == lcm)
            cout << g * g / s << "\n";
        else
            cout << lcm << "\n";
    }
    return 0;
}
