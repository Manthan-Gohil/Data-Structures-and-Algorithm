#include<iostream>
using namespace std;

int main()
{
    int length,width;
    cout<<"Enter length"<<endl;
    cin>>length;
    cout<<"Enter width"<<endl;
    cin>>width;

    //outer
    for(int row=0;row<length;row++){
        //inner
        for(int col=0;col<width;col++){
            //first and last row me all stars
            if(row==0 || row==length-1)
            {
                cout<<"* ";
            }
            else{
                //middle rows
                if(col==0 || col==width-1){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
    }
}