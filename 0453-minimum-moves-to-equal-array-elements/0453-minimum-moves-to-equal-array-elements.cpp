class Solution {
public:
    int minMoves(vector<int>& nums) {
       int count = 0, min = *min_element(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++)
            count += nums[i] - min;
        return count;
    }
};