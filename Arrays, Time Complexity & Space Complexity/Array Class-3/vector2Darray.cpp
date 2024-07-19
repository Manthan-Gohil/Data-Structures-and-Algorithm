#include<iostream>
#include<vector>
using namespace std;

bool search2Darray(vector<vector<int>> arr,int target){
    int rowsize = arr.size();
    int colsize = arr[0].size();

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

    //2D array creation using vector
    vector<vector<int>> arr (4,vector<int>(3,0));
    
    int rowsize = arr.size();
    int colsize = arr[0].size();

    //input
    for(int i=0;i<rowsize;i++){
        for(int j=0;j<colsize;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }

    int target = 30;
    bool ans = search2Darray(arr,target);
    cout<<"Answer is = "<<ans<<endl;

}