#include<iostream>
using namespace std;
int main(){

    //for
    for(int count = 1; count <= 10; count = count + 1){
        cout<<"Manthan "<<endl;
    }

    // //counting 1 to 5
    for(int i=1; i<=5; i++){
        cout<<i<<" ";
    }
    cout<<endl;
    // //counting 51 to 69
    for(int i=51; i<=69; i++){
        cout<<i<<" ";
    }
    cout<<endl;

    //break keyword
    for(int i=1; i<=10; i++){
        if(i==5){
            break;
        }
        cout<<i<<" ";
    }

    //continue keyword
    for(int i=1; i<=5; i=i+1){
        if(i==3){
            continue;
        }
        cout<<i<<" ";
    }

    //while loop
    int i=1;
    while(i<=5){
        cout<<i<<" ";
        i=i+1;
    }

    return 0;
}