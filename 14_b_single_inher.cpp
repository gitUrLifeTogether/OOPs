#include <iostream>

using namespace std;

class Human{
    protected:
    string name;
    int age;

    public:

    Human(){
        cout<<"Hello Human"<<endl;
    }
    ~Human(){
        cout<<"Hello Human dist"<<endl;
    }
    void work(){
        cout<<"i am working";
    }
};

class Student: public Human{

    int roll_number,fees;

    public:
    /* Student(string name, int age, int roll_number,int fees){
        this->name=name;
        this->age=age;
        this->roll_number=roll_number;
        this->fees=fees;

    } */
    Student(){
        cout<<"Hello Student\n";
    }

    ~Student(){
        cout<<"Hello Student dist\n";
    }
    
};

int main(){
    Student A1;
    
}