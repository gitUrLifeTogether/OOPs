#include <iostream>
using namespace std;

class a
{
     // int has 4 bytes
    char c; 
    int b;
    char d;
    double e;
    
};

int main(){
    a obj;
    cout<<sizeof(obj);
}