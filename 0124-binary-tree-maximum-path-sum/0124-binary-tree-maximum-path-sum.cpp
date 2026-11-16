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
    int sum = INT_MIN;
    int maxsum(TreeNode *root){
        if(root == NULL){
            return 0;
        }
        int left = maxsum(root->left);
        int right = maxsum(root ->right);
        //negative ignorte kerne ke liye
        left = max(0,left);
        right= max(0,right);
        sum = max(sum,left+right+ root->val);
        return root->val+max(left,right);
    }
    int maxPathSum(TreeNode* root) {
        maxsum(root);
        return sum;
        
    }
};