#include<iostream>
using namespace std;

//Method 1.
bool TwoSum(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]+arr[j]==target){
                return true;
            }
        }
    }
    return false;
}
//Method 2. (only print one pair)
pair<int,int> checkTwoSum(int arr[], int n, int target) {
    //assuming (-1,-1) as no answer found
    pair<int,int> ans = make_pair(-1,-1);
    //check all pairs
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(arr[i] + arr[j] == target) {
                //found a pair that sums to target
                ans.first = arr[i];
                ans.second = arr[j];
                return ans;
            }
        }
    }
    return ans;
}
//Method 3.
void checkTwoSumUsingArray(int arr[], int n, int target, int ans[]) {
    //check all pairs
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(arr[i] + arr[j] == target) {
                //found a pair that sums to target
                ans[0] = arr[i];
                ans[1] = arr[j];
                return;
            }
        }
    }
    return ;
}
//Method 4.
void checkTwoSumPrintAllAnswers(int arr[], int n, int target) {;
    //check all pairs
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(arr[i] + arr[j] == target) {
                //found a pair that sums to target
                cout << arr[i] << ", " << arr[j] << endl;
            }
        }
    }
    return ;
}
int main(){

    int size;
    cout<<"Enter size of array:"<<endl;
    cin>>size;
    int arr[100];
    for(int i=0;i<size;i++){
        cout<<"Element at index "<<i<<" ";
        cin>>arr[i];
    }

    // //Method 1.
    // bool ans = TwoSum(arr,size,35);
    // if(ans == true){
    //     cout<<"Pair found"<<endl;
    // }
    // else{
    //     cout<<"Pair not found"<<endl;
    // }

    // //Method 2.
    // pair<int,int> ans = checkTwoSum(arr,size,35);
    // if(ans.first == -1 && ans.second == -1){
    //     cout<<"Pair not found"<<endl;
    // }
    // else{
    //     cout<<"Pair found: "<<ans.first<<", "<<ans.second<<endl;
    // }

    // //Method 3.
    // int ans[2] = {-1,-1};
    // checkTwoSumUsingArray(arr,size,35,ans);
    //     cout<<ans[0]<<" ,"<<ans[1]<<endl;
    
    // //Method 4.
    // checkTwoSumPrintAllAnswers(arr,size,35);



}