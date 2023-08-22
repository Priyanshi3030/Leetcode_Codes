class Solution {
public:
    bool checkIfPangram(string sentence) {
       unordered_map<int,int> mp;
       for(auto i : sentence){
           mp[i]++;
       }
       return mp.size()==26;
    }
};