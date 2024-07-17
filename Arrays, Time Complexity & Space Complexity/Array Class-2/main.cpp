#include<iostream>
using namespace std;

int findUniqueNumber(int arr[],int n){
    int ans = 0;

    for(int i=0;i<n;i++){
        ans = ans^arr[i];
    }
    return ans;

}

void sortZeroOne(int arr[],int n){
    int zerocount = 0;
    int onecount = 0;
    //counting
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            zerocount = zerocount + 1;
        }
        if(arr[i]==1){
            onecount = onecount + 1;
        }
    } 
    //insertion
    for(int i=0;i<zerocount;i++){
        arr[i]=0;
    }
    for(int i=zerocount;i<n;i++){
        arr[i]=1;
    }
}

void pairs(int arr[],int n){
    //pair 1.
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i]<<" "<<arr[j]<<endl;
        }
    }
    cout<<"end"<<endl;
    //pair 2.
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            cout<<arr[i]<<" "<<arr[j]<<endl;
        }
    }
    cout<<"end"<<endl;
    //pair 3.
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<arr[i]<<" "<<arr[j]<<endl;
        }
    }
    cout<<"end"<<endl;
    //pair 4.
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<arr[i]<<" "<<arr[j]<<endl;
        }
    }
    cout<<"end"<<endl;
    //pair 5.
    for(int i=0;i<n;i++){
        for(int j=n-1;j>=0;j--){
            cout<<arr[i]<<" "<<arr[j]<<endl;
        }
    }
    cout<<"end"<<endl;
    //pair 6.
    for(int i=0;i<n;i++){
        for(int j=n-1;j>i;j--){
            cout<<arr[i]<<" "<<arr[j]<<endl;
        }
    }
    cout<<"end"<<endl;
    //pair 7.
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            cout<<arr[i]<<" "<<arr[j]<<endl;
        }
    }
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

    // cout<<"Unique number from array is: "<<findUniqueNumber(arr,size);

    // sortZeroOne(arr,size);
    // //printing
    // for(int i=0;i<size;i++){
    //     cout<<arr[i]<<" ";
    // }

    // pairs(arr,size);

    return 0;
}