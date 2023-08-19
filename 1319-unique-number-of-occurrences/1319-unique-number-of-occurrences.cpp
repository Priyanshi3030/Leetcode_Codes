class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int>vec(2001,0);
        for(int i=0;i<arr.size();i++){
            vec[1000+arr[i]]++;
        }
        sort(vec.begin(),vec.end());
        for(int i=1;i<2001;i++){
            if(vec[i]!=0 && vec[i]==vec[i-1])
                 return false;
        }
        return true;



    }
};