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
    int maxDepth(TreeNode* root) {
        // Base Condition
        if (root == NULL) {
            return 0;
        }

        // Counts the left sub-tree gives max height
        int left = maxDepth(root->left);

        // Counts the right sub-tree gives max height
        int right = maxDepth(root->right);

        return max(right, left) + 1;
    }
};