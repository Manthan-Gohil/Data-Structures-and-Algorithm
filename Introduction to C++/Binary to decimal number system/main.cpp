#include<iostream>
#include<cmath>
using namespace std;

// int decimalToBinaryMethod1(int n){
//     //division method
//     int binarynumber = 0;
//     int i = 1;
//     while(n>0){
//         int bit = n%2;
//         binarynumber += bit*i;
//         n = n/2;
//         i *= 10;
//     }
//     return binarynumber;
// }

// int decimalToBinaryMethod2(int n){
//     //Method 2 bitwise operator
//     int binaryno=0;
//     int i = 1;
//     while(n>0){
//         int bit = (n & 1);
//         binaryno += bit*i;
//         n = n >> 1;
//         i *= 10; 
//     }
//     return binaryno;
// }

int binarytodecimal(int n){
    int i = 0;
    int decimal = 0;
    while(n){
        int bit = n%10;
        decimal += bit*pow(2,i);
        i++;
        n /= 10;
    }
    return decimal;
}
int main(){
    // int n;
    // cout<<"Enter the number"<<endl;
    // cin>>n;
    // int binary = decimalToBinaryMethod1(n);
    // cout<<binary<<" ";

    // int n;
    // cout<<"Enter the number"<<endl;
    // cin>>n;
    // int binary2 = decimalToBinaryMethod2(n);
    // cout<<binary2<<endl;

    int n;
    cout<<"Enter binary"<<endl;
    cin>>n;
    int answer = binarytodecimal(n);
    cout<<answer<<endl;

}
