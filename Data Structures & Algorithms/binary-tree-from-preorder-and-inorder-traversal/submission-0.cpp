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
    TreeNode* build(int start, int end, int &i, vector<int>&preorder, vector<int>&inorder, unordered_map<int,int>&mp){
        if(start>end){
            return NULL;
        }
        int root=preorder[i];
        i++;
        int ind=mp[root];
        TreeNode* node=new TreeNode(root);
        node->left=build(start,ind-1,i,preorder,inorder,mp);
        node->right=build(ind+1,end,i,preorder,inorder,mp);
        return node;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int>mp;
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
        }
        int n=inorder.size();
        int i=0;
        return build(0,n-1,i,preorder,inorder,mp);
    }
};
