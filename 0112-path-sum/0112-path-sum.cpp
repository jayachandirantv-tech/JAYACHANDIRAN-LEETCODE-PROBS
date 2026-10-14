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
    int sum=0;
   bool dfs(TreeNode* root,int targetsum){
    if(root==nullptr){
        return false;
    }
    sum+=root->val;
    if(root->left==nullptr && root->right==nullptr){
        if(sum==targetsum){
            return true;
        }
    }
    if(dfs(root->left,targetsum)){
        return true;
    }
    if(dfs(root->right,targetsum)){
        return true;
    }
    sum-=(root->val);
    return false;
   }
public:
    bool hasPathSum(TreeNode* root, int targetsum) {
        if(dfs(root,targetsum)) return true;

        return false;
    }
};