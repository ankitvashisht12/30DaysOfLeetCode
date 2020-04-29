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
    
    int mps(TreeNode* node, int&_max){
        if(!node) return 0;
        
        int left = max(0, mps(node->left, _max));
        int right = max(0,mps(node->right, _max));
        _max  = max(_max, node->val+left+right);
        return max(right, left)+node->val;
    }
    
    int maxPathSum(TreeNode* root) {
        int ans = INT_MIN;
        mps(root, ans);
        return ans;
    }
};
