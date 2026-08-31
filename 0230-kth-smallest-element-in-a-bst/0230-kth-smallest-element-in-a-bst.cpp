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
//amitas sir
int c=0;
    void fun(TreeNode*node,int k,int &ans){
        if(node==NULL)
        return;
        fun(node->left,k,ans);
        c=c+1;
        if(c==k){
            ans=node->val;
            return;
        }
        fun(node->right,k,ans);
    }
    int kthSmallest(TreeNode* root, int k) {
        int ans=0;
        fun(root,k,ans);
        return ans;
    }
};