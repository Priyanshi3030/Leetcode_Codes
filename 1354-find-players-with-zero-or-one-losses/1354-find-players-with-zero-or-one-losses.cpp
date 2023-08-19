class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
       unordered_map<int,int> mp;
       vector<vector<int>> ans(2);
       for(int i=0;i<matches.size();i++){
           mp[matches[i][1]]++;
       } 
       for(int i=0;i<matches.size();i++){
           int first=matches[i][0];
           int second=matches[i][1];
           if(mp.find(first)==mp.end()){
               ans[0].push_back(first);
               mp[first]++;
           }
           if(mp[second]==1){
               ans[1].push_back(second);
           }
       }
       sort(ans[0].begin(),ans[0].end());
       sort(ans[1].begin(),ans[1].end());
       return ans;
    }
};