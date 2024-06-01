#include<iostream>
using namespace std;
int main(){

    // //Question 1. count 1-100
    for(int i=1; i<=100; i=i+1){
        cout<<i<<" ";
    }
    cout<<endl;

    // //Question 2. count 100-1
    int i=100;
    while(i>0){
        cout<<i<<" ";
        i=i-1;
    }
    cout<<endl;

    // //Question 3. Name 50 times
    for(int i=0; i<51; i=i+1){
        cout<<"Manthan"<<" ";
    }
    cout<<endl;

    // //Question 4. count 0 to -10
    for(int i=0;i>=-10;i=i-1){
        cout<<i<<" ";
    }
    int i=0;
    while(i>=-10){
        cout<<i<<" ";
        i=i-1;
    }
    cout<<endl;

    //Question 5. table of 7
    for(int i=1; i<=10; i=i+1){
        cout<<7*i<<" ";
    }

    //Question 6. A to Z alphabet
    for(char ch='A'; ch<='Z'; ch=ch+1){
        cout<<ch<<" ";
    }

    //Question 7. a to z alphabet
    for(char ch='a'; ch<='z'; ch=ch+1){
        cout<<ch<<" ";
    }
    
    return 0;
}