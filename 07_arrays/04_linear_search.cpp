#include <iostream>
#include <climits>
using namespace std;

int linearSearch(int arr[], int size, int target){
 

    for (int i = 0; i < size; i++)
    {

        if (arr[i] == target) 
        {
            return i; // FOUND
        }

    }

    return -1; // NOT FOUND
    
}


int main(){

    int arr[] = {6,8,4,2,5};
    int size = 5;
    int target = 5;

    cout << "Found at index = " << linearSearch(arr, size, target);
}