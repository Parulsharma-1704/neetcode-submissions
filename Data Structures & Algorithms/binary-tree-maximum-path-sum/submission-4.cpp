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
    int maxS=INT_MIN;
    int helper(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int l=helper(root->left);
        int r=helper(root->right);
        int sum=max(l,r);
        sum=sum+root->val;
        maxS=max({maxS,sum,root->val+l+r});
        return sum;
    }
    int maxPathSum(TreeNode* root) {
        if(root->left==NULL && root->right==NULL){
            return root->val;
        }
        int sum=helper(root);
        return maxS;
    }
};
