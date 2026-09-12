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
    TreeNode* helper(vector<int>& preorder, int &i, int bound) {

        // Base condition
        if (i >= preorder.size() || preorder[i] >= bound) {
            return NULL;
        }

        // Create root
        TreeNode* root = new TreeNode(preorder[i]);
        i++;

        // Left subtree
        root->left = helper(preorder, i, root->val);

        // Right subtree
        root->right = helper(preorder, i, bound);

        return root;
    }

    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i = 0;
        return helper(preorder, i, INT_MAX);
    }
};