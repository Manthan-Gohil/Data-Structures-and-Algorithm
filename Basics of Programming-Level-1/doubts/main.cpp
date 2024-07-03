#include<iostream>
using namespace std;

int letsparty(int a,int b){
    cout<<"Party started"<<endl;
    cout<<"Party started"<<endl;
    int sum = a+b;
    return sum;
}

namespace Manthan
{
    int letsparty(int a,int b)
    {
    cout<<" Manthan Party started"<<endl;
    cout<<" Manthan Party started"<<endl;
    int sum = a+b;
    return sum;
    }
}
int main(){
    int result = letsparty(6,5);
    cout<<result<<endl;

    int result2 = Manthan::letsparty(5,4);
    cout<<result2<<endl;

    int num;
    cout<<"enter the number"<<endl;
    cin>>num;
    if(cin.fail())
    {
        cout<<"Failed"<<endl;
    }
    else
    {
        cout<<"Success"<<endl;
    }
}