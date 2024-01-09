// https://codeforces.com/contest/1916

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
/*
1
5 1
256 256 256 256 1
*/
void fun()
{
    ll n, k;
    cin >> n >> k;
    ll prod = 1;
    ll bad = false;
    for (ll i = 0; i < n; i++)
    {
        ll b;
        cin >> b;
        prod *= b;
        if (2023 % prod != 0)
        {
            bad = true;
        }
    }
    if(bad || prod > 2023){
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    cout << 2023 / prod;
    for (ll i = 0; i < k - 1; i++)
        cout << ' ' << 1;
    cout << "\n";
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        fun();
    }

    return 0;
}
