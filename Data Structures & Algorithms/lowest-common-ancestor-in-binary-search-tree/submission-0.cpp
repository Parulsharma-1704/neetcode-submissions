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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL || root==p || root==q){
            return root;
        }
        if((p->val<root->val && q->val>root->val) || p->val>root->val && q->val<root->val){
            return root;
        }
        TreeNode* l=NULL;
        TreeNode* r=NULL;
        if(p->val<root->val && q->val<root->val){
            l=lowestCommonAncestor(root->left,p,q);
        }
        else{
            r=lowestCommonAncestor(root->right,p,q);
        }
        return l?l:r;
    }
};
