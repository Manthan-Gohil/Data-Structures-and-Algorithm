#include<iostream>
using namespace std;

int main(){

    //total rows = 4
    // every row -> 4 star

    //row-> outerloop
    //column->innerloop

    //outerloop->4row
    for(int row=0;row<4;row++){
        //innerloop->4 star print
        //hr row me kya krna hai, vo inner loop batayega
        for(int col=0;col<4;col++){
            cout<<"* ";
        }
        //4 star print karne ke baad, next line me aata hu
        cout<<endl;
    }
}