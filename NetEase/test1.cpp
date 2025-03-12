#include <iostream>
using namespace std;
#include <vector>

int main()
{
    vector<int> v;
    int x, M;
    int  res = 0;
    while (cin >> x)
    {
        v.push_back(x);
        cout << x << " ";
        if (cin.get() == '\n')
            break;
    }
        
    cin >> M;
    for(auto it1 = v.begin(); it1 != v.end(); ++it1)
    {
        for(auto it2 = it1 + 1; it2 != v.end(); ++it2)
        {
            if ((*it1 + *it2) <= M)
                res += 1;
        }
    }
    cout << res << endl;
    
    return 0;
}