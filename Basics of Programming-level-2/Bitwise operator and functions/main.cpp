#include<iostream>
using namespace std;


bool isprime(int n){

    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

void setbit(){
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

int main(){

    // bool ans = isprime(111);
    // if(ans == true){
    //     cout<<"Prime";
    // }
    // else{
    //     cout<<"Not prime";
    // }
    // cout<<endl;
    // setbit();

    //Reference variable
    int age = 15;
    int &demo = age;
    age++;
    cout<<demo<<endl;

    int a = 10;
    int b = 20;
    int &x = a;
    int &y = b;
    x--;
    y++;
    cout<<(a*b)<<endl;


}