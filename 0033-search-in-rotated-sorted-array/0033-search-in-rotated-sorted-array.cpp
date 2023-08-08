class Solution {
public:
    int search(vector<int>& nums, int target) {
        int ans=-1;
        int i=0,j=nums.size()-1;
        while(i<=j){
            int mid=(i+j)/2;
            if(nums[mid]==target){
                return mid;
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
            else if(nums[mid]<=nums[j]){
                if(target<=nums[j] && target>nums[mid]){
                    i=mid+1;
                }
                else{
                    j=mid-1;
                }
            }
        }
        return -1;
    }
};