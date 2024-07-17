#include<iostream>
using namespace std;

void printalltriplet(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i] + arr[j] + arr[k] == target){
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                }
            }
        }
    }
}
int main()
{
    int size;
    cout<<"Enter size of array:"<<endl;
    cin>>size;
    int arr[100];
    for(int i=0;i<size;i++){
        cout<<"Element at index "<<i<<" ";
        cin>>arr[i];
    }
    printalltriplet(arr,size,70);
}