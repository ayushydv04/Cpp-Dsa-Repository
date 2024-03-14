#include <iostream>
#include<math.h>
using namespace std;

int main(){
    
    int n;
    cout << "Enter number to be checked : ";
    cin >> n;
    int check = 0;
    for(int i = 0; i <= 32; i++){
        int ans = pow(2, i);
        if(ans == n){
            check = 1;
        }
    }

    if(check == 1){
        cout << "True" << endl;
    }
    else{
        cout << "False" << endl;
    }

    return 0;
}