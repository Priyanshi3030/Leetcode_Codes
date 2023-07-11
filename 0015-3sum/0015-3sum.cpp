class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> vec;
    set<vector<int>> store;
    int n=nums.size();
    sort(nums.begin(),nums.end());
    for(int i=0;i<n-2;i++){
        int s=i+1,e=n-1;
        while(s<e){
            int sum=nums[i]+nums[s]+nums[e];
            if(sum<0){
                 s++;
          }
            else if(sum>0){e--;
            }
            else {
                store.insert({nums[i],nums[s],nums[e]});
                s++;
                e--;
            }
        }
    }
    for(auto i :store){
        vec.push_back(i);
    }
    return vec;
    }
};