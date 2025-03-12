#include <iostream>
#include <vector>
#include <numeric>
#include <limits>
using namespace std;

using namespace std;
class Solution {
public:
    /* Write Code Here */
    vector < int > circlePrint(vector < vector < int > > input) {
        int _rows = input.size();
        int _cols = input[0].size();
        int rows = input.size();
        int cols = input[0].size();
        vector<int> res;
        res.push_back(input[0][0]);
        int x = 0, y = 0;
        int count = 1;
        while ((rows > 0) && (cols > 0)) 
        {
            if (count % 4 == 1) 
            {
                while (++y < (_cols-(count/4))) 
                    res.push_back(input[x][y]);
                --y;
                rows -= 1;
            }
            else if (count % 4 == 2) 
            {
                while (++x < (_rows-(count/4))) 
                    res.push_back(input[x][y]);
                --x;
                cols -= 1;
            }
            else if (count % 4 == 3) 
            {
                while (--y > (count/4)-1) 
                    res.push_back(input[x][y]);
                ++y;
                rows -= 1;
            }
            else 
            {
                while (--x > (count/4)-1) 
                    res.push_back(input[x][y]);
                ++x;
                cols -= 1;
            }
            count += 1;
        }

        return res;
    }
};

int main() 
{
    vector < int > res;

    int _input_rows = 0;
    int _input_cols = 0;
    cin >> _input_rows >> _input_cols;
    vector< vector < int > > _input(_input_rows);
    for (int _input_i = 0; _input_i < _input_rows; _input_i++) {
        for (int _input_j = 0; _input_j < _input_cols; _input_j++) {
            int _input_tmp;
            cin >> _input_tmp;
            _input[_input_i].push_back(_input_tmp);
        }
    }
    //Solution s = new Solution();
    Solution s;
    res = s.circlePrint(_input);
    for (size_t res_i = 0; res_i < res.size(); res_i++) {
        cout << res[res_i] << " ";
    }
    cout << endl;

    return 0;
}