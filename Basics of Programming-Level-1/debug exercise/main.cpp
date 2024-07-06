#include<iostream>
using namespace std;

int main()
{
    //Debug the code. Take input a character, print 1, if its a capital alphabet, print 0, if its a lowercase alphabet, else print -1.
	char c;
    cin>>c;
    if('a'<=c && c<= 'z'){
        cout<<0;
    }
	else if('A'<=c && c<= 'Z'){
        cout<<1;
    }
    else{
        cout<<-1;
    }

    /*
Pattern
1
23
345
4567
*/
    int n;
    int i=1;
    cin>>n;
    while(i<=n){
        int j = i,count = 1;
        while(count<=i){
            cout<<j;
            j = j + 1;
            count = count + 1;
        }
        cout<<"\n";
        i = i + 1;
    }

   //3.
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j = i,count = 2*n-1,gaps=(n-i),k=1;
        while(k<=gaps){
            cout<<" ";
            k = k + 1;
        }
        int m = 1,ch = count - 2*gaps;
        while(m<=ch){
            cout<<"*";
            m = m + 1;
        }
        k = 1;
        while(k<=gaps){
            cout<<" ";
            k = k + 1;
        }
        cout<<"\n";
        i = i + 1;
    }

    //4.
    /*
Pattern
N = 4
1
22
333
4444
*/
  int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<i+1;j++){
	        cout<<i;
        }
    cout<<endl;
    }

    //5.
    /*
Pattern
N = 4
1
21
321
4321
*/

  int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){
       int p=i;
        for(j=1;j<=i;j++){
          cout<<p;
          p--;
        }
        cout<<endl;  
    }

    //6.
    /*
Pattern
N = 5
E
DE
CDE
BCDE
ABCDE
*/

    int i,j,n;;
    cin>>n;
    for(i=1;i<=n;i++){
        char p='A'+n-i;
        for(j=1;j<=i;j++){
            cout<<p;
            p++;  
        }
        cout<<endl;
    }

    //7.
    /*
Pattern
N = 4
   1
  232
 34543
4567654
*/

    int no;
    cin>>no;
    int i=1;
    int n = 2*no-1;
    while(i<=(no)){
        int gaps = n-2*i+1,k=1;
        int j = i;
        while(k<=gaps/2){
            cout<<" ";
            k = k + 1;
        }
        int ch = n - gaps, z = (ch+1)/2;
        while(z>=1){
            cout<<j;
            j = j + 1;
            z = z - 1;
        }
        j = j - 1;
        z = (ch-1)/2;
        while(z>=1){
            j = j - 1;
            cout<<j;
            z = z - 1;
        }
        k = 1;
        while(k<=gaps/2){
            cout<<" ";
            k = k + 1;
        }
        cout<<"\n";
        i = i + 1;
    }

} 








