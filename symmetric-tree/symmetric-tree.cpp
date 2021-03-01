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
    bool same(TreeNode*l,TreeNode*r){
        if(!l&&!r){
            return true;
        }
        else if(l&&r){
            if(l->val!=r->val){
                return false;    
            }
            else{
                return same(l->left,r->right)&&same(l->right,r->left);
            }
            
            
        }
        else {
            return false;
        }
    }
    bool isSymmetric(TreeNode* root) {

        
           return same(root,root);
        

        
    }
};