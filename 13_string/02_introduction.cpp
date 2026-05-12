#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){

    string str = "hello ";
    string str2 = "world";

    string str3 = str + str2; //concatenation

    str = "abcedskadfkljsdf"; // updating a string is possible

    cout << "str3 = " << str3 << endl;
    cout << "str = " << str << endl;
    
    reverse(str3.begin(),str3.end()); // reversing a string 
    cout << "rev str3 = " << str3 << endl; 
    return 0;
}