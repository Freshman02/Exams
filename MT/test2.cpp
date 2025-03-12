#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int main()
{
    unsigned int n = 0;
    cin >> n;
    vector<unsigned int> a = *new vector<unsigned int>[n];
    vector<unsigned int> b = *new vector<unsigned int>[n];
    unsigned int* c = new unsigned int[n];
    unsigned int temp = 0;
    long long res = 1;
    for (unsigned int i = 0; i < n; ++i)
    {
        cin >> temp;
        a.push_back(temp);
    }
    for (unsigned int i = 0; i < n; ++i)
    {
        cin >> temp;
        b.push_back(temp);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    //unsigned int c = *new unsigned int[n];

    for (size_t i = 0; i < n; ++i)
    {
        for (size_t j = 0; j < n; ++j)
        {
            if (a[i] <= b[j])
            {
                c[i] = n - j;
                break;
            }
           
        }
    }
    // for (size_t i = 0; i < n; ++i)
    // {
    //     cout << a[i] << " " << b[i] << " " << c[i] << endl;
    // }
    //c.reserve(n);
    for (size_t i = 0; i < n; ++i)
    {
        res *= (c[i] - (n - 1 - i));
    }

    cout << res % (1000000007) << endl;

    return 0;
}