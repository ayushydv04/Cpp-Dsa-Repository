#include <iostream>
using namespace std;

int main(){
    //Creating 2D array
    int arr[3][3];

    int arr1[3][3] = {{1,11,111}, {2, 22, 222}, {3, 33, 333}};

    // Taking input in 2D array --> row wise
    cout << "Enter the elements " <<  endl;
    for (int row = 0; row < 3; row++){
        for (int col = 0; col < 3; col++){
            cin >> arr[row][col];
        }
    }
    
    // cout << "Enter the elements " <<  endl;
    // Taking input in 2D array --> column wise
    // for (int col = 0; col < 3; col++)
    // {
    //     for (int row = 0; row < 3; row++)
    //     {
    //         cin >> arr[row][col];
    //     }
        
    // }
    
    

    // Printing Output in 2d array
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            cout << arr1[row][col] << " ";
        } 
        cout << endl;   
    }
    
    

    return 0;
}