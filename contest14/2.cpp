#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define ii ({ll a; cin >> a; a;})
#define si ({string string_input; cin >> string_input; string_input;})

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
    ll x = ii, y = ii;
    for(int i = 0; i < 31; i++){
        if((x & (1<<i)) != (y & (1<<i))){
            cout << (1 << i) << "\n";
            return ;
        }
    }
}   