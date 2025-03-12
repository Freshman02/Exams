#include <iostream>
using namespace std;


int main()
{
    int n = 3;
    int *a = new int[n]{1,2};

    for (int i = 0; i < n; ++i)
        cout << a[i] << " ";

    return 0;
} 





