#include<iostream>
using namespace std;

void fun(int arr[],int n){
    cout<<"Array Elements are:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int main()
{
    // //static memory allocation of array
    // int arr[5] = {1,2,3,4,5};
    // fun(arr,5);

    //dynamic
    int n;
    cin>>n;
    int *arr = new int[n]; // similar to arr[n]

    //taking n elements input and inserting in array
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        arr[i]=data;
    }

    //try to insert more items
    for(int i=0;i<10;i++){
        arr[n+i] = 50;
    }
    fun(arr,n);
}