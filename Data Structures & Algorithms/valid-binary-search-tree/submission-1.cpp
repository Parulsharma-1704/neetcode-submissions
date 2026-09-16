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
    bool helper(TreeNode* root, int minV, int maxV){
        if(root==NULL){
            return true;
        }
        if(root->val<=minV || root->val>=maxV){
            return false;
        }
        bool l=helper(root->left,minV,root->val);
        bool r=helper(root->right,root->val,maxV);
        return (l&&r);
    }
    bool isValidBST(TreeNode* root) {
        return helper(root,INT_MIN,INT_MAX);
    }
};
