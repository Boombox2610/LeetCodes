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

void helperTraverse(TreeNode *root, string *preOrder){
    if(root == nullptr){
        (*preOrder) += 'n';
        return;
    };
    (*preOrder) += to_string(root->val);
    helperTraverse(root->left, preOrder);
    helperTraverse(root->right, preOrder);
}

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        string pOrder;
        helperTraverse(p, &pOrder);
        string qOrder;
        helperTraverse(q, &qOrder);
        return (pOrder == qOrder)? true : false;
    }
};
