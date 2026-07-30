class Solution {
public:
    vector<int> dp;
    int solve(vector<int>& cost,int i){
        
        if( i >= cost.size()){
            return 0;
        }
        if(dp[i] != -1){
            return dp[i];
        }
        dp[i] = cost[i] + min(solve(cost, i + 1), solve(cost, i + 2));
        return dp[i];
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        dp.resize(n, -1);
        return min(solve(cost,0),solve(cost,1));

        // vector<int> dp(n);
        // dp[0] = cost[0];
        // dp[1] = cost[1];
        // for(int i = 2;i<n;i++){
        //     dp[i] = cost[i] + min(dp[i-1],dp[i-2]);
        // }
        // return min(dp[n-1],dp[n-2]);

    }
};