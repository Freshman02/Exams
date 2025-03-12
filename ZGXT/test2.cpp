
#include <vector>
using namespace std;
#include <iostream>

struct TreeNode {
 	int val;
	struct TreeNode *left;
	struct TreeNode *right;
 	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};


class Solution {
public:
    // /**
    //  * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
    //  *
    //  * 
    //  * @param root TreeNode类 二叉树根节点
    //  * @param k int整型 目标路径和
    //  * @return bool布尔型
    //  */
    bool has_path_sum(TreeNode* root, int k) {
        // write code here
        int sum = root->val;
        TreeNode* cur = root;
        TreeNode* head(0);
        head->left = cur;
        vector<TreeNode*> v;
        v.push_back(root);
        v.push_back(root);
        while(v.size())
        {
            if ( cur->left == nullptr && cur->right == nullptr)
            {
                v.pop_back();
                if (v.size()) cur = v[v.size()-1];
            }
            else if (cur->left)
            {
                cur = cur->left;
                sum += cur->val;
            }
        }
       
    }
};


int main()
{
    vector<int> s;
    s.push_back(2);
    cout << s.size() << endl;

    return 0;
}
