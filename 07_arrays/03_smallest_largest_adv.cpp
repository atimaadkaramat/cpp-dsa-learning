#include <iostream>
#include <climits>
using namespace std;

void smallestAndLargest(int arr[],int size){

    int smallest = INT_MAX; 
    int largest = INT_MIN; 

    for (int i = 0; i < size; i++)
    {
       smallest = min(arr[i], smallest);
       largest = max(arr[i], largest);
        
    }

    cout << "smallest = " << smallest << endl;
    cout << "largest = " << largest << endl;
    
}


int main(){

    int arr[] = {6,8,4,2,5};
    int size = 5;

    smallestAndLargest(arr, size);
}