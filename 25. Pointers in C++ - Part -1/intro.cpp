#include <iostream>
using namespace std;

int main(){
    
    int num = 5;
    cout << num << endl;;
    cout << "Address of num " << &num << endl;

    // To store address we use pointer

    // Making a pointer
    int *ptr = &num; //Pointer declaration and initialization

    // int *ptr; //bad practice

    // inseted of this we can do this
    // Initialise null pointer then later if want give address
    int *nup = 0;

    // Pointer can be of other data types also like int

    // Char ponter
    char ch = 'a';
    char *c = &ch;

    // double pointer
    double d = 4.33;
    double *db = &d;


    // Accessing Poointer
     
    cout << "value of num " << num << endl;

    // To print value in a pointer
    cout << "Value in ptr pointer " << *ptr << endl;

    // To print address of num
    cout << "Address of num " << &num << endl;

    // Gives address of num which is stored in ptr
    cout << "Address of num stored in pointer " << ptr << endl;

    // To check size of pointer
    cout << "Size of num " << sizeof(num) << endl;
    cout << "Size of ptr " << sizeof(ptr) << endl;

    // To make a null pointer
    int *nullp = 0;
    
    // assigning value to null pointer after
    int i = 5;
    int *p = 0;
    p = &i;

    cout << p << endl;
    cout << *p << endl;




    return 0;
}