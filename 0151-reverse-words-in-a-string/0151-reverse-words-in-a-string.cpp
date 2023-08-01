class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string temp="";
        for(int i=0;i<s.length();i++){
            if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z' || s[i]>='0' && s[i]<='9'){
                temp+=s[i];
            }
            else{
                if(temp.size()>0){
                st.push(temp);
                temp="";
                }
                
            }
        }
        if(temp.size()>0){
            st.push(temp);
        }
        string ans="";
        while(!st.empty()){
            ans=ans+st.top()+" ";
            st.pop();
        }
        ans.pop_back();
        return ans;
    }
};