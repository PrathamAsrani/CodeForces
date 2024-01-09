#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void fun(){
    ll a, b;
    cin >> a >> b;    
    if((a%2 == 1 && b%2 == 0) || (a%2 == 0 && b%2 == 1))
        cout << "Alice\n";
    else 
        cout << "Bob\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        fun();
    }
    return 0;
}