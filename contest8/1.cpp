#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve();
string findChar(ll &num){
    for(int i = 1; i <= 26; i++){
        for(int j = 1; j <= 26; j++){
            for(int k = 1; k <= 26; k++){
                if(i + j + k == num){
                    char a = 'a' + (i - 1);
                    char b = 'a' + (j - 1);
                    char c = 'a' + (k - 1);
                    return  string() + a + b + c;
                }
            }
        }
    }
}

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
    /*
    string num = "";
    num += findChar(n);
    cout << num << "\n";
    */
    string num;
    int i = 1;
    while(n-i > 52) i++;
    num += ('a' + i-1);
    n -= i;
    i = 1;
    while(n-i > 26) i++;
    num += ('a' + i-1);
    n -= i;
    
    num += ('a' + n-1);
    cout << num << "\n";
}   