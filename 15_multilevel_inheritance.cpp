#include <iostream>

using namespace std;

class Person{
    protected:
    string name;

    public:
    void introduction(){
        cout<<"hello my name is "<<name<<endl;
    }

   
};

    class Employee: public Person{
    protected:
        int salary;

    public:
        void monthly_salary(){
            cout<<"my monthly salary is: "<<salary<<endl;
        }
    };
    class Manager:public Employee{
        public:
        string department;

        Manager(string name, int salary, string department){
            this->name=name;
            this->salary=salary;
            this->department=department;
        }

        void work(){
            cout<<name<<" "<<salary<<" "<<department<<endl;
        }
    };
int main(){
    Manager A1("rohit",200,"IT");
    A1.work();
    A1.monthly_salary();
    A1.introduction();
    
}