#include <iostream>
#include <map>
using namespace std;

int main(){
    map<string, int> m;
    
    m["tv"] = 10;
    m["laptop"] = 120;
    m["tablet"] = 30;
    m["watch"] = 23;
    m["headphone"] = 85;
    m["mouse"] = 85;
    m["car"] = 23;

    m.insert({"ipad",65});
    m.emplace("iphone",95);

    m.erase("tv");

    for(auto p : m){
        cout << p.first << " " << p.second << endl;
    }

    cout << "Count = " << m.count("laptop") << endl;
    cout << "Count = " << m["laptop"] << endl;


    if (m.find("watch") != m.end())
    {
        cout << "found\n";
    }else{
        cout << "not found\n";
    }
    
    return 0;
}