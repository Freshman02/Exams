#include <iostream>
using namespace std;

int main()
{
    int T = 0;
    cin >> T;
    for ( int i = 0; i < T; ++i)
    {
        long long n = 0;
        cin >> n;
        long a = 0;
        while ( a * (a + 1) * 2 < n) ++a;
        long long b = a * ( a + 1 ) * 2 - n;
        if ( b == 0 ) cout << a * a << endl;
        else 
        {
            long long c = b - a * (a - 1) * 2;
            if ( c < 3 ) cout << (a-1) * (a-1) << endl;
            else if (c >= 3 && c <= 3+(a-2)*2)
                cout << (a-1) * (a-1) + 1 + (c - 3)/2 << endl;
            else if ( c > 3+(a-2)*2 && c < 6+(a-2)*2 )
                cout << a * (a-1) << endl;
            else cout << a * (a -1) + 1 + (c -6-(a-2)*2 )/2 << endl;
        }
    }
    return 0;
}