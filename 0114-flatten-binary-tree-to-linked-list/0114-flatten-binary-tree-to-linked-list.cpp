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
    TreeNode* nextRight = NULL;

    void preorder(TreeNode* root) {
        if(root == NULL) {
            return;
        }

        preorder(root->right);
        preorder(root->left);

        root->left = NULL;
        root->right = nextRight;

        nextRight = root;
    }

    void flatten(TreeNode* root) {
        preorder(root);
    }
};