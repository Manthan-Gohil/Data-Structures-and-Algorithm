#include<iostream>
using namespace std;

bool search2Darray(int arr[][4],int rowsize,int colsize,int target){
    //linear search
    for(int i=0;i<rowsize;i++){
        for(int j=0;j<colsize;j++){
            if(arr[i][j]==target){
                return true;
            }
        }
    }
    return false;
}
int main(){

    int arr[3][4];
    int rowsize = 3;
    int colsize = 4;
    //input
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<rowsize;i++){
        for(int j=0;j<colsize;j++){
            cin>>arr[i][j];
        }
    }

    bool ans = search2Darray(arr,rowsize,colsize,45);

    cout<<"Answer is = "<<ans;
}