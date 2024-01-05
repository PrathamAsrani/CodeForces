#include <bits/stdc++.h>
using namespace std;

#define ll long long

/*
https://codeforces.com/problemset/problem/1894/B
9
6
1 2 3 2 2 3
7
7 7 7 7 7 7 7
4
1 1 2 2
7
1 2 3 4 5 6 7
5
2 3 3 3 2
3
1 2 1
9
1 1 1 7 7 7 9 9 9
1
1
18
93 84 50 21 88 52 16 50 63 1 30 85 29 67 63 58 37 69
*/

void solve();

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    unordered_map<ll, ll> freq, lastIdx;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        freq[a[i]]++;
        lastIdx[a[i]] = i;
    }

    int cnt = 0, secondCondHelpingkey = -1;
    for (auto i : freq)
    {
        if (i.second > 1)
        {
            cnt++;
            secondCondHelpingkey = i.first;
        }
    }
    if (cnt < 2) {
        cout << -1 << "\n";
        return ;
    }
    vector<ll> b(n, 1);
    for(auto i:freq) {
        if(i.second > 1){
            b[lastIdx[i.first]] = 2;
            break;
        }
    }
    b[lastIdx[secondCondHelpingkey]] = 3;

    for(auto i:b) cout << i << " ";
    cout << "\n";
}