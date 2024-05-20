#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
bool check(vector<ll> &arr, ll k, ll n){
    vector<int> bits(22, 0);

    // count the set bits in first k elements
    for(int i = 0; i < k; i++){
        int num = arr[i], idx = 0;
        while(num > 0){
            if(num & 1) 
                bits[idx]++;
            num = num/2;
            idx++;
        }
    }

    vector<int> freq = bits;
    for(int i = k; i < n; i++){
        // get the set bits of current element
        ll num = arr[i], idx = 0;
        while(num > 0){
            if(num & 1) 
                freq[idx]++;
            num = num/2;
            idx++;
        }
        
        // remove the set bits of first element i.e. i-k th element
        idx = 0, num = arr[i-k];
        while(num > 0){
            if(num & 1) 
                freq[idx]--;
            num = num/2;
            idx++;
        }

        for(int j = 0; j < 22; j++){
            if(freq[j] > 0 && bits[j] == 0) 
                return false;
            if(freq[j] == 0 && bits[j] > 0) 
                return false;
        }
    }
    return true;
}

int BS(vector<ll> &arr){
    ll n = arr.size();
    ll low = 1, high = n, ans = n;
    while(low <= high){
        ll mid = (low+high)/2;
        if(check(arr, mid, n)) {
            high = mid-1;
            ans = mid;
        }
        else {
            low = mid+1;
        }
    }
    return ans;
}

ll helper(vector<ll> &arr, ll n){
    ll ans = 1;
    for(int i = 0; i < 20; i++){
        vector<int> occ;
        for(int j = 0; j < n; j++) if(arr[j]>>i & 1) occ.push_back(j);
        ll mx = 0, last = -1;
        for(auto &it: occ){
            mx = max(mx, it-last);
            last = it;
        }
        mx = max(mx, n-last);
        if(last != -1) {
            ans = max(ans, mx);
        }
    }
    return ans;
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(auto &x: v) cin >> x;
    cout << BS(v) << "\n";
    // cout << helper(v, n) << "\n";
} 

int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();
}  