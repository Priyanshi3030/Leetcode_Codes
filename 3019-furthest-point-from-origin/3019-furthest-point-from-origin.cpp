class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
       int left=0,right=0,spaces=0;
       for(auto i : moves){
           if(i=='L')left++;
           else if(i=='R')right++;
           else spaces++;
       } 
       return abs(left-right)+spaces;
    }
};