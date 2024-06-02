#include<iostream>
using namespace std;

//Question 1. print counting from 1-100
void printCounting(){
    for(int i=1;i<=100;i++){
        cout<<i<<" ";
    }
    cout<<endl;
}

//Question 2. finding simple interest
float simpleinterest(float p,float r,float t){
    float result = (p*r*t)/100;
    return result;
    cout<<endl;
}

//Question 3. print prime numbers between 1-100
void primenumber(){
    
    for(int n=1;n<=100;n++){
        int count = 0;
        for(int i=1;i<=n;i++){
        if(n%i==0)
        {
            count++;
        }
    }
    if(count == 2){
        cout<<n<<" ";
    }
    }
    cout<<endl;
}
//Question 4.eligible for voting or not
void eligibilityforvoting(int age){
    if(age>=18){
        cout<<"Eligible for voting"<<endl;
    }
    else{
        cout<<"Not eligible for voting"<<endl;
    }
}

int main(){
    //answer-1
    printCounting();
    //answer-2
    float ans = simpleinterest(10,12,2);
    cout<<ans<<endl;
    //answer-3
    primenumber();
    //answer-4
    eligibilityforvoting(11);

    return 0;
}