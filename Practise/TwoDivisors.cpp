#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll GCD (ll a, ll b){
    return b == 0 ? a : GCD(b, a%b);
}

ll LCM(ll a, ll b){
    return (a/GCD(a, b))*b;
}

/*
ll LCM(ll a, ll b){
    ll s = min(a, b), g = max(a, b);
    ll tmp = g;
    while(tmp%s != 0)
        tmp += g;
    return tmp;
}
*/

void fun(){
    ll a, b;
    cin >> a >> b;
    ll lcm = LCM(a, b);
    ll s = min(a, b), g = max(a, b);
    if(s == 1)
        cout << g*g << "\n";
    else if(g == lcm)
        cout << g*g/s << "\n";
    else 
        cout << lcm << "\n";
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