/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}

*/
#include <iostream>
using namespace std;

class Test
{
    int a;
    int b;

public:
    // Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(i+j)
    // Test(int i, int j) : a(i), b(2*j)
    // Test(int i, int j) : a(i), b(a + j)
    // Test(int i, int j) : b(j), a(i+j) // not correct,first declare a and  than b. so b get garbage value.

    Test(int i, int j) : a(i), b(j) // initialization list.
    {
        // similar as a = i ;  (a(i))
        // similar as b = j ;  (a(j))

        cout << "Constructor executed" << endl;
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
    }
};

int main()
{
    Test t(4, 6);

    return 0;
}
