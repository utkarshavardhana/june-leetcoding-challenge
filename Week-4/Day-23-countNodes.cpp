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
    
    void iterate(TreeNode* root, int &nodes) {
        if(!root)   return;
        nodes++;
        iterate(root->left, nodes);
        iterate(root->right, nodes);
    }
    
    int countNodes(TreeNode* root) {
        int nodes = 0;
        if(!root)   return nodes;
        iterate(root, nodes);
        return nodes;
    }
};
