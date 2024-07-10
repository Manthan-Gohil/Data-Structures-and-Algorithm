#include<iostream>
using namespace std;

void numeric_hollow_half_pyramid(int n){

    for(int i=0;i<n;i++){

        for(int j=0;j<i+1;j++){

            if(j==0 || i==n-1 || i==j){
                cout<<j+1<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void numeric_hollow_inverted_half_pyramid(int n){

    for(int i=0;i<n;i++){

        for(int j=0;j<n-i;j++){

            if(i==0){
                cout<<j+1<<" ";
            }
            else if(j==0){
                cout<<i+1<<" ";
            }
            else if(j==n-i-1){
                cout<<n<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void numeric_palindrome_equilateral_pyramid(int n){

    int k = n;
    for(int i=0;i<n;i++){
        int c = 1;
        for(int j=0;j<k;j++){
            if(j<n-i-1){
                cout<<" ";
            }
            else if(j<=n-1){
                cout<<c;
                c++;
            }
            else if(j==n){
                c = c-2;
                cout<<c;
                c--;
            }
            else{
                cout<<c;
                c--;
            }
            
        }
        k++;
        cout<<endl;
    }
}

void solid_half_diamond(int n){

    //PART 1.
    for(int i=0;i<n;i++){

        for(int j=0;j<i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    //PART 2.
    n--;
    for(int i=0;i<n;i++){

        for(int j=0;j<n-i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void fancy_pattern_1(int n){
/*
********1********
*******2*2*******
******3*3*3******
*****4*4*4*4*****
****5*5*5*5*5****
*/
    for(int i=0;i<n;i++){
        //PART 1.
        for(int j=0;j<2*n-i;j++){
            cout<<"*";
        }
        //PART 2.
        for(int j=0;j<2*i+1;j++){
            if(j%2==0){
                cout<<i+1;
            }
            else{
                cout<<"*";
            }
        }
        //PART 3.
        for(int j=0;j<2*n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void fancy_pattern_2(int n){
/*
1
2*3
4*5*6
7*8*9*10
7*8*9*10
4*5*6
2*3
1
*/
    int c = 1;
    for(int i=0;i<n;i++){

        for(int j=0;j<2*i+1;j++){

            if(j%2==0){
                cout<<c;
                c++;
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    int start = c-n;
    for(int i=0;i<n;i++){
        int k = start;
        for(int j=0;j<2*n-2*i-1;j++){
            if(j%2==0){
                cout<<k;
                k++;
            }
            else{
                cout<<"*";
            }
           
        }
        start = start - (n-i-1);
        cout<<endl;
        }
}

void fancy_pattern_3(int n){
/*
*
* 1 *
* 1 2 1 *
* 1 2 3 2 1 *
* 1 2 1 *
* 1 *
*
*/

    cout<<"*"<<endl;
    for(int i=0;i<n;i++){

        int cond = i<=n/2 ? 2*i : 2*(n-i-1);
        //2*i is row wise growing phase condition
        //2*(n-i-1) is row wise shrinking phase condition
        for(int j=0;j<=cond;j++){
            if(j==0){
                cout<<"*";
            }
            if(j<=cond/2){
                cout<<j+1; //column wise growing phase condition
            }
            else{
                cout<<cond-j+1; //column wise shrinking phase condition
            }
            if(j==2*i || j==2*(n-i-1)){
                cout<<"*";
            }
        }
        cout<<endl;
    }
    cout<<"*"<<endl;
}

void floyd_triangle_pattern(int n){

    int c = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<c<<" ";
            c++;
        }
        cout<<endl;
    }
}
int main()
{
    // numeric_hollow_half_pyramid(5);
    // numeric_hollow_inverted_half_pyramid(10);
    // numeric_palindrome_equilateral_pyramid(10);
    // solid_half_diamond(10);
    // fancy_pattern_1(7);
    // fancy_pattern_2(4);
    // fancy_pattern_3(7);
    floyd_triangle_pattern(7);
}