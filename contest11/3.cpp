#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

void solve();

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--)
        solve();
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (auto &x : v)
        cin >> x;
    /*
    // TC: O(NLogN)
    int cnt = 0;
    unordered_map<string, multiset<string>> umpp;
    for(int i = 0; i < n-2; i++){
        int b1 = v[i], b2 = v[i+1], b3 = v[i+2];
        string s = to_string(b1) + to_string(b2) + to_string(b3);
        string s1, s2, s3;
        s1 = to_string(b1) + to_string(b2) + "*";
        s2 = to_string(b1) + "*" + to_string(b3);
        s3 = "*" + to_string(b2)+ to_string(b3);

        if(umpp.find(s1) != umpp.end()) {
            cnt += umpp[s1].size();
            cnt -= (umpp[s1].find(s) != umpp[s1].end()) ? distance(umpp[s1].lower_bound(s), umpp[s1].upper_bound(s)) : 0;
        }
        if(umpp.find(s2) != umpp.end()) {
            cnt += umpp[s2].size();
            cnt -= (umpp[s2].find(s) != umpp[s2].end()) ? distance(umpp[s2].lower_bound(s), umpp[s2].upper_bound(s)) : 0;
        }
        if(umpp.find(s3) != umpp.end()) {
            cnt += umpp[s3].size();
            cnt -= (umpp[s3].find(s) != umpp[s3].end()) ? distance(umpp[s3].lower_bound(s), umpp[s3].upper_bound(s)) : 0;
        }

        umpp[s1].insert(s);
        umpp[s2].insert(s);
        umpp[s3].insert(s);
    }
    cout << cnt << "\n";
    */

    map<pii, int> ab, bc, ac;
    map<pair<int, pii>, int> abc;
    ll cnt = 0;
    for (int i = 0; i < n - 2; i++)
    {
        int a = v[i], b = v[i + 1], c = v[i + 2];
        int abc_val = abc[{a, {b, c}}];

        cnt += (ab[{a, b}] - abc_val);
        cnt += (bc[{b, c}] - abc_val);
        cnt += (ac[{a, c}] - abc_val);

        ab[{a, b}]++;
        bc[{b, c}]++;
        ac[{a, c}]++;
        abc[{a, {b, c}}]++;
    }
    cout << cnt << "\n";
}