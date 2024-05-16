#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        unordered_map<char, int> umpp;
        for(auto c: s){
            umpp[c]++;
        }
        if(umpp.size() > 1){
            for(int i = 0; i < s.size(); i++){
                for(int j = i+1; j < s.size(); j++){
                    if(s[i] != s[j]){
                        char c = s[i];
                        s[i] = s[j];
                        s[j] = c;
                        break;
                    }
                }
                break;
            }
            cout << "YES\n" << s << "\n";

        }else{
            cout << "NO\n";
        }
    }
    return 0;
}
