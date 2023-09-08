class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    map<string,vector<string>> mp;
    vector<vector<string>> ans;
    for(int i=0;i<strs.size();i++){
        string s=strs[i];
        sort(s.begin(),s.end());
        if(mp.find(s)==mp.end()){
            mp.insert({s,{strs[i]}});
        }
        else if(mp.find(s)!=mp.end()){
            mp[s].push_back(strs[i]);
        }
    }
    for(auto i :mp){
    ans.push_back(i.second);
    }
    return ans;
    }
};