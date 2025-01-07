#include <iostream>
using namespace std;
class BaseClass
{
public:
    int var_base;
    // void display()
    // {
    //     cout << "Displaying Base class variable var_base " << var_base << endl;
    // }
    virtual void display() // this not point to the base class pointer.
    {
        cout << "Displaying Base class variable var_base " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void display()
    {
        cout << "\nDisplaying Base class variable var_base " << var_base << endl;
        cout << "Displaying Derived class variable var_derived " << var_derived << endl;
    }
};
int main()
{
    BaseClass *base_class_pointer; // base class pointer
    BaseClass obj_base;            // base class object
    DerivedClass obj_derived;      //  derived class object

    base_class_pointer = &obj_derived; // Pointing base class pointer to derived class

    // base_class_pointer->var_derived= 134; // Will throw an error,don't point to derived class members.
    // base_class_pointer->display();        // don't point to derived class members

    base_class_pointer->var_base = 34; // point to base class variable
    base_class_pointer->display();     // point to base class function

    DerivedClass *derived_class_pointer;     // base class pointer
    derived_class_pointer = &obj_derived;    // derived class pointer point derived class object .
    derived_class_pointer->var_base = 35;    // point to base class variable
    derived_class_pointer->var_derived = 70; // point to derived class variable
    derived_class_pointer->display();        // point to base class function.

    return 0;
}

/*
->Base class pointer only points to the base class members ,
  before refrence to any own class object.
  but, derived class pointer points to the base class and derived class both members ,
  before refrence to any own class object.

->Mean's you have make refrence to own class object.

**Virtual function **

->A virtual function is a member function which is declared within a base class and is re-defined (overridden)
  by a derived class. When you refer to a derived class object using a pointer or a reference to the base class,
  you can call a virtual function for that object and execute the derived class’s version of the function.

->virtual function is a member function in the base class that you redefine in a derived class.
It is declared using the virtual keyword.

->It is used to tell the compiler to perform dynamic linkage or late binding on the function.

** WHAT IS BINDING **

->Binding refers to the process of converting identifiers (such as variable and performance names) into addresses.
  Binding is done for each variable and functions.
  For functions, it means that matching the call with the right function definition by the compiler.
  It takes place either at compile time or at runtime.

1. Early binding :Early Binding (compile-time time polymorphism) As the name indicates,
                  compiler (or linker) directly associate an address to the function call.
                  It replaces the call with a machine language instruction that tells the mainframe to leap
                  to the address of the function.

// CPP Program to illustrate early binding.
// Any normal function call (without virtual)
// is binded early. Here we have taken base
// and derived class example so that readers
// can easily compare and see difference in
// outputs.
#include<iostream>
using namespace std;

class Base
{
public:
    void show() { cout<<" In Base \n"; }
};
class Derived: public Base
{
public:
    void show() { cout<<"In Derived \n"; }
};
int main(void)
{
    Base *bp = new Derived;

    // The function call decided at
    // compile time (compiler sees type
    // of pointer and calls base class
    // function.

    bp->show();

    return 0;
}

OUTPUT : In Base


2. Late binding : Late Binding : (Run time polymorphism) In this, the compiler adds code that identifies the kind of object
                                 at runtime then matches the call with the right function definition (Refer this for details).
                                 This can be achieved by declaring a virtual function.
// CPP Program to illustrate late binding
#include<iostream>
using namespace std;

class Base
{
public:
    virtual void show() { cout<<" In Base \n"; }
};
class Derived: public Base
{
public:
    void show() { cout<<"In Derived \n"; }
};
int main(void)
{
    Base *bp = new Derived;
    bp->show();  // RUN-TIME POLYMORPHISM
    return 0;
}

OUTPUT : In Derived
*/
