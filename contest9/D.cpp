#include <bits/stdc++.h>

using namespace std;

int minPiecesToSort(string s) {
    int groups = 0;
    char prev = '2'; // Initialize to a value different from '0' and '1'
    for (char c : s) {
        if (c != prev) {
            groups++;
            prev = c;
        }
    }
    return max(groups, 0); // Return 0 if there's only one group
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int cnt = minPiecesToSort(s);
        bool zero = false, one = false;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '0'){
                zero = true;
            }else if(s[i] == '1' && zero == true){
                one = true;
            }
        }
        if(one){
            cnt--;
        }
        cout << cnt << "\n";
    }
    return 0;
}
