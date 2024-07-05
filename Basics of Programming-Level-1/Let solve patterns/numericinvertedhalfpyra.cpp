#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    //outer
    for(int row=0;row<n;row++){
        //inner
        for(int col=0;col<n-row;col++){
            cout<<col+1<<" ";
        }
        cout<<endl;
    }
}