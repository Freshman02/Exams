#include <iostream>
using namespace std;
#include <string>
#include <algorithm>

int main()
{
    int n=0, l=0, r=0;
    cin >> n >> l >> r;
    int s = 0;
    string q;
    while(1<n)
    {
        s = n & 1;
        q += to_string(s);
        n = n >> 2;
        q += to_string(n); // 需要将n转化为2进制表示再加入字符串
    }
    string p = q;
    reverse(p.begin(), p.end());
    p.pop_back();
    q = p + q;
    int res = 0;
    for (int i = l - 1; i < r; i++)
    {
        if (q[i] == '1')
            ++res;
    }
    cout << res << endl;
    
    return 0;
}