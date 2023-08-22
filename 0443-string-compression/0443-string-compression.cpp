class Solution {
public:
    int compress(vector<char>& chars) {
        int index=0;
        char ch=chars[0];
        int count=0;
        if(chars.size()==1)return 1;
        for(int i=0;i<chars.size();i++){
            if(chars[i]==ch){
                count++;
            }
            else{
            chars[index]=ch;
            index++;
            if(count==1){
                ch=chars[i];
                count=1;
                continue;
                }
            string str=to_string(count);
            for(int i=0;i<str.length();i++){
            chars[index]=str[i];
            index++;
            }
            ch=chars[i];
            count=1;
            }
            }
            chars[index]=ch;
            index++;
            if(count!=1){
            string str=to_string(count);
            for(int i=0;i<str.length();i++){
            chars[index]=str[i];
            index++;
            }
            }
        
        return index;
    }
};