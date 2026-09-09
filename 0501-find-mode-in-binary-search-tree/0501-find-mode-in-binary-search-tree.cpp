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
void fun(TreeNode* node,vector<int>&ans){
    if(node==NULL)
    return;
    fun(node->left,ans);
    ans.push_back(node->val);
    fun(node->right,ans);
}
    vector<int> findMode(TreeNode* root) {
        vector<int>ans;
        fun(root,ans);
        map<int,int>mp;//map
        //element,frequency
        for(auto freq:ans){
            mp[freq]++;
        }
        int mini=INT_MIN;
        int index=0;
        //isse loop ma max frequency nikala
        for(auto it:mp){
            int p=it.second;//
            if(p>mini){
                mini=p;
              //  index=it.first;
            }
        }
        vector<int>res;
        //isse loop har element frequency=maxfrequency
        for(auto it:mp){
            if(it.second==mini){
               res.push_back(it.first); 
            }
        }
        return res;
    }
};