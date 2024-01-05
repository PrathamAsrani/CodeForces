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
    return 0;
}
