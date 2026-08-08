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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root) {
            return {};
        }
        vector<vector<int>> ret;
        queue<TreeNode*> que;
        TreeNode* node = root;
        que.push(node);
        while(!que.empty()) {
            int size = que.size();
            vector<int> level;
            for(int i = 0; i < size; i++) {
                TreeNode *tempNode = que.front();
                que.pop();
                level.push_back(tempNode->val);
                if(tempNode->left != nullptr) {
                    que.push(tempNode->left);
                }
                if(tempNode->right != nullptr) {
                    que.push(tempNode->right);
                }
            }
            ret.push_back(level);
        }
        return ret;
    }
};
