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
    unordered_map<int, int> mp;
    int preIndex = 0;

    TreeNode* solve(vector<int>& preorder, int inStart, int inEnd) {
        if (inStart > inEnd) {
            return NULL;
        }

        // Preorder ka first element = root
        int rootValue = preorder[preIndex++];
        TreeNode* root = new TreeNode(rootValue);

        // Inorder me root ki position
        int pos = mp[rootValue];

        // Left subtree
        root->left = solve(preorder, inStart, pos - 1);

        // Right subtree
        root->right = solve(preorder, pos + 1, inEnd);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        // Inorder ke elements ki positions store kar do
        for (int i = 0; i < inorder.size(); i++) {
            mp[inorder[i]] = i;
        }

        return solve(preorder, 0, inorder.size() - 1);
    }
};