class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count=0;
        vector<int> store;
        for(int i=0;i<nums.size();i++){
        if(nums[i]==0)count++;
        else{
            store.push_back(nums[i]);
        }
        }
        while(count--){
            store.push_back(0);
        }
         nums=store;
        }
    
};