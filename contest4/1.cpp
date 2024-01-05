// https://codeforces.com/contest/1916

#include <bits/stdc++.h>

using namespace std;

void fun()
{
    int n, k;
    cin >> n >> k;
    int prod = 1;
    int bad = false;
    for (int i = 0; i < n; i++)
    {
        int b;
        cin >> b;
        prod *= b;
        if (2023 % prod != 0)
        {
            bad = true;
        }
    }
    if(bad){
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    cout << 2023 / prod;
    for (int i = 0; i < k - 1; i++)
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
