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
TreeNode* traverse(TreeNode* root,TreeNode* p,TreeNode*q ){
    TreeNode* l,*r;
    if(root==NULL || root==p || root==q){
        return root;

    }
    l=traverse(root->left,p,q);
    r=traverse(root->right,p,q);
    if(l!=NULL && r!=NULL){
        return root;
    }
    if(l==NULL){
        return r;
    }else{
        return l;
    }

}
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        TreeNode* ans;
        ans=traverse(root,p,q);
        return ans;
        
               
    }
};