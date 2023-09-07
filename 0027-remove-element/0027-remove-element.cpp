class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int value=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                nums[value++]=nums[i];
            }
        }
        return value;
    }
};