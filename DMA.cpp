#include<iostream>
using namespace std;

int main(){
    
    int *new_memory= new int;
    *new_memory= 5;
    cout<<new_memory<<endl;//displays address
    cout<<*new_memory<<endl;//displays val

    float*new_float= new float;
    *new_float= 3.6;
    cout<<*new_float<<endl;

    // array
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int *new_arr=new int[n];

    for(int i=0;i<n;i++){
        new_arr[i]=i+1;
    }

    for(int i=0;i<n;i++){
        cout<<new_arr[i]<<endl;
    }
    //delete keyword
    delete new_memory;
    delete new_float;
    delete[] new_arr;

    cout<<"memory freed successfully";
    return 0;
}
