// class Solution {
// public:
//     vector<int> dp;
//     int solve(vector<int>& nums , int i){
//         if(i >= nums.size()){
//             return 0;
//         }
//         if(dp[i] != -1){
//             return dp[i];
//         }
//         dp[i] = max(nums[i] + solve(nums, i+2) , solve(nums, i+1));
//         return dp[i];
//     }
//     int rob(vector<int>& nums) {
//         int n = nums.size();
//         dp.resize(n, -1);
//         return solve(nums,0);
        
//     }
// };


class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n + 2, 0);
        for(int i = n-1; i >= 0; i--)
        {
            dp[i] = max(nums[i] + dp[i+2], dp[i+1]);
        }
        return dp[0];
    }
};