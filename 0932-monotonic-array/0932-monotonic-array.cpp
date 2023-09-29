class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n=nums.size();
        int count=1;
        int count2=1;
        for(int i=0;i<n-1;i++){
        if(nums[i]<=nums[i+1])count++;
        if(nums[i]==nums[i+1])count2++;
        else if(nums[i]>nums[i+1])count2++;
        }
        
        if(count==n || count2==n)return true;
        return false;
    }
};