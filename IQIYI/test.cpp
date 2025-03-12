#include <iostream>
using namespace std;
#include <vector>

void test1()
{
    vector<int> v;
    int get;
    while (cin >> get)
    {
        v.push_back(get);
        if (cin.get() == '\n')
            break;
    }
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        cout << *it << endl;
    }
}

void test2()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << a << b << c << endl;
}

int main()
{
    test1();
    //test2();
    return 0;
}