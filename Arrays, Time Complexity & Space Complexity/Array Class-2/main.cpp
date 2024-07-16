#include<iostream>
using namespace std;

int findUniqueNumber(int arr[],int n){
    int ans = 0;

    for(int i=0;i<n;i++){
        ans = ans^arr[i];
    }
    return ans;

}
int main(){

    int arr[100];
    int size;
    cout<<"Enter the size of array "<<endl;
    cin>>size;

    for(int i=0;i<size;i++){
        cout<<"Numbers at index "<<i<<" ";
        cin>>arr[i];
    }

    cout<<"Unique number from array is: "<<findUniqueNumber(arr,size);

    return 0;
}