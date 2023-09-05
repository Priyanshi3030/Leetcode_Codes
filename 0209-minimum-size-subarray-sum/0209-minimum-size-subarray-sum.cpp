class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans=INT_MAX;
        int n=nums.size();
        int i=0,j=0;
        long long sum=0;
        while(j<n){
            sum+=nums[j];
            while(sum>=target){
                ans=min(j-i+1,ans);
                sum-=nums[i];
                i++;;
            }
           j++;
        }
        return ans==INT_MAX?0:ans;
    }
};