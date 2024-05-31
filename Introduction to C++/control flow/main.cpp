#include<iostream>
using namespace std;

int main(){

    // int budget;
    // cout<<"Enter your budget:"<<endl;
    // cin>>budget;

    //if statement
    // if(budget>2000000){
    //     cout<<"You can buy Scorpio:"<<endl;
    // }

    //if-else statement
    // if(budget>2000000){
    //     cout<<"You can buy Scorpio:"<<endl;
    // }
    // else{
    //     cout<<"You can not buy Scorpio"<<endl;
    // }

    //if else if statement
    // int marks;
    // cout<<"Enter the marks:"<<endl;
    // cin>>marks;

    // if(marks>90){
    //     cout<<"A+ grade"<<endl;
    // }
    // else if(marks>80){
    //     cout<<"A grade"<<endl;
    // }
    // else if(marks>70){
    //     cout<<"B+ grade"<<endl;
    // }
    // else if(marks>60){
    //     cout<<"B grade"<<endl;
    // }
    // else{
    //     cout<<"Failure"<<endl;
    // }

    //nested if

    int height;
    cout<<"Enter the height:"<<endl;
    cin>>height;

    int weight;
    cout<<"Enter weight:"<<endl;
    cin>>weight;

    if(height>5){

        if(weight>70){
            cout<<"Your bmi is good"<<endl;
        }
        else{
            cout<<"bmi is not good"<<endl;
        }
    }
    else{
        cout<<"short height"<<endl;
    }

    return 0;
}