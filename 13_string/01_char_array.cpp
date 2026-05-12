#include <iostream>
using namespace std;

int main(){
    
    char arr[6] = "hello";
    
    char arr2[6] = {'h','e','l','l','o','\0'}; // same as "hello"

    // for(auto c : arr){
    //     cout << c;
    // }
    // cout << endl;

    for(int i = 0; arr[i] != '\0'; i++){
        cout << arr[i];
    }
    cout << endl;
    
    for(int i = 0; arr2[i] != '\0'; i++){
        cout << arr2[i];
    }
    cout << endl;

    char arr3[10];
    cout << "enter char array: ";
    //cin >> arr3; // words after will not be registered
    cin.getline(arr3,10,'$'); // (char array, size , should end on)

    cout << "output = " <<arr3;
    return 0;
}