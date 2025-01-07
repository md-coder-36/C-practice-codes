#include <iostream>
using namespace std;

struct employee
{
    int eId;      // 4
    char favChar; // 1
    float salary; // 4
};

typedef struct employee ep; // stuct employee use this data type as ep;

union money
{
    int rice;     // 4
    char car;     // 1
    float pounds; // 4
};

int main()
{
    enum Meal
    {
        breakfast,
        lunch,
        dinner
    }; // enum userdefind data type.

    Meal m1 = lunch;
    cout << (m1 == 1) << endl;

    // cout << breakfast << endl;
    // cout << lunch << endl;
    // cout << dinner << endl;

    // union money m1;              union userdefind data type.
    // m1.rice = 34;
    // m1.car = 'c';
    // cout << m1.car;

    // ep harry;                    structure userdefind data type.
    // struct employee shubham;
    // struct employee rohanDas;
    // harry.eId = 1;
    // harry.favChar = 'c';
    // harry.salary = 120000000;
    // cout<<"The value is "<<harry.eId<<endl;
    // cout<<"The value is "<<harry.favChar<<endl;
    // cout<<"The value is "<<harry.salary<<endl;
    return 0;
}
