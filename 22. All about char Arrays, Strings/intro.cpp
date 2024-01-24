#include <iostream>
using namespace std;

int main(){
    
    //To make a char
    char a = 'z'; //Can store single character only

    //To Store Multiple arrays --> We use strigs or character array

    //To make a character array
    char ch[10];

    //Take input
    // char name[20];
    // cout << "Enter name " << endl;
    // cin >> name;

    // name[2] = '\0';

    // cout << "Your name is ";
    // cout << name << endl;

    //How to make a string 
    string s;

    string str = "Ayush";

    //To check lngth of string 
    int len = str.length();
    cout << len << endl;

    //To externally push/ insert character in string we use push_back() function
    str.push_back('c');
    cout << "String after Pushing element : " << str << endl;

    //To last remove character
    str.pop_back();
    cout << "string after popping element : " << str << endl;

    







    return 0;
}