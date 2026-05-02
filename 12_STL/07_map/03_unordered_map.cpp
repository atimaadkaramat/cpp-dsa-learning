#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map<string, int> m;
    
    m["tv"] = 10;
    m["laptop"] = 120;
    m["tablet"] = 30;
    m["watch"] = 23;
    m["headphone"] = 85;
    m["mouse"] = 85;
    m["car"] = 23;

    m.insert({"ipad",65});
    m.emplace("iphone",95);


    for(auto p : m){
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}