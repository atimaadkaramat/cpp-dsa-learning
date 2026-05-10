#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> vec = {3, 4, 5, 6, 7};


    reverse(vec.begin()+1, vec.end()-1);
    for (auto val : vec)
    {
        cout << val << " " ;
    }
    cout << endl;
    
    
    return 0;
}