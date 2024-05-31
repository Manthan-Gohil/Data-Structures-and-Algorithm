#include<iostream>
using namespace std;

int main(){

    int x = 30;
    int y = 20;

    int result = (x>y) ? x : y;

    cout<<"The larger value is "<<result<<endl;

    int age = 12;

    (age>18) ? cout<<"can vote " : cout<<"can not vote ";

    return 0;

    
}