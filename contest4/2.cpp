#include <bits/stdc++.h>

using namespace std;

#define ll long long 

ll LCM(ll a, ll b){
    ll greater = max(a, b), smaller = min(a, b);
    if(smaller == 1) return greater*greater;
    ll i = greater;
    while(i % smaller != 0) i += greater;
    return i == greater ? (i*(greater/smaller)) : i;
}
int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;
        ll lcm = LCM(a, b);
        cout << lcm << "\n";
    }
    return 0;
}

