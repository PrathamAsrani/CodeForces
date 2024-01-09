#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void fun(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll ans = 0;
    for(char c:s){
        if(c=='+')
            ans++;
        else 
            ans--;
    }
    cout << abs(ans) << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        fun();
    }
    return 0;
}