#include<iostream>
#include<vector>
using namespace std;

//Question: move the negative number to the left side of array

//Dutch National Flag algo( two pointer approach )
void moveAllNegToLeft(vector<int> &nums){
    int n = nums.size();
    int l = 0;
    int h = n-1;
    while(l<h){
        if(nums[l]<0){
            l++;
        }
        else if(nums[h]>0){
            h--;
        }
        else{
            swap(nums[l],nums[h]);
        }
    }
}
int main()
{
    vector<int> nums{1,2,-3,4,-5,6};
    int n = nums.size();

    moveAllNegToLeft(nums);
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
}