#include<iostream>
using namespace std;

void Transpose2Darray(int arr[][3],int rowsize,int colsize){
    
    for(int i=0;i<rowsize;i++){
        for(int j=i;j<colsize;j++){
           swap(arr[i][j],arr[j][i]);
        }
    }
   
}
int main()
{
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

    cout<<"Before Transpose: "<<endl;

    for(int i=0;i<rowsize;i++){
        for(int j=0;j<colsize;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"After Transpose: "<<endl;

    Transpose2Darray(arr,rowsize,colsize);
    for(int i=0;i<rowsize;i++){
        for(int j=0;j<colsize;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    

}