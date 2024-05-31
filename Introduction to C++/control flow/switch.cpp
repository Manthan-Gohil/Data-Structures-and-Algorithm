#include<iostream>
using namespace std;

int main(){

    char grade;
    cout<<"Enter your grade:"<<endl;
    cin>>grade;

    // if(grade == 'A'){
    //     cout<<"marks will be in range of 90 to 100"<<endl;
    // }

    // else if(grade == 'B'){
    //     cout<<"marks will be in range of 80 to 90"<<endl;
    // }

    // else if(grade == 'C'){
    //     cout<<"marks will be in range of 70 to 80"<<endl;
    // }

    // else if(grade == 'D'){
    //     cout<<"marks will be in range of 60 to 70"<<endl;
    // }

    // else{
    //     cout<<"marks will be in range of 0 to 60"<<endl;
    // }

    //converting into switch statement
    switch(grade){

        case 'A': 
        cout<<"Marks will be in range of 90 to 100\n";
        break;
        case 'B': 
        cout<<"Marks will be in range of 80 to 90\n";
        break;
        case 'C': 
        cout<<"Marks will be in range of 70 to 80\n";
        break;
        case 'D': 
        cout<<"Marks will be in range of 60 to 70\n";
        break;
        default: 
        cout<<"Marks will be in range of 0 to 60\n";

        // int age = 12;
        // switch(age>10){
        //     case 1: 
        //     cout<<"true";
        //     break;
        //     case 0:
        //     cout<<"false";
        //     break;
        // }

        return 0;

    }


    return 0;
}