#include <iostream>
#include <vector>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,5};
    int target = 9, size = 5;
    
    vector<int> ans;

    for (int  i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if(arr[i] + arr[j] == target){
                ans.push_back(arr[i]);
                ans.push_back(arr[j]);
            }
        }
        
    }
    
    if(ans.size() != 0){
        for(int val : ans) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}