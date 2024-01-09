#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(int argc, char const *argv[])
{
    string s = "hello world";
    string _s = s.substr(1);
    cout << _s << "\n";

    string __s = s.substr(0, 1) + s.substr(2);
    cout << __s << "\n";

    map<int, int> mp;
    mp[3] = 3;
    mp[2] = 2;
    mp[1] = 1;
    for(auto i:mp)
        cout << i.first << " " << i.second << "\n";
    
    cout << mp.rbegin()->first << "\n";
    return 0;
}
