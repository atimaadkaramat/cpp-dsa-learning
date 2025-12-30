#include <iostream>
#include <climits>
using namespace std;

void smallestAndLargest(int arr[],int size){

    int smallest = INT_MAX; // INT_MAX is +ve infinite
    int largest = INT_MIN;  // INT_MIN is -ve infinite

    for (int i = 0; i < size; i++)
    {
       smallest = min(arr[i], smallest); // min returns the smallest among them
       largest = max(arr[i], largest);   // max returns the largest among them
        
    }

    cout << "smallest = " << smallest << endl;
    cout << "largest = " << largest << endl;
    
}


int main(){

    int arr[] = {6,8,4,2,5};
    int size = 5;

    smallestAndLargest(arr, size);
}