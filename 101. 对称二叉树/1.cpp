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
    bool isSymmetric(TreeNode *root) {
        if (!root) {
            return true;
        }

        return helper(root->left, root->right);
    }

private:
    bool helper(TreeNode *node1, TreeNode *node2) {
        if (!node1 && !node2) {
            return true;
        } else if (!node1 || !node2) {
            return false;
        }

        return node1->val == node2->val && helper(node1->left, node2->right) && helper(node1->right, node2->left);
    }
};