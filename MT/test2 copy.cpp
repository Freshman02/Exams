#include <iostream>
using namespace std;


int main()
{
    int n = 0;
    cin >> n;
    int* a = new int[n];
    int* b = new int[n];
    int* c = new int[n];
    long long res = 1;
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    for (int i = 0; i < n; ++i)
        cin >> b[i];
       

    for (int i = 0; i < n; ++i)
    {
        int temp = 0;
        for (int j = 0; j < n; ++j)
        {
            if (a[i] <= b[j])
            {
                temp += 1;
            }
           
        }
        c[i] = temp;
    }
    // for (size_t i = 0; i < n; ++i)
    // {
    //     cout << a[i] << " " << b[i] << " " << c[i] << endl;
    // }
    //c.reserve(n);
    for (int i = n -1 ; i > 0; --i)
    {
        res *= (c[i] - (n - 1 - i));
    }

    cout << res % (1000000007) << endl;

    return 0;
}