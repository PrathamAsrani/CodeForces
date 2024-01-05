// https://codeforces.com/contest/1899/problem/E

#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, idx = -1, mini = INT_MIN;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(idx == -1){
                idx = i;
                mini = arr[i];
            }else if(arr[i] < mini){
                idx = i;
                mini = arr[i];
            }
        }
        if(is_sorted(arr.begin()+idx, arr.end())) cout << idx << "\n";
        else cout << -1 << "\n";
    }
    return 0;
}