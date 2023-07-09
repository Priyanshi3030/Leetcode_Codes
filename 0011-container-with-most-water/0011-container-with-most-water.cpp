class Solution {
public:
    int maxArea(vector<int>& height) {
        int answer=INT_MIN;
        int n=height.size();
        int i=0,j=n-1;
        while(i<j){
            answer=max(answer,(j-i)* min(height[i],height[j]));
            if(height[i]<height[j]) i++;
            else j--;
        }
        return answer;
    }
};