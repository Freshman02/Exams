#include <iostream>
using namespace std;
#include <vector>


 struct ListNode 
 {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
 };
 

class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     * 
     * @param a ListNode类vector 指向这些数链的开头
     * @return ListNode类
     */
    ListNode* solve(vector<ListNode*>& a) {
        // write code here
        ListNode* res = new ListNode(0);
        ListNode* mov = res;
        int N = a.size();
        int count = N;
        while(count)
        {
            for (int i = 0; i < count; ++i)
            {
                if (a[i] != nullptr)
                {
                    mov->next = new ListNode(a[i]->val);
                    a[i] = a[i]->next;
                    mov = mov->next;
                }
                else 
                {
                    --count;
                    for (int j = i; j < count; ++j)
                        a[j] = a[j+1];
                    --i;
                }
            }
        }
        return res->next;
    }
};