#include <iostream>

using namespace std;

class Human{
    protected:
    string name;
    int age;

    public:

    Human(string name,int age){
        this->name;
        this->age;
    }
    void work(){
        cout<<"i am working";
    }
    void display(){
        cout<<name<<" "<<age<<endl;
    }
};

class Student: public Human{

    int roll_number,fees;

    public:
    //getting the values from parent class's constructor
    Student(string name, int age, int roll_number,int fees):Human(name,age)
    {
        this->name=name;
        this->age=age;
        this->roll_number=roll_number;
        this->fees=fees;

    }
   
    void display(){
        cout<<name<<" "<<age<<" "<<roll_number<<" "<<fees<<endl;
    }
    
};

int main(){
    Student A1("rohit",12,10,99);
    A1.display();// jis object ko call kiya wahi class me first fn dekhega, 
    // if its not there then only parents class's fn will run , in case of same named functions
    
}