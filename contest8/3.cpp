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
    int n;
    cin >> n;
    vector<int> arr(n);
    for(auto &i:arr) cin >> i;
    int l = 0, r = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == arr[0]){
            l++;
        }else{
            break;
        }
    }
    for(int i = n-1; i >= 0; i--){
        if(arr[i] == arr[n-1]){
            r++;
        }else{
            break;
        }
    }
    if(arr[0] == arr[n-1]){
        cout << max(0, n-(l+r)) << "\n"; 
    }else{
        cout << n - max(l, r) << "\n";
    }
}   