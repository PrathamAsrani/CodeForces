#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    while(n--){
        int a, b;
        cin >> a >> b ;
        cout << min(a, b) << " " << max(a, b) << "\n";
    }
    return 0;
}
