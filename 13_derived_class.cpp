#include <iostream>

using namespace std;

class Human{
    string religion,color; 

    public: 
    string name;
    int age,weight;
};

class Student: private Human {

    int roll_number,fees;

    public:

    Student(string name,int age,int weight,int roll_number,int fees){
        this->name=name;
        this->age=age;
        this->weight=weight;
        this->roll_number=roll_number;
        this->fees=fees;
        
    }

    void display(){
        cout<<name<<"age is"<<age<<" , weight is"<<weight;
    }

    /* void fun(string n,int a,int w){
        name=n;
        age=a;
        weight=w;

    }

    void display(){
        cout<<name<<" "<<age<<" "<<weight<<endl;
    } */
};

class Teacher: public Human{

    int salary,id;
};

int main(){
    Student A("rohit",12,400,23,200);
    A.display();
    Teacher B;
    B.name="sakshi";
}