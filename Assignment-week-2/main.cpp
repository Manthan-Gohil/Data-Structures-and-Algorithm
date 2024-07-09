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
int main()
{
    // numeric_hollow_half_pyramid(5);
    // numeric_hollow_inverted_half_pyramid(10);
    // numeric_palindrome_equilateral_pyramid(10);
    // solid_half_diamond(10);
    // fancy_pattern_1(7);
    fancy_pattern_2(4);
}