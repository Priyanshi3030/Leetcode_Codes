class Solution {
public:
    bool rotateString(string s, string goal) {
        string str=s+s;
        if(s.length()!=goal.length())return false;
        for(int i=0;i<goal.size();i++){
            string compare=str.substr(i,goal.size());
            if(compare==goal)return true;
        }
        return false;
    }
};