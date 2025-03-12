#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int main()
{
    vector<int> v;
    int x = 0;
    cin >> x;
    v.push_back(x);
    while(cin.get()== ',')
    {
        cin >> x;
        v.push_back(x);
    }

    // for (int i = 0; i < v.size(); ++i)
    //     cout << v[i];
    // cout << v.size() << endl;
    sort(v.begin(), v.end());
    int res = v.size();
    for (size_t i = 0; i < v.size(); ++i)
    {
        if(v[i] != i)
        {
            res = i;
            break;
        }
    }
    cout << res << endl;

    return 0;
}