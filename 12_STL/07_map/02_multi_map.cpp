#include <iostream>
#include <map>
using namespace std;

int main(){
    multimap<string, int> m;
    
    m.emplace("iphone",95);
    m.emplace("iphone",95);
    m.emplace("iphone",95);
    m.emplace("iphone",95);

    m.erase(m.find("iphone"));

    for(auto p : m){
        cout << p.first << " " << p.second << endl;
    }
    
    return 0;
}