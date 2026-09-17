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
    int helper(TreeNode* root, int &maxSum){
        if(root==NULL){
            return 0;
        }
        int l=helper(root->left,maxSum);
        int r=helper(root->right,maxSum);
        // int pathS=root->val+l+r;
        // maxSum=max(pathS,max(l,r));
        return max({root->val,root->val+l+r,l,r});
    }
    int maxPathSum(TreeNode* root) {
        int maxSum=INT_MIN;
        return helper(root,maxSum);
    }
};
