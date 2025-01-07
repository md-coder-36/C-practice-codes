// map <data_type_of_key,   data_type_of_value>  variable_name; map syntax.

#include <iostream>
#include <map>
#include <string>

using namespace std;

void display(map<string, int> &Map)
{
    map<string, int>::iterator iter; // create pointer to point Map element at table wise.
    for (iter = Map.begin(); iter != Map.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << "\n";
    }
    cout << endl;
}

int main()
{

    // Map is an associative array
    map<string, int> marksMap; // map implementation.
    marksMap["Meet"] = 90;
    marksMap["Harsh"] = 91;
    marksMap["Aditya"] = 92;

    display(marksMap);

    // insertion operation
    // marksMap.insert({pair_1,pair_2......pair_n});
    marksMap.insert({{"Ram", 89}, {"lakhan", 90}});
    display(marksMap);

    cout << "The size is : " << marksMap.size() << endl;

    return 0;
}
