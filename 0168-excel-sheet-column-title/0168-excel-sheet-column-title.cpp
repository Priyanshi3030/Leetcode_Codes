class Solution {
public:
    string convertToTitle(int columnNumber) {
        vector<char>vec(26);
        string rem="";
        while(columnNumber>0){
        columnNumber--;
        int digit=columnNumber%26;
        char c=digit+'A';
        rem=c+rem;
        columnNumber/=26;
    
        }
        return rem;
        }


        
    
};