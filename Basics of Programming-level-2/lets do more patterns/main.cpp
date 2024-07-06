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
int main()
{
    // fullpyramid(10);
    // invertedpyramid(10);
    diamond(5);
}