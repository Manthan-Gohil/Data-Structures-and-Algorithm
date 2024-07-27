#include<iostream>
#include<vector>
using namespace std;

//Question: find the first repeating element in an array and return its index 

int first_repeated(vector<int> nums){
    int size = nums.size();
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(nums[i] == nums[j]){ 
                return i;
            }
        }
    }
    return -1;
}
int main()
{
    vector<int> nums{1,5,3,4,3,5,6};

    cout<<"Index of First Repeating element: "<<first_repeated(nums)<<endl;
}