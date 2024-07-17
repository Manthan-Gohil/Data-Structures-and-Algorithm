#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> v){
    cout<<"Printing Vector:"<<endl;
    int size = v.size();
    for(int i=0;i<size;i++){
        // cout<<v[i]<<" ";
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}
void print2(vector<int> v){
    cout<<"Printing Vector: Method 2."<<endl;
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    print(v);
    print2(v);

    // vector<char> v;
    // v.push_back('a');
    // v.push_back('b');
    // v.push_back('c');

    // cout<<"Front element: "<<v[0]<<endl;
    // cout<<"Front element: "<<v.front()<<endl;
    // cout<<"Last element: "<<v[v.size()-1]<<endl;
    // cout<<"Last element: "<<v.back()<<endl;

    // //vector initialisation
    // vector<int> arr; //default with no data, 0 size
    // vector<int> arr2(5,-1);
    // // arr2.push_back(50);
    // // print(arr2);

    // vector<int> arr3 = {1,2,3,4,5};
    // arr3.pop_back();
    // print(arr3);

    // vector<int> arr4{1,2,3,4,5};
    // print(arr4);

    // //how to copy vector
    // vector<int> arr5 = {10,20,30,40,50};
    // vector<int> arr6(arr5);
    // print(arr6);

    // vector<int> v;

    // // //insert
    // // v.push_back(1);
    // // v.push_back(2);
    // // v.push_back(3);
    // // print(v);

    // // // pop->delete->END
    // // v.pop_back();
    // // print(v);

    // //insert
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     int data;
    //     cin>>data;
    //     v.push_back(data);
    // }
    // print(v);

    // //lets add more items
    // for(int i=0;i<10;i++){
    //     v.push_back(70);
    // }
    // print(v);

    // //i want to clear the vector
    // v.clear();
    // print(v);
}