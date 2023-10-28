class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int count_zero=0;
        int ans=0;
        int i=0,j=0;
        int n=nums.size();
        while(j<n){
            if(nums[j]==0)count_zero++;
            while(count_zero>1 && i<=j){
                if(nums[i]==0){
                    count_zero--;
                }
                i++;
            }
                ans=max(ans,j-i);
            j++;
        }
        return ans;
    }
};