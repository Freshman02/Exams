#include <iostream>
using namespace std;

int main()
{
    int m = 0, n = 0;
    int count = 0;
    while (1)
    {

        if (cin.get() == '=')
        {
            count++;
            if (count == 1)
                cin >> m;
            else
                cin >> n;
        }
        else if(count ==2)
        {
            break;
        }
        
    }
    int *A = new int[m];
    int *B = new int[n];
    int *C = new int[m + n];
    cin >> A[0];
    for (int i = 1; i < m; ++i)
    {
        if (cin.get() == ',') cin >> A[i];
    }
    cin >> B[0];
    for (int i = 1; i < n; ++i)
    {
        if (cin.get() == ',') cin >> B[i];
    }
    
    for (int i =0, j = 0, k=0; i < m || j < n; ++k)
    {
        if (j >= n ||(i < m && A[i] <= B[j]))
            {
                C[k] = A[i]; ++i;
            }
        else if (i >= m ||(j < n && A[i] > B[j]))
            {
                C[k] = B[j]; ++j;
            }
    }
    for (int i = 0; i < m + n; ++i)
        cout << C[i] << " ";
    
    cout << endl;

    return 0;
}