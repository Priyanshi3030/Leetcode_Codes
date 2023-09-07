class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=1;
        int value=0;
        for(int k=1;k<nums.size();k++){
            if(nums[k]!=nums[value]){
            value++;
            nums[value]=nums[k];
            count++;
            }
        }
        return count;
    }
};