#include<iostream>
using namespace std;

void fullpyramid(int n){

    for(int row=0;row<n;row++){

        //1. Spaces
        for(int col=0;col<n-row-1;col++){
            cout<<" ";
        }
        //2. Stars
        for(int col=0;col<row+1;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void invertedpyramid(int n){

    for(int row=0;row<n;row++){
        //space
        for(int col=0;col<row;col++){
            cout<<" ";
        }
        //stars
        for(int col=0;col<n-row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void diamond(int n){
    fullpyramid(n);
    invertedpyramid(n);
}

void hollowpyramid(int n){

    for(int row=0;row<n;row++){
        //space
        for(int col=0;col<n-row-1;col++){
            cout<<" ";
        }
        //stars
        for(int col=0;col<row+1;col++){
            if(row==0 ||row==n-1 || col==0 || col==row){
                cout<<"* ";
            }
            else{
                cout<<"  "; //double spacing hogi
            }
        }
        cout<<endl;
    }
}

void invertedhollowpyramid(int n){

    for(int i=0;i<n;i++){

        //space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        //stars
        for(int j=0;j<n-i;j++){
            if(i==0 || i==n-1 ||j==0 ||j==n-i-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}
int main()
{
    // fullpyramid(10);
    // invertedpyramid(10);
    // diamond(5);
    // hollowpyramid(10);
    invertedhollowpyramid(10);
}