#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> vec(5,1);

    for(int value : vec)
    {
        cout << value << endl;
    }

    return 0;
}