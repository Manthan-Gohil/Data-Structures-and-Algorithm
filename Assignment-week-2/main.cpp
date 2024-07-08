#include<iostream>
using namespace std;

void numeric_hollow_half_pyramid(int n){

    for(int i=0;i<n;i++){

        for(int j=0;j<i+1;j++){

            if(j==0 || i==n-1 || i==j){
                cout<<j+1<<" ";
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
    numeric_hollow_half_pyramid(5);
}