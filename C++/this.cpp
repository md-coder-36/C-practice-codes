#include <iostream>
using namespace std;

class A
{
    int a;
    int b;

public:
    void setvalue(int a)
    {
        // a = a;   It is not right,gives garbage value.
        this->a = a;
    }
    // A &setvalue(int a)
    // {
    //     // a = a;   It is not right,gives garbage value.
    //     this->a = a;
    //     return *this;
    // }
    void getvalue()
    {
        cout << "The value is " << a << endl;
        cout << "The value is " << b << endl; // give garbage value.
    }
};
int main()
{

    A o1;
    o1.setvalue(36);
    // o1.setvalue(2).setvalue(3); // this case o1,setcalue(2) is object.
    o1.getvalue();

    return 0;
}

/*
you need to return a object this possible with THIS operator.
'this' may only be used inside a nonstatic member function.
*/