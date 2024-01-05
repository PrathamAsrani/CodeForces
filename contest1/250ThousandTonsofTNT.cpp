#include <bits/stdc++.h>
using namespace std;
#define ll long long

// https://codeforces.com/contest/1899/problem/B
/*
5
2
1 2
6
10 2 3 6 1 3
4
1000000000 1000000000 1000000000 1000000000
15
60978 82265 78961 56708 39846 31071 4913 4769 29092 91348 64119 72421 98405 222 14294
8
19957 69913 37531 96991 57838 21008 14207 19198
*/
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<ll> pre;
        pre.push_back(0);
        ll sum = 0, b, mx = 0;
        for(int i = 0; i < n; i++) {
            cin >> b;
            sum += b;
            pre.push_back(sum);
        }
        for(ll i = 1; i <= n/2; i++){
            vector<ll> ans;
            if(n%i == 0){
                for(ll j = i; j <= n; j += i){
                    sum = pre[j] - pre[j-i];
                    ans.push_back(sum);
                }
                sort(ans.begin(), ans.end());
                mx = max(mx, ans[ans.size()-1] - ans[0]);
            }
        }
        cout << mx << endl;
    }
    return 0;
}
