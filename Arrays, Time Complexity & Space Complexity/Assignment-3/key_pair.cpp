#include<iostream>
#include<algorithm>
using namespace std;

//Method 1.
bool keypair(int arr[],int n){
    int X = 16;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] + arr[j] == X){
                return true;
            }
        }
    }
    return false;
}
//Method 2.
bool twopointer(int arr[],int n){
    //two pointer approach works only for the sorted array
    sort(arr,arr+6); // time complexity of sort function  is O(nlogn)
    int X = 16;
    int low = 0;
    int high = n-1;
    while(low<high){
        int sum = arr[low] + arr[high];
        if(sum == X){
            return true;
        }
        else if(sum>X){
            high--;
        }
        else if(sum<X){
            low++;
        }
    }
    return false;
}
int main(){

    int arr[6] = {1,4,45,6,10,8};

    // int ans = keypair(arr,6);
    // if(ans==1){
    //     cout<<"Pair exists";
    // }
    // else{
    //     cout<<"Pair not exist";
    // }

    
    int ans2 = twopointer(arr,6);
    if(ans2==1){
        cout<<"Pair exists";
    }
    else{
        cout<<"Pair not exist";
    }
    

}