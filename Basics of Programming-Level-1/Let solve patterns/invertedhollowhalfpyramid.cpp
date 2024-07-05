#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    //outer
    //inverted hollow half pyramid
    for(int row=0;row<n;row++){
        //inner
        for(int col=0;col<n;col++){
            if(row==0 || col==0 || col==n-1-row){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}