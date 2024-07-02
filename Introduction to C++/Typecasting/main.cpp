#include<iostream>
using namespace std;
int main(){

    // IMPLICIT CASTING
    // 1. int to float
    int num1 = 10;
    float num2 = 5.5;
    float result = num1 + num2;
    cout<<result<<endl;    //Implicit conversion of num1 from int to float

    // 2. char to int 
    char ch = 'A';
    int a = ch + 1; //Implicit conversion from char to int
    cout<<a<<endl;

    // 3. int to char
    int a1 = 97;
    char ch1 = a1; // Implicit conversion from int to char
    cout<<ch1<<endl; 
    
    //EXPLICIT CASTING
    // 1. double to int 
    double pi = 3.14159265;
    int intpi = (int)pi;
    cout<<intpi<<endl;

    // 2. float to char
    float floatnumber = 65.5;
    char charvalue = (char)floatnumber;
    cout<<charvalue<<endl;

    // 3. int to float
    int a2 = 10;
    int value = 3.0;
    float resultvalue = a2/(float)value;
    cout<<resultvalue<<endl;
}