class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
       int n=cardPoints.size();
       int final_ans=0;
       for(int i=0;i<k;i++){
       final_ans+=cardPoints[i];
       }
       int temp=final_ans;
       for(int i=k-1;i>=0;i--){
           temp-=cardPoints[i];
           temp+=cardPoints[n-k+i];
           final_ans=max(temp,final_ans);
       }
       return final_ans;
    }
};