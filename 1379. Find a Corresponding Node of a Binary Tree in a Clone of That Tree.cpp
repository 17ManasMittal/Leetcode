/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    void solve(TreeNode *original,TreeNode *cloned,TreeNode *target,TreeNode *&ans){
        if(original==NULL){
            return;
        }
        if(original==target){
            ans=cloned;
        }
        solve(original->left,cloned->left,target,ans);
        solve(original->right,cloned->right,target,ans);
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        
        TreeNode *ans;
        solve(original,cloned,target,ans);
        return ans;
    }
};
