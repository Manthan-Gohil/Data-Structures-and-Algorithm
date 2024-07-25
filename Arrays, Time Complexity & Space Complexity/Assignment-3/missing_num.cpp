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


int main(){
    vector<int> nums {0,1,4,2};

    cout<< "Missing number = "<<missing_number(nums);
}