#include<iostream>
using namespace std;

int sum(int a,int b){
    int totalsum = a+b;
    return totalsum;
}

//function declaration
void printmyname();

int getMultiplication(int x,int y,int z){
    return x*y*z;
}

void printNameTenTimes(){
    for(int i=1;i<=10;i++){
        cout<<"Manthan"<<" ";
    }
    cout<<endl;
}

void printmultiples(int num){
    for(int i=1;i<=10;i++){
        cout<<num<<" * "<<i<<" = "<<num*i<<endl;
    }
    cout<<endl;
}

float converttocelcius(float fer){
    return (fer-32)*5/9;
}

//different
char convertIntoUpperCase(char ch){
    char answer = ch - 'a' + 'A';
    return answer;
}

int main(){

    int ans = sum(5,9);
    cout<<"Sum = "<<ans<<endl;  

    //function call
    printmyname(); 

   int result = getMultiplication(2,3,4);
   cout<<"Multiplication = "<<result<<endl; 

   printNameTenTimes();

   printmultiples(24);

   float celcius = converttocelcius(22);
   cout<<"Celcius = "<<celcius<<endl;

   char alphabet = convertIntoUpperCase('l');
   cout<<alphabet<<endl; 
   return 0;
}

void printmyname(){
    cout<<"Manthan Gohil"<<endl;
}