#include<iostream>
using namespace std;

int main(){

    int length,width;
    cout<<"Enter length"<<endl;
    cin>>length;

    cout<<"Enter width"<<endl;
    cin>>width;

    //outer
    for(int r=0;r<length;r++){
        //inner
        for(int c=0;c<width;c++){
            //hr 1 column me 1* print karna hai
            cout<<"* ";
        }
        cout<<endl;
    }
}