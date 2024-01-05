#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        vector<int> prefix_sums(n), remaining_numbers(n);

        prefix_sums[0] = a[0];
        remaining_numbers[0] = a[0];

        for (int i = 1; i < n; ++i) {
            prefix_sums[i] = prefix_sums[i - 1] + a[i];
            remaining_numbers[i] = max(remaining_numbers[i - 1], a[i]);
        }

        for (int k = 1; k <= n; ++k) {
            if (k == 1) {
                cout << a[0] << " ";
            } else {
                int max_sum = prefix_sums[k - 1];
                int max_remaining = remaining_numbers[k - 1];

                if (k % 2 == 0) {
                    cout << max_sum << " ";
                } else {
                    cout << max(max_sum - max_remaining, max_remaining * 2) << " ";
                }
            }
        }

        cout << endl;
    }

    return 0;
}


// void fun(){
//     int n;
//     cin >> n;
//     int sum = 0, odd = 0;
//     for(int i = 0; i < n; i++){
//         int num;
//         cin >> num;
//         if(num&1) odd++;
//         sum += num;
//         if(i == 0){
//             cout << sum << " ";
//             continue;
//         }
//         if(sum&1 && odd&1) sum--;
//         else if(sum&1 && !(odd&1)) sum += (odd/2);
//         cout << sum << " ";
//     }
//     cout << "\n";
// }

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         fun();
//     }
// }