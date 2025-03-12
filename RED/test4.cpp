#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int main()
{
    int N, white=0, black=0, empty=0, len=0;
    vector<int> we, be;
    //we.resize(N);
    //be.resize(N);
    cin >> N;
    for (int i = 0; i < N; ++i)
    {
        int x, y, z;
        cin >> x;
        if(x == 1) white+=1;
        else if(x == 2) black+=1;
        else if(x == 0)
        {
            empty+=1;
            //cin >> we[len] >> be[len];
            //int y=0, z=0;
            cin >> y >> z;
            we.push_back(y);
            be.push_back(z);
            ++len;
        }
    }
    
    int d = (white-black);//白黑水晶数量差
    int white_n, black_n;//需要放置的白黑水晶数量
    if (d>0) white_n = (d + len) / 2;
    else white_n = (len - d) / 2;
    black_n = len - white_n;
    sort(we.begin(), we.end());
    sort(be.begin(), be.end());
    int t=0, w=0, b=0, res=0;
    while(t<len)
    {
        ++t;
        if( we[w] <= be[b])
        {
            if (w < white_n) {++w; res+=we[w];}
            else {++b; res += be[b];}
        }
        else if (be[b] < we[w])
        {
            if (b < black_n) {++b; res += be[b];}
            else {++w; res += we[w];}
        }
    }
    cout << res << endl;
    
    
    return 0;
}