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
     void dfs(TreeNode* root,int &num){
       num=num*10+root->val;
       if(!root->left && !root->right){
        sum+=num;
        return;
       }
       if(root->left){
        dfs(root->left,num);
        num=num/10;
       }
       if(root->right){
        dfs(root->right,num);
        num=num/10;
       }
    }
public:
    int sumNumbers(TreeNode* root) {
        int num=0;
        if(root->right==nullptr && root->left==nullptr){
            return root->val;
        }
        dfs(root,num);
        return sum;
    }
};