#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <algorithm>

class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 返回Sn的第k位字符
     * @param n int整型 Sn的n
     * @param k int整型 需要返回的字符下标位
     * @return char字符型
     */
    string& invert(string& s)
    {
        for (size_t i = 0; i < s.size(); ++i)
            s[i] = char(97+122-s[i]);
        return s;
    }
    char findKthBit(int n, int k) {
        // write code here
        //string L;
        //for(int i = 0; i < 26; ++i) L[i] = char(97+i);
        vector<string> S;
        S.push_back("a");
        cout << S[0];
        //system("pause");
        for (int i = 1; i < n; ++i)
        {
            S.push_back(S[i-1] + char(97+i) + invert(S[i-1]));
        }
        cout << S[n] << endl;
        return S[n][k];
    }
};

int main()
{
    // Solution so;
    // string s = "abc";
    // char ss = so.findKthBit(3, 1);
    // cout << ss << endl;
    string s = "abc";

    return 0;
}

