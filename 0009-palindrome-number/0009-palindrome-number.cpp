class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        long long rev=0;
        int y=x;
        while(y>0){
            int digit=y%10;
            rev=(rev*10)+digit;
            y=y/10;
        }
        if(x==rev)return true;
        return false;
    }
};