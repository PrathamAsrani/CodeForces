#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void fun(){
    ll n;
    cin >> n;
    vector<ll> arr(n), st;
    for(auto &i:arr)
        cin >> i;
    st.push_back(arr[0]);
    for(int i = 1; i < n; i++){
        // erase the smaller elements
        while(st.size() > 1 && arr[i] < st[0] && st[0]-1 == st[1])
            st.erase(st.begin());
        
        // push greater elements
        if(arr[i] > st[0])
            st.insert(st.begin(), arr[i]);
        else if(arr[i] == st[0]-1)
            st[0] = arr[i];
        else if(arr[i] == st[0]){
            if(arr[i] == 0){
                cout << "NO\n";
                return ;
            }
        }else{
            cout << "NO\n";
            return ;
        }
    }
    while(st.size() > 1 && st[0]-1 == st[1])
        st.erase(st.begin());
    
    if(st.size() == 1 && st[0] == 0)
        cout << "YES\n";
    else    
        cout << "NO\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        fun();
    }
    return 0;
}