#include <iostream>
using namespace std;
#include <cmath>

int main()
{
    int N, a1, b1, a2, b2;
    cin >> N >> a1 >> b1 >> a2 >> b2;
    int c1;
    long long sum = 0;
    for ( int c = N; c >= 0; --c)
    {
        long a = c * a1 + (N-c) * a2;
        long b = c * b1 + (N-c) * b2;
        long long temp = sqrt(a * a + b * b);
        if (sum <= temp)
            {
                sum = temp;
                c1 = c;
            }
    }
    cout << c1 << " " << N - c1 << endl;
    return 0;
}