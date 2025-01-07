// Basic Example of pointer..
/*
#include <iostream>
using namespace std;

int main()
{

    int a = 4;     // a assign as 4.
    int *ptr = &a; // & -> gives address of a. *ptr store this value.
    cout << "The value of a is " << *(ptr) << "." << endl;

    // New keyword/operator.
    float *p = new float(40.78);
    cout << "\nThe value at address p is " << *(p) << ",By new keyword" << endl;

    int *arr = new int[3];
    arr[0] = 7;
    arr[1] = 13;
    arr[2] = 17;
    // Delete keyword/operator.
    // delete arr; // only delete some elements of arr dynamic array.
    // delete[] arr; // delete all elements of arr dynamic array.
    cout << "\nThe value of arr[0] is " << arr[0] << "." << endl;
    cout << "The value of arr[1] is " << arr[1] << "." << endl;
    cout << "The value of arr[2] is " << arr[2] << "." << endl;

    return 0;
}
*/

// New and Delete use in class objects.

#include <iostream>
using namespace std;

class Sample
{
    int value;

public:
    void getData()
    {
        cout << "The value is " << value << endl;
    }
    void setData(int a)
    {
        value = a;
    }
};

int main()
{
    Sample s1;

    // Sample *ptr = &s1;  // s1 point to athor variable.
    Sample *ptr = new Sample; // -->same as above line.

    // (*ptr).setData(36);
    ptr->setData(36); // is exactly same as above line.

    // (*ptr).getData();
    ptr->getData();

    // Array of Objects
    int n, v;
    cout << "How many values you need to add to the array :" << endl;
    cin >> n;

    Sample *ptr1 = new Sample[n]; // array of n objects.

    Sample *ptr1temp = ptr1; // ptr1temp point to ptr1 object/pinterobject/addresspointer.
                             // that means it is store previous address stored values in the array.

    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << "'s value :";
        cin >> v;
        ptr1->setData(v);
        ptr1++; // increment pointer to next pointer.mean's point to next address for sore info. as object data.
    }
    for (int i = 0; i < n; i++)
    {
        // ptr1->getData(); -->above for loop ended, then ptr1 point to last address always.
        //    so i have need to new pointer to point this privious address.

        ptr1temp->getData();
        ptr1temp++;
    }

    return 0;
}

/*

 this dynamic memory allocation use by object, so you can store one or more values/methods
 at the one address/one object stored at one address.

*/