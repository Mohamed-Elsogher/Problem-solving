class Solution {
public:
    int climbStairsHelp(int n, vector<int>& memo) {
        if (n == 1 || n == 0) {
            return 1; 
        }
       if (memo[n] != -1) {
            return memo[n]; 
        }

        memo[n] = climbStairsHelp(n - 1, memo) + climbStairsHelp(n - 2, memo);
        return memo[n];
    }

    int climbStairs(int n) {
        vector<int> memo(n + 1, -1); 
        return climbStairsHelp(n, memo);
    }
};
