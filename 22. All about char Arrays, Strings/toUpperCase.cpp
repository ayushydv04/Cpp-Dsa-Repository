#include <iostream>
using namespace std;

char toUpperCase(char ch){
    if (ch >= 'A' && ch <= 'Z')
    {
        return ch;
    }
    else{
        char newCh = ch - 'a' + 'A';
        return newCh;  
    }
    
}

int main(){
    
    cout << "Upper Case :- " << toUpperCase('a') << endl;
    cout << "Upper Case :- " << toUpperCase('G') << endl;

    return 0;
}