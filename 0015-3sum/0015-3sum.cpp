class Solution {
public:
 vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> ans;
    int n = nums.size();
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n - 2; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        int l = i + 1;
        int m = n - 1;
        while (l < m) {
            int target = -nums[i];
            int sum = nums[l] + nums[m];
            if (sum == target) {
                ans.push_back({nums[i], nums[l], nums[m]});
                while (l < m && nums[l] == nums[l + 1]) l++;
                while (l < m && nums[m] == nums[m - 1]) m--;
                l++;
                m--;
            } else if (sum > target) {
                m--;
            } else {
                l++;
            }
        }
    }
    return ans;
}

};