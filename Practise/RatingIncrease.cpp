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
    string s;
    cin >> s;
    int i = s.size()/2, n = s.size();
    string a, b;
    bool f = false;
    for(ll i = 0 ; i < n-1; i++){
        a += s[i];
        b = s.substr(i+1, n-i+1);
        if(b[0] == '0')
            continue;
        else{
            if(stoi(a) < stoi(b)){
                f = true;
                break;
            }
        }
    }
    if(f) 
        cout << a << " " << b << "\n";
    else
        cout << "-1\n";
}   