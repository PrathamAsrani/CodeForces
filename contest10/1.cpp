#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long p1, p2, p3;
        cin >> p1 >> p2 >> p3;
        int total = p1+p2+p3;
        if(total&1) cout << -1 << "\n";
        else if(p3 > p2+p1) cout << p1+p2 << "\n";
        else cout << (total)/2 << "\n"; // choose two elements from n elements and decrese by 1 by 1
    }
    return 0;
}