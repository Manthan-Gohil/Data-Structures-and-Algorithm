#include<iostream>
using namespace std;

int main(){

    // //declare 2D array
    // int arr[4][3];

    //initialisation
    // int arr[3][2] = {
    //                 {10,20},
    //                 {30,40},
    //                 {50,60}
    //                 };

    // int arr[3][2] = {10,20,30,40,50,60};
    int arr[3][2] = {10,20};


    // cout<<arr[2][1]<<endl;

    //traverse the entire array
    int rowsize = 3;                
    int colsize = 2;
    for(int rowindex=0;rowindex<rowsize;rowindex++){
        for(int colindex=0;colindex<colsize;colindex++){
            cout<<arr[rowindex][colindex]<<" ";
        }
        cout<<endl;
    }               
}