// https://codeforces.com/contest/1915/problem/E
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> arr(n + 1);
        unordered_map<ll, ll> umpp;
        ll odd = 0, even = 0;
        string ans = "NO\n";
        for (int i = 1; i <= n; i++)
            cin >> arr[i];
        for (int i = 1; i <= n; i++)
        {
            if (i & 1)
                odd += arr[i];
            else
                even += arr[i];
            ll diff = even - odd;
            if (diff == 0 || umpp[diff])
            {
                ans = "YES\n";
                break;
            }
            umpp[diff] = i;
        }
        cout << ans;
    }
    return 0;
}