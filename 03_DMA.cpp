#include<iostream>
using namespace std;

class Student{
public:
    string name;
    int age,roll_number;
    string grade;


};

int main(){

    Student *s = new Student;
    (*s).name = "sakshi";
    s->age= 20;

    cout<<s->name<<endl;
    cout<<s->age<<endl;
    
}