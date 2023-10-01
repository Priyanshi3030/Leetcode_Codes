class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        string temp="";
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
            reverse(temp.begin(),temp.end());
            ans+=temp;
            ans+=" ";
            temp="";
            }
            else {
                temp.push_back(s[i]);
            }
        }
        if(temp.length()>0){
            reverse(temp.begin(),temp.end());
            ans+=temp;
        }
        return ans;
    }
};