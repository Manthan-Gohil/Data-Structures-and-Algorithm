#include<iostream>
using namespace std;

int main(){

    //set bit are the bits which have binary number=1
    //to find total number of set bits in any perticular number
    int number;
    cout<<"Enter the number:"<<endl;
    cin>>number;
    int setbitcount = 0;

    while(number != 0){
        int lastbit = (number&1);
        if(lastbit == 1){
            setbitcount = setbitcount + 1;
        }
        // right shift
        number = number>>1;
    }
    cout<<"Total set bit: "<<setbitcount<<endl;
}