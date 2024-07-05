#include<iostream>
using namespace std;

int main(){

    int side;
    cout<<"Enter the sides of square"<<endl;
    cin>>side;

    //outer
    for(int row=0;row<side;row++){
        //inner
        for(int col=0;col<side;col++){
            //first and last rows me sare stars print hoge
            //logic
            if(row==0 || row==side-1){
                cout<<"* ";
            }
            else{
                //middle
                if(col==0 || col==side-1){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
    }
}