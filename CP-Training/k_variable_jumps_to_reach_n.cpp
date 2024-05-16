#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int k_variable_jumps_to_reach_n(vector<int> &arr)
    {
        function<int(int)> recur = [&](int idx) -> int
        {
            if (idx == arr.size())
                return 1;
            int steps = 0;
            for (int i = idx + 1; i <= arr.size() && i <= idx + arr[idx]; i++)
            {
                steps += recur(i);
            }
            return steps;
        };

        int n = arr.size();

        vector<int> dp(n + 1, -1);
        dp[n] = 1;

        function<int(int)> memo = [&](int idx) -> int
        {
            if (dp[idx] != -1)
                return dp[idx];
            int steps = 0;
            for (int i = idx + 1; i <= arr.size() && i <= idx + arr[idx]; i++)
            {
                steps += memo(i);
            }
            return dp[idx] = steps;
        };

        // return recur(0);
        // return memo(0);

        for (int i = n - 1; i >= 0; i--)
        {
            int steps = 0;
            for (int idx = i + 1; idx <= arr.size() && idx <= i + arr[i]; idx++)
            {
                steps += dp[idx];
            }
            dp[i] = steps;
        }
        return dp[0];
    }
};

int main()
{
    // vector<int> arr = {2, 3, 0, 2, 2, 3};
    vector<int> arr = {3, 2, 4, 2, 0, 2, 3, 1, 2, 2};
    Solution obj;
    cout << obj.k_variable_jumps_to_reach_n(arr) << "\n";
    return 0;
}