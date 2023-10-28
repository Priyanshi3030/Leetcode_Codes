class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
      int count_zero=0;
      int ans=INT_MIN;
      int i=0,j=0;
      int n=nums.size();
      while(j<n){
      if(nums[j]==0)count_zero++;
      while(count_zero>k && i<=j){
          if(nums[i]==0)count_zero--;
          i++;
      }
      ans=max(ans,j-i+1);
      j++;
      }  
      return ans;
    }
};