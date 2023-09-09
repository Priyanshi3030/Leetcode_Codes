class Solution {
public:
   int fn(vector<int>& nums, int target, vector<int>& dp) {
    if (target == 0) {
        return 1;
    }
    if (dp[target] != -1) {
        return dp[target];
    }
    
    int count = 0;
    for (int i = 0; i < nums.size(); ++i) {
        if (target >= nums[i]) {
            count += fn(nums, target - nums[i], dp);
        }
    }
    
    dp[target] = count;
    return count;
}

int combinationSum4(vector<int>& nums, int target) {
    vector<int> dp(target + 1, -1);
    dp[0] = 1; // There's one way to make target sum of 0, which is by taking no elements.
    return fn(nums, target, dp);
}

};