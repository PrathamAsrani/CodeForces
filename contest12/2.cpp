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
    ll x;
    cin >> x;
    vector<int> v(32);
    
    for(int i = 29; i >= 0; i--){
        v[i] = (x >= (1 << i));
        x %= (1 << i);
    }

    for(int i = 0, j = i; i < 32; ){
        if(!v[i]){
            i++;
            continue;
        }
        j = i+1;
        while(v[j]){
            v[j] = 0;
            j++;
        }

        if(j > i+1){
            v[j] = 1;
            v[i] = -1;
        }

        i = j;
    }

    cout << 32 << "\n";
    for(auto x: v){
        cout << x << " ";
    }
    cout << "\n";
}
