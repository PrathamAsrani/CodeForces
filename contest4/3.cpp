// https://codeforces.com/contest/1916/problem/C

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void fun(){
    ll n;
    cin >> n;
    ll sum = 0, cntOdd = 0;
    for(ll i = 0; i < n; i++){
        ll num;
        cin >> num;
        sum += num;
        if(num&1)
            cntOdd++;
        if(i == 0){
            cout << sum << " ";
            continue;
        }
        ll loss = (cntOdd/3) + (cntOdd%3 == 1);
        cout << sum-loss << " ";
    }
    cout << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        fun();
    }
    return 0;
}