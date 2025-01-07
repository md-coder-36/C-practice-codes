#include <iostream>
using namespace std;

class Base
{

    int data1; // private by default and is not inheritable.
    // void setData();   <--this method makes private.how use in derived class ??
public:
    int data2;
    void setData(); // initialize private member,and this function is public.
                    // So, this function can use by derived class.
    int getData1();
    int getData2();
};

void Base ::setData(void)
{
    data1 = 10;
    data2 = 20;
}
int Base::getData1()
{
    return data1;
}
int Base::getData2()
{
    return data2;
}
class Derived : public Base // sapose public replace with private,code run successfully.
{                           // Class is being derived publically
    int data3;

public:
    void process();
    void display();
};

void Derived ::process()
{
    // setData1(); // you have call inside the derived class, use a private member of base class.
    data3 = data2 * getData1();
}

void Derived ::display()
{
    cout << "Value of data 1 is " << getData1() << endl;
    cout << "Value of data 2 is " << data2 << endl;
    cout << "Value of data 3 is " << data3 << endl;
}
int main()
{
    Derived der;
    der.setData(); // you have not called directly,because this function declared in private
                   // of base class , so this write inside the class. // check all comments of codes.
    der.process();
    der.display();

    return 0;
}
/*
                 Public Derivation  Private Derivation  Protected Derivation
Private members     Not Inherited      Not Inherited      Not Inherited
Public members      Public	           Private            Protected
Protected members   Protected          Private            Protected

Protected members : this access modifier is not accessible outside the base/derived classes.
                    but this member/functions directly use by the derived classes, and own as only private/protected
                    in the derived classes.
*/