#include<iostream>
using namespace std;

int main(){

    // //declare 2D array
    // int arr[4][3];

    // //initialisation
    // int arr[3][3] = {
    //                 {10,20,100},
    //                 {30,40,200},
    //                 {50,60,300}
    //                 };

    // int arr[3][2] = {10,20,30,40,50,60};
    // int arr[3][2] = {10,20};


    // cout<<arr[2][1]<<endl;

    //traverse the entire array
    // int rowsize = 3;                
    // int colsize = 3;

    // //row wise
    // for(int rowindex=0;rowindex<rowsize;rowindex++){
    //     for(int colindex=0;colindex<colsize;colindex++){
    //         cout<<arr[rowindex][colindex]<<" ";
    //     }
    //     cout<<endl;
    // }       

    // //column wise
    // for(int c=0;c<colsize;c++){
    //     for(int r=0;r<rowsize;r++){
    //         cout<<arr[r][c]<<" ";
    //     }
    //     cout<<endl;
    // }

    // //diagonal matrix -> square matrix
    // for(int i=0;i<rowsize;i++){
    //     cout<<arr[i][i]<<" ";
    // }

    //inverted diagonal print
    // for(int i=0;i<rowsize;i++){
    //     for(int j=0;j<colsize;j++){
    //         if(j==rowsize-1-i){
    //             cout<<arr[i][j]<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

    int arr[2][3];
    int rowsize = 2;
    int colsize = 3;

    //taking inputs -> row wise
    for(int i=0;i<rowsize;i++){
        for(int j=0;j<colsize;j++){
            cout<<"Enter the value of ("<<i<<" ,"<<j<<") : ";
            cin>>arr[i][j];
        }
        cout<<endl;
    }

    cout<<"Printing 2D array: "<<endl;
    //row wise
    for(int rowindex=0;rowindex<rowsize;rowindex++){
        for(int colindex=0;colindex<colsize;colindex++){
            cout<<arr[rowindex][colindex]<<" ";
        }
        cout<<endl;
    }     

}