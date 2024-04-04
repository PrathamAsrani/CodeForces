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
    ll n;
    cin >> n;
    vector<int> arr(n);
    ll sum = 0;
    for(auto &i:arr) cin >> i, sum += i;
    if(sum % n != 0) {
        cout << "NO\n";
        return ;
    }
    int avgWater = sum/n;
    int excessWater = 0;
    for(int water : arr){
        excessWater += (water - avgWater);
        if(excessWater < 0) excessWater = 0;
    }
    if(excessWater == 0){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
}   