#include <iostream>
using namespace std;

int main()
{
    int ch[100];
    int x = 0, n=0;
    while(cin >> x) 
    {
        ch[n++] = x;
        if (cin.get() == '\n') break;
    }
    // cout << n << endl;
    //int can[n];
    int *can = new int[n];
    for(int i = 0; i < n; ++i) can[i] = 1;
    for (int i = 0; i < n-1; ++i)
    {
        if(ch[i] < ch[i+1])
        {
            can[i+1] = can[i] + 1;
        }
    }
    
    int sum=0;
    for(int i = 0; i < n; ++i) sum+=can[i];
    cout << sum << endl;
    delete[] can;
    can = nullptr;
    
    return 0;
}