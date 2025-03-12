#include <iostream>
using namespace std;

int main()
{
    int N = 0;
    cin >> N;
    //const int NN = N;
    // int a[N][N] = {0};
    int **a = new int*[N];
    for (int i = 0; i < N; ++i)
    {
        a[i] = new int[N];
    }
        char c;
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            cin >> c;
            if (c == '.')
                a[i][j] = 1;
                //cout << a[i][j] << endl;
            else if(c == '#')
                a[i][j] = 0;
        }       
    }
    cout << a[0][0];
    cout << a[1][1];
    return 0;
}