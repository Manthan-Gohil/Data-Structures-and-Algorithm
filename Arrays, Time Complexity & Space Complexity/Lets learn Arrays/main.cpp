#include<iostream>
#include<climits>
using namespace std;

void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void solve1(int arr[],int n){
    for(int i=0;i<n;i++){
        arr[i] = arr[i]*10;
    }
}
// Question to find the target variable in array
bool linearsearch(int arr[],int n,int target){

    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return true;
        }
    }
    return false;
}
//Question to find the max number in arrays
int maxnumber(int a[],int n){
    int MaxAns = INT_MIN;
    for(int i=0;i<n;i++){
        MaxAns = max(MaxAns,a[i]);
    }
        return MaxAns;
}
//Method 2 to find the max number in arrays 
int maxnumber2(int arr[],int n){
    int maxanswer = arr[0];
    for(int i=1;i<n;i++){
        if(maxanswer<arr[i]){
            maxanswer = arr[i];
        }
    }
    return maxanswer;
}

//count how many 0's and 1's in arrays
void countnumber(int arr[],int n){
    int count1=0,count2=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count1 = count1 + 1;
        }
        else if(arr[i]==1){
            count2 = count2 + 1;
        }
    }
    cout<<"Total 0's: "<<count1<<" "<<"Total 1's: "<<count2<<endl;
}

int main()
{
    //creation
    // int arr[10];

    //error
    // int brr[];

    // int crr[] = {10,20,30,40};
    // int drr[4] = {22};

    // cout<<drr[1]<<endl;
    // cout<<crr[2]<<endl;

    // int arr[4];
    // fill(arr,arr+4,23);
    // cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<" ";

    //input
    // int arr[5];
    // for(int i=0;i<5;i++){
    //     cout<<"Enter the value for index: "<<i<<endl;
    //     cin>>arr[i];
    // }
    // //print
    // for(int i=0;i<5;i++){
    //     cout<<i[arr]<<" ";
    // }

    //array with function
    int arr[100];
    int size;
    cout<<"Enter the number of elements "<<endl;
    cin>>size;

    for(int i=0;i<size;i++){
        cout<<"Enter the value at index: "<<i<<endl;
        cin>>arr[i];
    }

    // solve1(arr,size);
    // print(arr,size);

    // bool ans = linearsearch(arr,size,50);
    // cout<<"answer: "<<ans<<endl;
    // return 0;

    // cout<<"Maximum number is: "<<maxnumber(arr,size);
    // cout<<"Maximum number is: "<<maxnumber2(arr,size);
    countnumber(arr,size);

}