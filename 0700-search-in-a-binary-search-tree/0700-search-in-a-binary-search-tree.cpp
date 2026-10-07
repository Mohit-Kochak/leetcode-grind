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
void traverse (TreeNode* root,int val,TreeNode* & ans){
    if(root==NULL){
        return;
    }
    if(root->val==val){
        ans=root;
        
    }
    traverse(root->left,val,ans);
    traverse(root->right,val,ans);
}
    TreeNode* searchBST(TreeNode* root, int val) {

        TreeNode* ans;
        ans=NULL;
        traverse(root,val,ans);
        return ans;
        
    }
};