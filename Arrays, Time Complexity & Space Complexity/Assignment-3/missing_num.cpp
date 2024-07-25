#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Question: find the missing number in array if array has n distinct numbers(0,n)
//return only number in the range that is missing from the array

//Method 1.
int sortingmethod(vector<int> nums){
    sort(nums.begin(),nums.end());
    int size = nums.size();
    for(int i=0;i<size;i++){
        if(i == nums[i]){
            continue;
        }
        else{
            return i;
        }
    }
    return nums.size();
}

int missing_number(vector<int> nums){
    return sortingmethod(nums);
}

// Method 2.
int xorr(vector<int> nums){
    int n = nums.size();
    int ans = 0;
    //1. xor all values of array
    for(int i=0;i<n;i++){
        ans = ans^nums[i];
    }
    //2. xor all range items [0,n]
    for(int i=0;i<=n;i++){
        ans = ans^i;
    }
    return ans;
}
int main(){
    vector<int> nums {0,1,4,2,3};
    //Method 1.
    cout<< "Missing number = "<<missing_number(nums)<<endl;
    //Method 2.
    cout<< "Missing number = "<<xorr(nums);
}