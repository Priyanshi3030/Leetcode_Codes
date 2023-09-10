class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
    int ans = 0;
    
    // Sort the intervals based on their starting points
    sort(nums.begin(), nums.end());
    
    for (int i = 0; i < nums.size(); i++) {
        int currentStart = nums[i][0];
        int currentEnd = nums[i][1];
        
        while (i + 1 < nums.size() && currentEnd >= nums[i + 1][0]) {
            // There is an overlap, update currentEnd
            currentEnd = max(currentEnd, nums[i + 1][1]);
            i++;
        }
        
        ans += (currentEnd - currentStart + 1);
    }
    
    return ans;
}

};
    
