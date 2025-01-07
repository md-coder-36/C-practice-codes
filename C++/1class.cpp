#include <iostream>
using namespace std;

class Employee // clas is user defined datatype. make own datatype.
{
private: // private members only used internally made functions.
    int a, b, c;

public: // public functions or var. used outside/inside the class any where.
    int d, e;
    int *pointer = &d;
    void setData(int a1, int b1, int c1); // Declaration
    void getData()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    }
};

void Employee ::setData(int a1, int b1, int c1)
{ // class outside declaration.
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee raj; // class outside declaration.make one var.(object) it can access public var./functions.
    // harry.a = 134; -->This will throw error as a is private.
    raj.d = 34;
    raj.e = 89; // (.) operator:  direct member selection via object name.
    raj.setData(1, 2, 4);
    raj.getData();

    return 0;
}
