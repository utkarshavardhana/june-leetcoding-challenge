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
    void traverse(TreeNode* root, int t, int &sum) {
        if(!root)   return;
        t *= 10;
        t += root->val;
        if(!root->left and !root->right) {
            sum += t;
            return;
        }
        traverse(root->left, t, sum);
        traverse(root->right, t, sum);
    }
    int sumNumbers(TreeNode* root) {
        int sum = 0;
        traverse(root, 0, sum);
        return sum;
    }
};
