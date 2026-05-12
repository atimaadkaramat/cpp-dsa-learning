#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(string& s){
    int st = 0, end = s.length()-1;

    while (st < end)
    {
        if(s[st++] != s[end--]) return false;
        else return true;
    }
    
}

int main(){

    string str = "racecar";

    cout << "Palindrome: " << isPalindrome(str);

    return 0;
}