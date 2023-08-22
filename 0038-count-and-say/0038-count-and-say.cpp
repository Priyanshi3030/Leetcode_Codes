class Solution {
public:
    string countAndSay(int n) {
        if(n==1)return "1";
        string str=countAndSay(n-1);
        string ans="";
        char ch=str[0];
        int count=0;
        for(int i=0;i<str.size();i++){
            if(str[i]==ch)count++;
            else{
            ans+=to_string(count);
            ans+=ch;
            ch=str[i];
            count=1;
            }
        }
        ans+=to_string(count);
            ans+=ch;  
        
        return ans;
    }
};