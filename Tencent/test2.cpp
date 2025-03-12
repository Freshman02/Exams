#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <cmath>

int main()
{
    int n = 0;
    cin >> n;
    vector<int> a, b;
    for (int i = 0; i < n; ++i)
    {
        int ai = 0;
        int an = 0;
        cin >> ai;
        int sai = sqrt(ai) / 1;
        for ( int j = 1; j < sqrt(ai); ++j)
        {
            if (ai % j == 0 && ai != 1) 
                an += 2;
        }
        if (ai == sai * sai) ++an;
        a.push_back(an);
    }
    for (int i = 0; i < n; ++i)
    {
        int bi = 0;
        int bn = 0;
        cin >> bi;
        int sbi = sqrt(bi) / 1;
        for ( int j = 1; j < sqrt(bi); ++j)
        {
            if (bi % j == 0 && bi != 1) 
                bn += 2;
        }
        if (bi == sbi * sbi) ++bn;
        b.push_back(bn);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int res = 0;
    for (int i = 0, j = 0; i < n && j < n; ++i)
    {
        if (a[i] > b[j])
        {
            ++j; ++res;
        }
    }
    cout << res << endl;
    
    
    return 0;
}