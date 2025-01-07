#include <iostream>
using namespace std;

// Base Class
class Employee
{
  // int id;
public:
  int id;
  float salary;
  Employee(int inpId)
  {
    id = inpId;
    salary = 34.0;
  }
  Employee() {}
};

// Creating a Programmer class derived from Employee Base class
class Programmer : public Employee
{
public:
  int languageCode;
  Programmer(int inpId)
  {
    id = inpId; // supose id is private member of b.class,so you can't modify it.
    languageCode = 9;
  }
  void getData()
  {
    cout << id << endl;
  }
};
int main()
{
  Employee harry(1), rohan(2);
  cout << harry.salary << endl;
  cout << rohan.salary << endl;
  Programmer skillF(10);
  cout << skillF.languageCode << endl;
  cout << skillF.id << endl;
  skillF.getData();
  return 0;
}

/* Derived class syntax :

class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
Note:

1. Default visibility mode is private.
2. Public Visibility Mode: Public members of the base class becomes Public members of the derived class
3. Private Visibility Mode: Public members of the base class become private members of the derived class
   Private members are never inherited of base class.

* What is inharitance :

->The capability of a class to derive properties and characteristics from another class is called Inheritance.
->new classes are created from the existing classes.
  The new class created is called derived class/child class/subclass and the existing class is known as the base class/parent class/superclass.
  The derived class now is said to be inherited from the base class.
->the derived class inherits all the properties of the base class,
  without changing the properties of base class and may add new features to its own.

->Single Inheritance : derived class is inherited with only one base class.
->Multiple Inheritance : one derived class is inherited with more than one base class.
->Hierarchical Inheritance : several derived classes are inherited from a single base class
->Multilevel Inheritance : one derived class is inherited from another derived class.
->Hybrid Inheritance : combination of multiple inheritance and multilevel inheritance.
                       In hybrid inheritance, a class is derived from two classes as in multiple inheritances.
                       However, one of the parent classes is not a base class.
->

*/
