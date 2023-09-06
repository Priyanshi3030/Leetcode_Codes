class Solution {
public:
bool isVowel(char ch){
    if(ch=='a'|| ch=='e' || ch=='i'|| ch=='o'|| ch=='u')return true;
    return false;
}
    int maxVowels(string s, int k) {
        int n=s.length();
        int i=0,j=0;
        int ans=0;
        int count=0;
        while(j<n){
            if(isVowel(s[j])){
                count++;
            }
            if(j-i+1==k){    
            ans=max(ans,count);
            if(isVowel(s[i])){
                count--;
            }
                i++;
            }
        j++;
        }
        return ans;
    }
};