class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int n=nums.size();
       unordered_map<int,int> mp;
       for(int i=0;i<n;i++){
           int temp=target-nums[i];
           if(mp.find(temp)!=mp.end()){
               ans.push_back(i);
               ans.push_back(mp[temp]);
               break;

           }
           mp.insert({nums[i],i});
       } 
       return ans;
    }
};