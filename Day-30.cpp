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
    
    bool traverse(TreeNode* node, vector<int>& arr, int len, int idx){
        if(!node) return len==0;
        
        
        if(idx == len-1 && node->left == NULL && node->right == NULL && node->val == arr[idx]) return true;
        
        if(idx<len)
            if(node->val == arr[idx])
                return traverse(node->left, arr, len, idx+1) || traverse(node->right, arr, len, idx+1);
        
        return false;
    }
    
    bool isValidSequence(TreeNode* root, vector<int>& arr) {
        int len = arr.size();
        int i = 0;
        
        return traverse(root, arr, len, i);
    }
};
