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
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        if(preorder.size() == 0) return NULL;
        
        TreeNode* root= new TreeNode(preorder[0]);
        
        if(preorder.size()==1) return root;
         
        
        vector<int> left;
        vector<int> right;
         
        for(auto i : preorder){
            if(i < preorder[0]) left.push_back(i);
            else if(i > preorder[0]) right.push_back(i);
        }
        
        root->left = bstFromPreorder(left);
        root->right = bstFromPreorder(right);
        
        return root;
    }
};
