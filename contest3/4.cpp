// https://codeforces.com/contest/1915/problem/D

#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isVowel(char c){
    return c == 'a' || c == 'e';
}
int main(int argc, char const *argv[])
{
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> idx;
        string ans;
        for(int i = 0; i < n; i++) if(isVowel(s[i])) idx.push_back(i);
        for(int i = 1; i < idx.size(); i++){
            if(idx[i] - idx[i-1] == 2){
                string left = s.substr(idx[i-1]-1, 2);
                ans += left + ".";
            }else if(idx[i] - idx[i-1] == 3){
                string left = s.substr(idx[i-1]-1, 3);
                ans += left + ".";
            }
            if(i == idx.size()-1){
                string right = s.substr(idx[i]-1);
                ans += right;
            }
        }
        if(ans == "") ans = s;
        cout << ans << "\n";
    }
    return 0;
}
