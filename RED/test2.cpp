#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <algorithm>

using namespace std;
int main()
{
    vector<string> str;
    string s;
    
    while(cin>>s)
    {
        stringstream ss(s);
        cout << 2 << endl;
        string t;
        cout << s << endl;
        while(getline(ss, t, ','))
            str.push_back(t);

        sort(str.begin(),str.end());

        for(size_t i = 0; i < str.size() - 1; i++)
        {
            cout << str[i] << ',';          
        }

        cout<<str[str.size()-1]<<endl;
        str.clear();
    }
}