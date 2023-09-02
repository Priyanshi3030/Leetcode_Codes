class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1);
        ans[0]=0;
        for(int i=1;i<=n;i++){
            int j=i;
            int count=0;
            while (j) {
            count += j & 1;
             j >>= 1;
        }
      ans[i]= count;  

        }
        return ans;
    }
};