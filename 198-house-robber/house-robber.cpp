class Solution {
public:
    vector<int> dp;
    int solve(vector<int>& nums , int i){
        if(i >= nums.size()){
            return 0;
        }
        if(dp[i] != -1){
            return dp[i];
        }
        dp[i] = max(nums[i] + solve(nums, i+2) , solve(nums, i+1));
        //dp[i] = max(nums[i] + solve(nums, i + 2), solve(nums, i + 1));
        return dp[i];
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        dp.resize(n, -1);
        return solve(nums,0);
        
    }
};








// int n = nums.size();
//         int sum = 0;
//         if(n == 0){
//             return 0;
//         }
//         for(int i =0;i<n;i++){
//             if(i % 2 == 0){
//                sum += nums[i];
//             }
//         }
//         return sum;