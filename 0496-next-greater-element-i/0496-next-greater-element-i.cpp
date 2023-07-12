class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans(nums1.size());
        int n=nums2.size();
        stack<int> s;
        unordered_map<int,int> mp;
        for(int i=n-1;i>=0;i--){
        while(!s.empty() && s.top()<nums2[i]){
            s.pop();
        }
        int ans= !s.empty()? s.top() :-1;
        s.push(nums2[i]);
        mp[nums2[i]]=ans;
        }
        
        for(int i=0;i<nums1.size();i++){
            ans[i]=mp[nums1[i]];
        }
        return ans;
    }
};