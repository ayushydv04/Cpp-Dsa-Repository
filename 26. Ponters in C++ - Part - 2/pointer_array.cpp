#include <iostream>
using namespace std;

int main()
{

    int arr[10] = {23, 122, 41, 67};

    // cout << "Address of first memory block " << arr << endl;
    // cout << arr[0] << endl;
    // cout << "Address of first memory block using & " << &arr << endl;

    // cout << "4th " << *arr << endl; //will return value at
    // cout << "5th " << *arr+1 << endl; //will give ans+1

    // cout << "6th " <<*(arr+1) << endl; //shifts to the next element
    // cout << "7th " <<*(arr)+1 << endl; //will give ans+1

    // cout << "8th " <<arr[2] << endl; //will give ans+1
    // cout << "9th " << *(arr+2) << endl; //will give ans+1

    // int i = 3;
    // cout << i[arr] << endl; //tin this way also we can print an element this will return 3rd element

    // int temp[10] = {1, 2};

    // cout << sizeof(temp) << endl;
    // cout << sizeof(&temp) << endl;
    // cout << sizeof(*temp) << endl;

    // int *ptr = &temp[0];
    // cout << "size " << sizeof(ptr) << endl;
    // cout << "size " << sizeof(*ptr) << endl;
    // cout << "size " << sizeof(&ptr) << endl;

    int a[20] = {1, 2, 3, 5};
    cout << " ->" << &a[0] << endl;
    cout << &a << endl;
    cout << a << endl;

    int *p = &a[0];
    cout << p << endl;
    cout << *p << endl;
    cout << "-> " << &p << endl;

    // ERROR
    // arr = arr+1;

    int *ptr = &arr[0];
    cout << ptr << endl;
    ptr = ptr + 1;
    cout << ptr << endl;

    return 0;
}