#include <iostream>
using namespace std;

void reverse(char name[], int n) {
    int s = 0;
    int e = n-1;

    while (s<=e) {
        swap(name[s++], name[e--]);
    }  
}

int getLength(char name[]) {
    int count = 0;
    for (int i = 0; name[i] != '\0' ; i++) {
        count++;
    }

    return count;   
}

int main(){
    
    char name[20];
    cout << "Enter name " << endl;
    cin >> name;

    int n = getLength(name);
    cout << "Length of String :- " << n << endl;

    cout << "Original String : " << endl;
    cout << name << endl;

    reverse(name, n);
    cout << "Reversed string is : " << endl;
    cout << name << endl;

    return 0;
}