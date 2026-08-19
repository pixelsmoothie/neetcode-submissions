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

int diff = 0;

int height(TreeNode* root){
    if(root == nullptr) return 0;

    int lh = height(root-> left);
    int rh = height(root-> right);

    diff = std::max(diff, std::abs(lh - rh));

    return std::max(lh, rh) + 1;
}
    bool isBalanced(TreeNode* root) {
        diff = 0;
        height(root);

        if(diff > 1){
            return false;
        }else{
            return true;
        }
    }
};
