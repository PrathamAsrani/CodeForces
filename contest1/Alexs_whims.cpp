// https://codeforces.com/contest/1899/problem/F

#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        int n, d, curr, input;
        cin >> n >> d;
        for(int i = 1; i < n; i++){
            cout << i << " " << i+1 << "\n";
        }
        curr = n-1;
        for(int i = 1;  i <= d; i++){
            cin >> input;
            if(input == curr) cout << "-1 -1 -1\n";
            else{
                cout << n << " " << curr << " " << input << "\n";
                curr = input;
            }
        }
    }
}