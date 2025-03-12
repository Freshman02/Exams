#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int main()
{
    int T = 0;
    cin >> T;
    for (int i = 0; i < T; ++i)
    {
        int n = 0, m = 0, k = 0;
        cin >> n >> m >> k;
        vector<int> a(n);
        vector<int> b(m);
        //int* a = new int[n];
        //int* b = new int[m];
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        for (int i = 0; i < m; ++i)
            cin >> b[i];

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        int ans = 0;
        for (int i = 0, j = 0; (i < n && j < m); )
        {
            if (a[i] - b[j] <= k && a[i] - b[j] >= -k)
            {
                ans += 1;
                ++i; ++j;
            }
            else if (a[i] - b[j] > k) ++j;
            else ++i;
            
        }
        cout << ans << endl;
    }
    return 0;
}