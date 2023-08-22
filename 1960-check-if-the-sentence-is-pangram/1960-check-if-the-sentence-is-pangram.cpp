class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int>vec(26,0);
        int count=0;
        for(int i=0;i<sentence.size();i++){
        if(vec[sentence[i]-'a']==0){
        vec[sentence[i]-'a']++;
        count++;
        }
        }
        return count==26;
        

    }
};