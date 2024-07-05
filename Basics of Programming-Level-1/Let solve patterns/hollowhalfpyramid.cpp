#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    //outer
    //hollow half pyramid
    for(int row=0;row<n;row++){
        //inner
        for(int col=0;col<n;col++){
            if(col==0 || row==n-1 || row==col){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}