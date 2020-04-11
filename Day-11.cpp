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
    
    int height(TreeNode* node){
        if(!node) return 0;

        return 1 + max(height(node->left), height(node->right));
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        
        int maxHeight = height(root->left) + height(root->right);
        int diaLeft = diameterOfBinaryTree(root->left);
        int diaRight = diameterOfBinaryTree(root->right);
        
        return max({maxHeight, diaLeft, diaRight});
    }
};
