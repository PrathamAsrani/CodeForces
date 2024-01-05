// https://codeforces.com/contest/1915/problem/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(int argc, char const *argv[])
{
    ll t;
    cin >> t;
    while (t--){
        int x, y;
        char arr[3][3];
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                cin >> arr[i][j];
                if(arr[i][j] == '?') x = i, y = j;
            }
        }
        // cout << x<< " " << y << "\n";
        bool A = false, B = false, C = false;
        for(int i = 0; i < 3; i++) {
            if(arr[x][i] == 'A') A = true;
            else if(arr[x][i] == 'B') B = true;
            else if(arr[x][i] == 'C') C = true;
        }
        if(A == false) cout << 'A' << "\n";
        else if(B == false) cout << 'B' << "\n";
        else cout << 'C' << "\n";
    }
    return 0;
}
