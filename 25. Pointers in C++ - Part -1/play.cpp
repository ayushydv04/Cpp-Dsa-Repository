#include <iostream>
using namespace std;

int main(){
    
    int num = 5;
    // int a = num;
    int *p = &num;

    // incrementing when made a copy
    // cout << "Value of a before incrementing " << a << endl; 
    // num = num +1;
    // cout << "Value of a after incrementing " << a << endl; 

    // using pointer
    cout << "Value of num before incrementing " << num << endl; 
    // (*p)++;
    cout << "Value of num after incrementing " << num << endl; 

    // Copying a pointer to new pointer 
    int *q = p;
    cout << p << " -- " << q << endl;
    cout << *p << " -- " << *q << endl;

    // important concept
    int i = 3;
    int *t = &i;
    // *t++; // --> increments by 2
    // (*t)++; // --> increments by 1
    // cout << "*t - " << *t << endl;

    // Shiftes to other memory block add 4 byes of integer
    // cout << "address of t before " << t << endl;  
    // t = t + 1;
    // cout << "address of t after " << t << endl;  

    *t = *t + 1;
    cout << "val " << *t << endl;




    return 0;
}