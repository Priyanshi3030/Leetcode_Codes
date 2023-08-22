class Solution {
public:
    string countAndSay(int n) {
        vector<string>s(n+1);
        if(n==1)return "1";
        s[0]="1";
        for(int i=1;i<=n;i++){
        string ans="";
        string str=s[i-1];
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
        s[i]=ans;    
        }
        return s[n-1];
    }
};