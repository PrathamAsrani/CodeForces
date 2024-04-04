#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(auto &i: arr){
        cin >> i;
    }
    priority_queue<vi> maxHeap;
    vector<int> differences;
    for(int i = 1; i < n; i++){
        maxHeap.push({arr[i] - arr[i-1], arr[i-1], arr[i]}); // store diff, cord 1, and cord 2
        differences.push_back(arr[i] - arr[i-1]);
    }
    sort(differences.begin(), differences.end());
    vector<long> ans;
    int mod = 1e9+7;
    for(int i = 1; i <= k; i++){
        priority_queue<vi> pq = maxHeap;
        for(int j = 1; j <= i; j++){
            auto it = pq.top();
            pq.pop();
            int dis = it[0];
            int c1 = it[1];
            int c2 = it[2];
            cout << c1 << " " << c2 << " " << dis << "\n";
            dis /= (j+1);
            int cord = c1 + dis;
            pq.push({cord - c1, c1, cord});
            pq.push({c2 - cord, cord, c2});
        }
        cout << pq.top()[0] << "\n";
        ans.push_back(pq.top()[0]);
    }
    long long sum = 0;
    for(auto x: ans){
        sum = (sum + x)%mod;
    }
    cout << sum << "\n";
}