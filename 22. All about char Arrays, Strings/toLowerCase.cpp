#include <iostream>
using namespace std;

char toLowerCase(char ch){
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
    
}

int main(){
    
    cout << "CHARACTER is " << toLowerCase('c') << endl;
    cout << "CHARACTER is " << toLowerCase('D') << endl;
     

    return 0;
}