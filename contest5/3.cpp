#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll penalty(vector<ll> a){
    ll n = a.size(), cnt = 0;
    for(ll i = 0; i < n-1; i++)
        if(a[i] < a[i+1]) cnt++;
    return cnt;
}

void fun(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for(auto &i:arr)
        cin >> i;
    
    ll x = INT_MAX, y = INT_MAX, ans = 0;
    for(int i = 0; i < n; i++){
        if(x > y)
            swap(x, y);
        if(arr[i] <= x)
            x = arr[i];
        else if(arr[i] <= y)
            y = arr[i];
        else{
            x = arr[i];
            ans++;
        }
    }
    cout << ans << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        fun();
    }
    return 0;
}