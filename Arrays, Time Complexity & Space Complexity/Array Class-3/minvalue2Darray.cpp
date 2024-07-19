#include<iostream>
#include<limits.h>
using namespace std;

int minvalue(int arr[][3],int rowsize,int colsize){

    int minans = INT_MAX;
    for(int i=0;i<rowsize;i++){
        for(int j=0;j<colsize;j++){
            if(arr[i][j]<minans){
                minans = arr[i][j];
            }
        }
    }
    return minans;
}
int main(){

    int arr[4][3];
    int rowsize = 4;
    int colsize = 3;

    //inputs
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<rowsize;i++){
        for(int j=0;j<colsize;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }

    int minAns = minvalue(arr,rowsize,colsize);

    cout<<"Minimum value in 2D array is = "<<minAns<<endl;

}