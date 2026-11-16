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
int height(TreeNode*root){
    if (root == NULL){
        return -1;

    }
    int left = height(root->left);
    int right = height(root->right);
    return 1+ max(left,right);
}

    int diameterOfBinaryTree(TreeNode* root) {
        if (root == NULL){
            return 0;
        }
        int diameter = height(root->left)+height(root->right)+2;
        return  max({diameter,diameterOfBinaryTree(root->left),
        diameterOfBinaryTree(root->right)});
        
    }
};