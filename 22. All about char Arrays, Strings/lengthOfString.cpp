#include <iostream>
using namespace std;

int getLength(char name[]) {
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++) {
        count++;
    }
    return count;
}

int main(){
    
    char name[20];
    cout << "Enter name " << endl;
    cin >> name;

    int len = getLength(name);
    cout << "Length :- " << len << endl;

    return 0;
}