#include <iostream>
using namespace std;

int main(){
    
    int n;
    cout << "Enter number to be reversed : ";
    cin>>n;

    int ans = 0;

    while (n != 0){
        int digit = n % 10;
        ans = (ans * 10) + digit;
        n/=10;

    }
    
    cout << "Reversed number is : " << ans << endl;

    return 0;
}
