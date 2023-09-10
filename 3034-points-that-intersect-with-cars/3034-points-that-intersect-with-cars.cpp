class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
    map<int,int> mp;
    for(int i=0;i<nums.size();i++){
        int start=nums[i][0],end=nums[i][1];
        for(int j=start;j<=end;j++)mp[j]++;
    }
    return mp.size();
}

    
};