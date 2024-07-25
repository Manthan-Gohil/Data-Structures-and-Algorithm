#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//Question: Remove dublicates from the sorted array also return the number of unique elements
//in array

//two pointer approach
int remove_dublicates(vector<int> nums){
    int j = 0;
    int i = 1;
    int size = nums.size();

    while(i<size){
        if(nums[i] == nums[j]){
            i++;
        }
        else{
            j++;
            nums[j] = nums[i];
            i++;
        }
    }
    // j+1 is the number of unique elements in array
    return j+1;
}
int main()
{
    vector<int> nums {0,0,1,1,1,2,2,3,3,4};

    cout<<"Number of unique elements = "<<remove_dublicates(nums);
}