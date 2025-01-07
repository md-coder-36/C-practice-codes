#include <iostream>
using namespace std;

/*
class templetes with multiple parameters.
template<class T1, class T2>
class nameOfClass{
    //body
}
*/

template <class T1 = int, class T2 = float> //-> default templete

class myClass
{
public:
    T1 data1;
    T2 data2;
    myClass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << endl
             << this->data1 << "\n"
             << this->data2;
    }
};
int main()
{
    myClass<> obj1(36, 1.231); //->In default templete , write empty breakets, templete takes by dafault (int,float).
    obj1.display();

    myClass<int, char> obj2(37, 'M'); // in defaut templete , you need to change parmeter, you can do it!!.
    obj2.display();
}
