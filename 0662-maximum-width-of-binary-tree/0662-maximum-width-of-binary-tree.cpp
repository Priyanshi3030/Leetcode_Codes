/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
 
    int widthOfBinaryTree(TreeNode* root) {
        long long ans=0;
        if(!root)return 0;
        queue<pair<TreeNode*,long long>> q;
        q.push({root,1});
        while(!q.empty()){
            long long n=q.size();
            long long left,right;
            long long  min=q.front().second;
            for(int i=0;i<n;i++){
                TreeNode* node=q.front().first;
                long long index=q.front().second-min;
                q.pop();
                if(i==0){
                    left=index;
                }
                if(i==n-1){
                    right=index;
                }
                if(node->left){
                    q.push({node->left,(long long)(2*index)});
                }
                if(node->right){
                    q.push({node->right,(long long)(2*index+1)});
                }
            }
            ans=max(ans,right-left+1);
        }

        return ans;
    }
};