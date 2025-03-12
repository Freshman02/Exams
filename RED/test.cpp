#include <iostream>
using namespace std;
#include <string>
#include <vector>

int main()
{
    cout << "Hello World!" << endl;
    int x = 0;
    cin >> x;
    vector<int> v;
    v.push_back(x);
    cout << *v.begin() << endl;

    //system("pause");
    return 0;
}

