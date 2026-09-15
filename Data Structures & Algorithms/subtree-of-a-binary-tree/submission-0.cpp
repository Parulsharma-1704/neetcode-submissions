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
    bool isSame(TreeNode* p, TreeNode* q){
        if((p==NULL && q!=NULL) || (p!=NULL && q==NULL)){
            return false;
        }
        if((p==NULL && q==NULL)){
            return true;
        }
        if(p->val!=q->val){
            return false;
        }
        bool l=isSame(p->left,q->left);
        bool r=isSame(p->right,q->right);
        return (l && r);
    }
    bool helper(TreeNode* root, TreeNode* subRoot){
        if(root==NULL){
            return false;
        }
        bool ans=isSame(root,subRoot);
        if(ans){
            return true;
        }
        bool l=helper(root->left,subRoot);
        bool r=helper(root->right,subRoot);
        return (l || r);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        return helper(root,subRoot);
    }
};
