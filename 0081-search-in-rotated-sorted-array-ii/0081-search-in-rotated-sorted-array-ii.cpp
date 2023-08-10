class Solution {
public:
    bool search(vector<int>& nums, int target) {
        
        int i=0,j=nums.size()-1;
        while(i<=j){
            int mid=(i+j)/2;
            if(nums[mid]==target){
                return true;
            }
            if(nums[mid]==nums[i] && nums[mid]==nums[j]){
                i=i+1;
                j=j-1;
                continue;
            }
            if(nums[mid]<=nums[j]){
                if(target<=nums[j] && target>nums[mid]){
                    i=mid+1;
                }
                else{
                    j=mid-1;
                }
            }
            //if sorted left
            else if(nums[i]<=nums[mid]){
                if(target>=nums[i]&& target<nums[mid]){
                    j=mid-1;
                }
                else{
                    i=mid+1;
                }

            }
           
        }
        return 0;
    }
    
};