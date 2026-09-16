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
    void inorderT(TreeNode* root, int k, vector<int>&arr){
        if(arr.size()==k || root==nullptr){
            return;
        }
        inorderT(root->left,k,arr);
        arr.push_back(root->val);
        inorderT(root->right,k,arr);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int>arr;
        inorderT(root,k,arr);
        return arr[k-1];
    }
};
