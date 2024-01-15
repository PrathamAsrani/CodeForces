

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool check(ll val, unordered_map<ll, bool> &gr, unordered_map<ll, bool> &sm, unordered_map<ll, bool> &ne)
{
    for (auto i : gr)
    {
        if (i.first > val)
            return false;
    }
    for (auto i : sm)
    {
        if (i.first < val)
            return false;
    }
    for (auto i : ne)
    {
        if (i.first == val)
            return false;
    }
    return true;
}

void fun()
{
    ll n, k;
    cin >> n;
    ll l = LLONG_MAX, s = LLONG_MIN;
    vector<ll> arr;
    for (int i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        if (a == 1)
            s = max(s, b);
        else if (a == 2)
            l = min(l, b);
        else if (a == 3)
            arr.push_back(b);
    }
    ll ans;
    if (s > l)
        cout << 0 << "\n";
    else
    {
        ans = l - s + 1;
        for (auto i : arr)
        {
            if (i >= s && i <= l)
                ans--;
        }
        cout << ans << "\n";
    }
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