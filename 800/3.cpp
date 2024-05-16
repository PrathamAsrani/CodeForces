#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve();

int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();
}

void solve()
{
    int n, m;
        cin >> n >> m;

        string x, s;
        cin >> x >> s;

        int flag = -1;

        for (int i = 0; i < 10; i++) {
            string xs = x;
            for (int j = 0; j < pow(2, i) - 1; j++) {
                xs += x;
            }
            if (xs.find(s) != string::npos) {
                flag = i;
                break;
            }
        }

        cout << flag << endl;
}   