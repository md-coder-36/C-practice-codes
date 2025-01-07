#include <iostream>
#include <vector> // vector standard file.

using namespace std;
template <class T>
void display(vector<T> &v)
{
    for (int i = 0; i < v.size(); i++) // v.size() give a size of vector to pointed.
    {
        cout << v[i] << " ";
        // cout << v.at(i) << " ";  // print value at given index.
    }
    cout << endl;
}
int main()
{
    vector<int> vec1; // create object of vector/create a vector.   zero length integer vector.
    // insertion in vector
    int element, size;
    cout << "How many number of data you insert : " << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter an element to add to this vector : ";
        cin >> element;
        vec1.push_back(element); // insert operation
    }
    // vec1.pop_back(); // one element pop it. call 2nd time remove last to second element.
    display(vec1);

    // At one position add element
    // Insert (iterator, element to insert):This method of vectors inserts an element to the position the iterator is pointing to.
    vector<int>::iterator iter = vec1.begin();
    vec1.insert(iter, 36); // here iter is pointer point to first index of/begining of vector
    display(vec1);
    vec1.insert(iter + 2, 5, 37); // 5 : insert 5times 37 , after given pointer.
    display(vec1);

    vector<char> vec2(2); // 2-element character vector , direct give size.
    vec2.push_back('w');
    vec2.push_back('x');
    display(vec2);

    vector<char> vec3(vec2); // 2-element character vector from vec2.
    display(vec3);
    vector<int> vec4(6, 10); // 10 is insert 6th times.
    display(vec4);

    return 0;
}

/*
    WHAT IS VECTOR ??
 ->similar as array , but important disadvantage of array, it is fixed size.
 ->but vector is no any limitations ,you can increase the size of vector.
 ->vector access by object.

 ->Vectors are sequence containers representing arrays that can change their size during runtime.

*/
