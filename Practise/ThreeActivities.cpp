#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

pair<ll, ll> findMax(vector<int> &a, vector<int> &b, vector<int> &c)
{
    ll mx = -1, idx = -1, array = -1;
    for (int i = 0; i < a.size(); i++)
    {
        if (mx < a[i])
        {
            mx = a[i];
            idx = i;
            array = 1;
        }
        if (mx < b[i])
        {
            mx = b[i];
            idx = i;
            array = 2;
        }
        if (mx < c[i])
        {
            mx = c[i];
            idx = i;
            array = 3;
        }
    }
    return {array, idx};
}

void fun()
{
    ll n;
    cin >> n;
    vector<int> a(n), b(n), c(n);
    ll mx = -1, idx = -1;
    ll j = 0, array = -1;
    for (auto &i : a)
    {
        cin >> i;
        if (mx < i)
        {
            mx = i;
            idx = j;
            array = 1;
        }
        j++;
    }
    j = 0;
    for (auto &i : b)
    {
        cin >> i;
        if (mx < i)
        {
            mx = i;
            idx = j;
            array = 2;
        }
        j++;
    }
    j = 0;
    for (auto &i : c)
    {
        cin >> i;
        if (mx < i)
        {
            mx = i;
            idx = j;
            array = 3;
        }
        j++;
    }
    // cout << mx << " " << idx << "\n";
    ll ans = 0;
    if (array == 1)
    {
        ans += a[idx];
        for (auto &u : a)
            u = 0;
        b[idx] = 0;
        c[idx] = 0;
    }
    else if (array == 2)
    {
        ans += b[idx];
        a[idx] = 0;
        for (auto &u : b)
            u = 0;
        c[idx] = 0;
    }
    else
    {
        ans += c[idx];
        a[idx] = 0;
        b[idx] = 0;
        for (auto &u : c)
            u = 0;
    }
    int l = 2;
    while (l--)
    {
        for(auto itr:a)
            cout << itr << " ";
        cout << "\n";
        for(auto itr:b)
            cout << itr << " ";
        cout << "\n";
        for(auto itr:c)
            cout << itr << " ";
        cout << "\n";
        // cout << ans << "\n";
        pair<ll, ll> tmp = findMax(a, b, c);
        array = tmp.first;
        idx = tmp.second;
        if (array == 1)
        {
            ans += a[idx];
            for (auto &u : a)
                u = 0;
            b[idx] = 0;
            c[idx] = 0;
        }
        else if (array == 2)
        {
            ans += b[idx];
            a[idx] = 0;
            for (auto &u : b)
                u = 0;
            c[idx] = 0;
        }
        else
        {
            ans += c[idx];
            a[idx] = 0;
            b[idx] = 0;
            for (auto &u : c)
                u = 0;
        }
    }
    cout << ans << "\n";
}

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        fun();
    }

    return 0;
}
