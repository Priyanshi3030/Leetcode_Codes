class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        sort(strs.begin(),strs.end());
        int n=strs.size();
        string prev=strs[0];
        string last=strs[n-1];
        for(int i=0;i<prev.length();i++){
            if(prev[i]==last[i]){
                ans+=prev[i];
            }
            else{
                break;
            }
        }
        return ans;}

};