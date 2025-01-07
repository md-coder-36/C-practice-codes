#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void setDataBySum(complex o1, complex o2)
    {                    // pass obj value as formal parameter.
        a = o1.a + o2.a; // use stored value(a,b) inside objects c1, c2.
        b = o1.b + o2.b; // access a data of object by var_name.obj_name
    }

    void printNumber()
    {
        static int i = 0;
        cout << "Your " << (i + 1) << "'s complex number is : " << a << " + " << b << "i" << endl;
        i++;
    }
};

int main()
{
    complex c1, c2, c3;
    c1.setData(1, 2);
    c1.printNumber();

    c2.setData(3, 4);
    c2.printNumber();

    cout << "After sum process  : " << endl;
    c3.setDataBySum(c1, c2);
    c3.printNumber();
    return 0;
}

// c1.a = 1;
// c1.b = 2;

// c2.a = 4;
// c2.b = 3;

// in setDataSum(complex c1, complex c2) // pass object as argument

//     c3.a = c1.a + c2.b;
//     c3.b = c1.a + c2.b;