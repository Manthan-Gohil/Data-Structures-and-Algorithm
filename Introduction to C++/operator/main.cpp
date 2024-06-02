#include<iostream>
using namespace std;
int main()
{
    int a = 5;
    cout<<a<<endl;
    cout<<(++a)<<endl;
    //a ki value 6 ho chuki h
    cout<<(a++)<<endl;
    // print to 6 hi hoga but a ki value 7 ho chuki h
    cout<<a<<endl;
    // yaha tk a 7 bn chuka h
    cout<<(--a)<<endl;
    //a ki value 6 bn chuki h
    cout<<(a--)<<endl;
    //print to 6 hi hoga but a ki value 5 ho chuki h
    //let's verify
    cout<<a<<endl;

    //Arithmatic

    int a = 10;
    int b = 5;

    cout<<(a+b)<<endl;
    cout<<(a-b)<<endl;
    cout<<(a*b)<<endl;
    cout<<(a/b)<<endl;
    cout<<(a%b)<<endl;

    cout<<5/2<<endl;
    cout<<5.0/2<<endl;
    cout<<1*5.0/2<<endl;

    //Rational operator 
    cout<<(10>5)<<endl;
    cout<<(10<5)<<endl;
    cout<<(10>=5)<<endl;
    cout<<(10<=5)<<endl;
    cout<<(10==5)<<endl;
    cout<<(10!=5)<<endl;

    //Logical operator
    bool cond1 = false;
    bool cond2 = false;
    bool cond3 = false;

    if(cond1 && cond2 && cond3){
        cout<<"All conditions are true"<<endl;
    }
    else{
        cout<<"All conditions are not true"<<endl;
    }

    // bool cond1 = (10>5);
    // bool cond2 = (5>=5);
    // bool cond3 = (2!=2);

    // if(cond1 || cond2 || cond3){
    //     cout<<"At least one condition is true"<<endl;
    // }
    // else{
    //     cout<<"All conditions are false"<<endl;
    // }
    
    // bool condition = (5!=10);
    // cout<<condition<<endl;
    
    bool condition = false;
    cout<<!condition<<endl;

    //Assignment operator
    int arr = 5;
    cout<<arr<<endl;

    arr = arr+10;
    arr+=10;

    arr = arr*10;
    arr*=10;
    cout<<arr<<endl;

    //Bitwise operator
    cout<<(5&4)<<endl;
    cout<<(5|4)<<endl;

    // not(~) operator
    cout<<1<<endl;
    cout<<(~1)<<endl;
    cout<<(~5)<<endl;

    // left shift operator(<<)
    cout<<5<<endl;
    cout<<(5<<1)<<endl;
    cout<<(5<<2)<<endl;
    cout<<(5<<3)<<endl;

    // right shift operator(>>)
    cout<<(1>>1)<<endl;
    cout<<(10>>1)<<endl;
    cout<<(100>>3)<<endl;

    //XOR(^) operator
    cout<<(5^5)<<endl;
    cout<<(5^4)<<endl;


    return 0;
}