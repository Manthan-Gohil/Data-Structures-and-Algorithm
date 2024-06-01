#include<iostream>
using namespace std;
int main(){

    int i = 1;
    do{
        //logic
        cout<<i<<" ";
        //updation
        i = i+1;
    }while(i<=5);

    int count = 20;

    int i = 1;
    do{
        cout<<i<<" ";
        i = i+1;
    }
    while(i<=count);

    //Question
    int i;
    if(cin>>i){
        cout<<"Manthan"<<endl;
    }

    //Question
    if(cout<<"Hi"){
        cout<<" Manthan"<<endl;
    }

    //Question
    int i;
    for(i=1;i<=5;i=i+1);
    {
        cout<<i<<endl;
    }

    //nested loop
    for(int i=1;i<=3;i=i+1){
        for(int j=1;j<=3;j=j+1){
            cout<<"i = "<<i<<" "<<"j = "<<j<<endl;
        }
    }

    return 0;
}