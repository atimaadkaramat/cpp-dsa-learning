#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int arr[5] = {3, 4, 5, 6, 7};
    vector<int> vec = {3, 4, 5, 6, 7};

    sort(arr, arr + 5);
    for (auto val : arr)
    {
        cout << val << " " ;
    }
    cout << endl;


    sort(arr, arr + 5,greater<int>());
    for (auto val : arr)
    {
        cout << val << " " ;
    }
    cout << endl;

    sort(vec.begin(), vec.end());
    for (auto val : vec)
    {
        cout << val << " " ;
    }
    cout << endl;
    
    
    return 0;
}