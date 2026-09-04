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
//chana new traversal way all pre,inorder,post
    vector<int> preorderTraversal(TreeNode* root) {
        if(root==NULL)
        return {};
        vector<int>right=preorderTraversal(root->right);
        vector<int>left=preorderTraversal(root->left);
        vector<int>sequence;
        sequence.insert(sequence.end(),root->val);

        sequence.insert(sequence.end(),left.begin(),left.end());
        sequence.insert(sequence.end(),right.begin(),right.end());

        return sequence;
    }
};