/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    void fun(TreeNode* node1, vector<int>& ans) {
        if (node1 == NULL)
            return;
        fun(node1->left, ans);
        ans.push_back(node1->val);
        fun(node1->right, ans);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> l1, r1;
        fun(root1, l1);
        fun(root2, r1);
        // sort(ans.begin(),ans.end());

        return merge(l1, r1);
    }
    private:
    vector<int>merge(vector<int>l1,vector<int>r1){
        int i=0;
        int j=0;
        vector<int>ans;
        while(i<l1.size()&&j<r1.size()){
            if(l1[i]<=r1[j]){
             ans.push_back(l1[i]);
              i++;
            }
            else{
                ans.push_back(r1[j]);
                j++;
            }
        }
        while(i<l1.size()){
            ans.push_back(l1[i]);
            i++;
        }
        while(j<r1.size()){
            ans.push_back(r1[j]);
            j++;
        }
        return ans;
    }
};
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution1 {
public:
    void fun(TreeNode* node1, vector<int>& ans) {
        if (node1 == NULL)
            return;
        fun(node1->left, ans);
        ans.push_back(node1->val);
        fun(node1->right, ans);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> ans;
        fun(root1, ans);
        fun(root2, ans);
        sort(ans.begin(), ans.end());
        return ans;
    }
};