class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n=nums.size();
        int count=1;
        for(int i=0;i<n-1;i++){
        if(nums[i]<=nums[i+1])count++;
        }
        if(count==n)return true;
        count=1;
        for(int i=0;i<n-1;i++){
            if(nums[i]>=nums[i+1])count++;
        }
        if(count==n)return true;
        return false;
    }
};