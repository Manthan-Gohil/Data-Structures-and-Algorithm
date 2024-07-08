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

void hollowdiamond(int n){
    
    for(int row=0;row<n;row++){
        //space
        for(int col=0;col<n-row-1;col++){
            cout<<" ";
        }
        //stars
        for(int col=0;col<row+1;col++){
            if(row==0 || col==0 || col==row){
                cout<<"* ";
            }
            else{
                cout<<"  "; //double spacing hogi
            }
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){

        //space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        //stars
        for(int j=0;j<n-i;j++){
            if(i==n-1 ||j==0 ||j==n-i-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void mixpyramid(int n){

    //PART 1.
    for(int i=0;i<n;i++){
        //stars
        for(int j=0;j<n-i;j++){
            cout<<"* ";
        }
        //space
        for(int j=0;j<2*i+1;j++){
            cout<<"  ";
        }
        //stars
        for(int j=0;j<n-i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    //PART 2.
    for(int i=0;i<n;i++){

        //stars
        for(int j=0;j<i+1;j++){
            cout<<"* ";
        }
        //spaces
        for(int j=0;j<2*n-2*i-1;j++){
            cout<<"  ";
        }
        //stars
        for(int j=0;j<i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void fancy12(int n){

    for(int i=0;i<n;i++){

        for(int j=0;j<2*i+1;j++){
            if(j%2==0){
                cout<<i+1;
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}

void fullfancy12(int n){
    //part 1.
    fancy12(n);
    
    n--;
    // inverted ka logic
    for(int i=0;i<n;i++){

        for(int j=0;j<2*n-2*i-1;j++){
            if(j%2==0){
                cout<<n-i;
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}

void ABCBA(int n){

    for(int i=0;i<n;i++){
        char ch = 'A'; //ASCII 65 init.
        for(int j=0;j<i+1;j++){
            cout<<ch;
            ch++;
        }

        ch--;
        while(ch>'A'){
            ch--;
            cout<<ch;
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
    // invertedhollowpyramid(10);
    // hollowdiamond(10);
    // mixpyramid(10);
    // fancy12(5);
    // fullfancy12(5);
    // ABCBA(5);
   
}