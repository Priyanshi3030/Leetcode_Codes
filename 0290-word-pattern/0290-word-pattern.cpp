class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        unordered_set<char>st;
        string temp="";
        for(int i=0;i<s.length();i++){
            if(s[i]!=' '){
                temp.push_back(s[i]);
            }
            else{
                words.push_back(temp);
                temp="";
            }
        }
        words.push_back(temp);
        if(pattern.size()!=words.size())return false;
        unordered_map<string,char> mp;
        for(int i=0;i<words.size();i++){
            if(mp.find(words[i])==mp.end() && st.find(pattern[i])==st.end()){
                mp[words[i]]=pattern[i];
                st.insert(pattern[i]);
            }
            else{
                if(mp[words[i]]!=pattern[i])return false;
            }
        }
        return true;
    }
};