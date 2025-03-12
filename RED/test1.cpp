#include <iostream>
using namespace std;

int main()
{
    int a, sum;
    while(cin >> a)
    {
        sum += a;
        if (cin.get() == '\n')
        {
            cout << sum << endl;
            sum = 0;
        }
    }
    return 0;
}