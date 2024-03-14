#include <iostream>
using namespace std;

int main(){
    
    int n;
    cout << "Enter num : ";
    cin >> n;
    int m = n;

    int mask = 0;

    if(n==1){
        return 1;
    }

    while (m != 0){
        mask = (mask << 1) | 1;
        m = m >> 1;
    }

    int ans = (~n) & mask;
    cout << "Complement value is : " << ans << endl;

    return 0;
}