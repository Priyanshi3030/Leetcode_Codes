class Solution {
public:
//merge two sorted arrays
vector<int>  fn(vector<int>& nums1, vector<int>& nums2){
    int i=0,j=0;
    vector<int> ans;
    int n=nums1.size();
    int m=nums2.size();
    while(i<n && j<m){
        if(nums1[i]<nums2[j]){
        ans.push_back(nums1[i]);
        i++;
        }
        else if(nums2[j]<nums1[i]){
            ans.push_back(nums2[j]);
            j++;
        }
        else{
            ans.push_back(nums1[i]);
            ans.push_back(nums1[i]);
            i++;
            j++;
        }
    }
    //for remaining elements
    while(i<n){
        ans.push_back(nums1[i]);
        i++;
    }
    while(j<m){
        ans.push_back(nums2[j]);
        j++;
    }
    return ans;


}
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> store=fn(nums1,nums2);
        double ans;
        int n=store.size();
        if(n%2!=0){
            ans=(store[n/2])*1.00000;
        }
        else {
            ans=((double)(store[n/2]+store[n/2-1])/2)*1.00000;
        }
        return ans;
    }
};