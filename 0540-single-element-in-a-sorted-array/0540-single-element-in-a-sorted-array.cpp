class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
      int n = nums.size(); //size of the array.
    if (n == 1) return nums[0];

    for (int i = 0; i < n; i++) {

        //Check for first index:
        if (i == 0) {
            if (nums[i] != nums[i + 1])
                return nums[i];
        }
        //Check for last index:
        else if (i == n - 1) {
            if (nums[i] != nums[i - 1])
                return nums[i];
        }
        else {
            if (nums[i] != nums[i - 1] && nums[i] != nums[i + 1])
                return nums[i];
        }
    }

    // dummy return statement:
    return -1;
}
    
};