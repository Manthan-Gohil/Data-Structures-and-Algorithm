#include<iostream>
using namespace std;

void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void solve1(int arr[],int n){
    for(int i=0;i<n;i++){
        arr[i] = arr[i]*10;
    }
}
int main()
{
    //creation
    // int arr[10];

    //error
    // int brr[];

    // int crr[] = {10,20,30,40};
    // int drr[4] = {22};

    // cout<<drr[1]<<endl;
    // cout<<crr[2]<<endl;

    // int arr[4];
    // fill(arr,arr+4,23);
    // cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<" ";

    //input
    // int arr[5];
    // for(int i=0;i<5;i++){
    //     cout<<"Enter the value for index: "<<i<<endl;
    //     cin>>arr[i];
    // }
    // //print
    // for(int i=0;i<5;i++){
    //     cout<<i[arr]<<" ";
    // }

    //array with function
    int arr[] = {10,20,30,40,50};
    int size = 5;

    solve1(arr,size);
    print(arr,size);

    return 0;
}