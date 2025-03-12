#include <iostream>
using namespace std;
#include <vector>
#include <cmath>

int main()
{
    vector<int> v;
    int get;
    while (cin >> get)
    {
        v.push_back(get);
    }
        
    for (size_t i = 1; i < v.size() - 1; ++i)
        v[i] = v[i + 1] - v[i];
    v.pop_back();

    vector<int> v2;
    int cur = v[0];
    for (size_t i = 0; i < v.size() - 1; ++i)
    {
        if (v[i] * v[i+1] >= 0)
            cur += v[i + 1];
        else
        {
            v2.push_back(abs(cur));
            cur = v[i + 1];
        }
    }
    v2.push_back(v[v.size() - 1]);

    int res = v2[0];
    for (size_t i = 0; i < v2.size() - 1; ++i)
    {
        if (v2[i] < v2[i+1])
            res = v2[i + 1];
    }
    cout << res << endl;

    return 0;
}