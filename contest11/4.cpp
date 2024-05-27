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
    string str;
    cin >> str;
    if(str == "NS" || str == "EW" || str == "WE" || str == "SN") {
        cout << "NO\n";
        return ;
    }
    string ans(n, '$');
    bool haveGot = false;

    auto fun = [&] (char plus, char neg) {
        int total = 0;
        for(int i = 0; i < n; i++){
            if(str[i] == plus) total++;
            if(str[i] == neg) total--;
        }
        if(total & 1){
            return false;
        }
        if(total < 0){
            total *= -1;
            swap(plus, neg);
        }

        int tar = total/2;
        for(int i = 0; i < n; i++){
            if(str[i] != plus && str[i] != neg) continue;
            if(str[i] == plus and tar > 0){
                tar--;
                ans[i] = 'R';
            }else {
                ans[i] = 'H';
            }
        }

        if(!haveGot && total == 0){
            int first_x = -1, first_y = -1;
            for(int i = 0; i < n; i++){
                if(str[i] == plus && first_x == -1){
                    first_x = i;
                    ans[i] = 'R';
                }
                if(str[i] == neg && first_y == -1){
                    first_y = i;
                    ans[i] = 'R';
                }
            }
            if(first_x != -1 and first_y != -1) haveGot = true;
        }
        else haveGot = true;
        
        return true;
    };

    if(!fun('N', 'S') || !fun('E', 'W')) {
        cout << "NO\n";
        return ;
    }
    else cout << ans << "\n";
}   