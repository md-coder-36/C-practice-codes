/*
TEMPLETE : pass the data type as a parameter so that we don’t need to write the same code for different data types.
           Templates are expanded at compiler time. This is like macros.

1. Function Templates : We write a generIC/general function that can be used for different data types.

#include <iostream>
using namespace std;

// One function works for all data types.
// syntax : template <typename/class general_D.T_name>   in function
template <class T>    // class/typename.
T myMax(T x, T y)
{
    return (x > y) ? x : y;
}

int main()
{
    // Call myMax for int
    cout << myMax<int>(3, 7) << endl;
    // call myMax for double
    cout << myMax<double>(3.1, 7.5) << endl;
    // call myMax for char
    cout << myMax<char>('g', 'e') << endl;

    return 0;
}

2. Class Templates : Class templates like function templates, class templates are useful when a class defines
                     something that is independent of the data type.
*/
#include <iostream>
using namespace std;

template <class T>
class vector
{
public:
    T *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotProduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{
    vector<float> v1(3); // vector 1 with a float data type
    v1.arr[0] = 1.4;
    v1.arr[1] = 3.3;
    v1.arr[2] = 0.1;
    vector<float> v2(3); // vector 2 with a float data type
    v2.arr[0] = 0.1;
    v2.arr[1] = 1.90;
    v2.arr[2] = 4.1;
    float a = v1.dotProduct(v2);
    cout << a << endl;

    return 0;
}
