#include <iostream>
using namespace std;

char toLowerCase(char ch){
    if (ch >= 'a' && ch <= 'z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
    
}

bool checkPalindrome(char a[], int n) {
    int s = 0;
    int e = n-1;

    while (s<=e)
    {
        if (toLowerCase(a[s]) != toLowerCase(a[e])) {
            return 0;
        }
        else{
            return 1;
        }    
    }  
}

int getLength(char name[]) {
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}

void reverse(char name[], int n) {
    int s = 0;
    int e = n-1;

    while (s<=e) {
        swap(name[s++], name[e--]);
    }
}

int main(){
    
    char name[20];
    cout << "Enter string " << endl;
    cin >> name;

    cout << "Original String " << endl;
    cout << name << endl;

    int len = getLength(name);
    cout << "Length of string :- " << len << endl;
    
    cout << "Reversed String :" << endl;
    reverse(name, len);
    cout << name << endl;

    cout << "Palindrome or Not : " << checkPalindrome(name, len);
    
    return 0;
}

//This palindrome program is case sensitive 
// if i write NooN then it will show palindrome to be true
// but if i write Noon like this then it will show show palindrome false because of it is case sensitive so we will convert all characters in lower case then will check for palindrome