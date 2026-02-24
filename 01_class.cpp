#include<iostream>
using namespace std;

class Student{
private:
    string name;
    int age,roll_number;
    string grade;

public:
    void setname(string newName){
        if(newName.size()==0){
            cout<<"invalid name";
            return;
            //use of classes
        }
        name=newName;
    }
    void setage(int newAge){
        age=newAge;
    }
    void setroll(int newRoll){
        roll_number=newRoll;
    }
    void setgrade(string newGrade){
        grade=newGrade;
    }

    void getname(){
        cout<<name<<endl;
    }

    int getroll(){
        return roll_number;
    }

    string getgrade(int pin){
        if(pin==123) return grade;
        //when you dont want anyone to see your grades, 
        // it will only return if pin matches

        return " ";
    }
};

int main(){

    Student S1;
    S1.setname("Sakshi");
    S1.setage(10);
    S1.setroll(31);
    S1.setgrade("A+");
    S1.getname();
    cout<<S1.getroll()<<endl;
    cout<<S1.getgrade(123)<<endl;

    Student S2;
    S2.setname("Swapnil");
    S2.setage(10);
    S2.setroll(31);
    S2.setgrade("A+");
}