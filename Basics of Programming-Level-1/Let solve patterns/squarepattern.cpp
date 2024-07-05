#include<iostream>
using namespace std;

int main(){
    int side;
    cout<<"Enter side of square"<<endl;
    cin>>side;

    //row-> outerloop
    //column->innerloop

    //outerloop
    for(int row=0;row<side;row++){
        //innerloop
        //hr row me kya krna hai, vo inner loop batayega
        for(int col=0;col<side;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}