class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //brute
        int n=nums.size();
        int ans;
        int count=0;
        for(int i=0;i<n;i++){
        if(count==0){
            ans=nums[i];
            count=1;
            }
            else if(nums[i]==ans){
                count++;
            }
            else count--;
        }
        return ans;
    }
};