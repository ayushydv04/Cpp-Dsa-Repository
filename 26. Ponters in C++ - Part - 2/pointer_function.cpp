#include <iostream>
using namespace std;

// int getSum(int arr[], int n){
int getSum(int *arr, int n){  //can also write like this both means passing first element pointer

    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;
}   
// }

void update(int *p){
    *p = *p+1;
}

int main(){
    
    // int value = 5;
    // int *p = &value;

    // cout << "Before " << *p << endl;
    // update(p);
    // cout << "Before " << *p << endl;

    int arr[5] = {1, 2, 3, 4, 5};

    cout << "Sum " << getSum(arr, 5) << endl;

 
    return 0;
}