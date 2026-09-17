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

class Codec {
public:
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
       string ans="";
        queue<TreeNode*>q;

        if(root==NULL){
            return ans;
        }
        q.push(root);

        while(!q.empty()){
            TreeNode* temp=q.front();
            q.pop();

            if(temp){
                ans+=to_string(temp->val) + ",";
                q.push(temp->left);
                q.push(temp->right);
            }
            else{
                ans+="null,";
            }
        }
        return ans;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data=="null"){
            return NULL;
        }
        stringstream ss(data);
        string val;
        getline(ss,val,',');
        if (val == "null" || val.size() == 0)
                return NULL;
        TreeNode *node=new TreeNode(stoi(val));
        queue<TreeNode*>q;
        q.push(node);

        while(!q.empty()){
            TreeNode *temp=q.front();
            q.pop();

             if (!getline(ss, val, ',')) break;

            if(val!="null" && val.size()>0){
                temp->left=new TreeNode(stoi(val));
                q.push(temp->left);
            }
            else{
                temp->left=NULL;
            }

             if (!getline(ss, val, ',')) break;

            if(val!="null" && val.size()>0){
                temp->right=new TreeNode(stoi(val));
                q.push(temp->right);
            }
            else{
                temp->right=NULL;
            }
        }
        return node;
    }
};
