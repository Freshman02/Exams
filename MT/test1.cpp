#include <iostream>
using namespace std;
#include <set>

int main()
{
    int n = 0;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    int res = 0;
    set<int> b;
    b.insert(a[0]);
    for (int i = 1; i < n; ++i)
    {
        b.insert(a[i]);
        int num = 0;
        for (auto it = b.begin(); it != b.end(); ++it, ++num)
        {
            if (a[i] == *it)
                break;
        }
        res += num;
    }

    cout << res << endl;

    return 0;
}