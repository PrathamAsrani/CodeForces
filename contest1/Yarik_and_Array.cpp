// https://codeforces.com/contest/1899/problem/C
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while(t--){
        ll n, arrElement, sum = 0, mx, parity;
        cin >> n >> arrElement;
        parity = abs(arrElement)%2; // true means odd parity, false means even parity
        mx = arrElement;
        sum = arrElement;
        for(int i = 1; i < n; i++){
            cin >> arrElement;
            if(abs(arrElement)%2 != parity) sum += arrElement;
            else sum = arrElement;
            
            sum = max(sum, arrElement);
            parity = abs(arrElement)%2;
            mx = max(mx, sum);
        }
        cout << mx << "\n";
    }
    return 0;
}
