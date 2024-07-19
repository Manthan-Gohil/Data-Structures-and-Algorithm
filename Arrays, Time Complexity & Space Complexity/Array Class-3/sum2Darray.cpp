#include<iostream>
using namespace std;

void rowwiseSum(int arr[][3],int rowsize,int colsize){

    for(int i=0;i<rowsize;i++){
        int sum = 0;
        for(int j=0;j<colsize;j++){
            sum = sum + arr[i][j];
        }
        cout<<"Sum of row "<<i+1<<" = "<<sum<<endl;
    }
}

void colwiseSum(int arr[][3],int rowsize,int colsize){

    for(int j=0;j<colsize;j++){
        int sum = 0;
        for(int i=0;i<rowsize;i++){
            sum = sum + arr[i][j];
        }
        cout<<"Sum of col "<<j+1<<" = "<<sum<<endl;
    }
}

void diagonalSum(int arr[][3],int rowsize){
    int sum = 0;
    for(int i=0;i<rowsize;i++){
        sum = sum + arr[i][i];
    }
    cout<<"Sum of diagonal elements = "<<sum<<endl;
}

void inverteddiagonalSum(int arr[][3],int rowsize,int colsize){
    int sum = 0;
    for(int i=0;i<rowsize;i++){
        for(int j=0;j<colsize;j++){
            if(j==rowsize-1-i){
                sum = sum + arr[i][j];
            }
        }
    }
    cout<<"Sum of inverted diagonal = "<<sum<<endl;
}
int main(){

    int arr[3][3];

    int rowsize = 3;
    int colsize = 3;

    //input
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<rowsize;i++){
        for(int j=0;j<colsize;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }

    //rowwise sum
    rowwiseSum(arr,rowsize,colsize);
    cout<<endl;
    //column wise sum
    colwiseSum(arr,rowsize,colsize);
    cout<<endl;
    //diagonal sum
    diagonalSum(arr,rowsize);
    cout<<endl;
    //inverted diagonal sum
    inverteddiagonalSum(arr,rowsize,colsize);
}