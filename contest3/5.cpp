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
        unordered_map<string, ll> umpp;
        ll odd = 0, even = 0;
        bool ans = false;
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            if (i & 1)
                odd += arr[i];
            else
                even += arr[i];
            
            ll diff = even - odd;
            string d = to_string(diff);
            if (diff == 0 || umpp.find(d) != umpp.end()) 
                ans = true;
            
            umpp[d] = i;
        }
        if(ans)
            cout << "Yes\n";
        else 
            cout << "NO\n";
    }
    return 0;
}