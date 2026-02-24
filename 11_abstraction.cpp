#include <iostream>
#include<math.h>
using namespace std;

class Customer
{

    string name;
    int account_number, balance,age;
    
public:

    Customer(string name, int account_number, int balance, int age)
    {

        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
        this->age=age;
        
    }


    void deposit(int amount){
        if(amount>0){
            balance+=amount;
        }

        else cout<<"invalid amount"<<endl;
        
    }

    void withdraw(int amount){
        if(amount>=balance && amount>0){
            balance-=amount;
        }
    }

    void updateAge(int age){
        if(age>0&&age<100){
            this->age=age;
        }
        else cout<<"invalid age"<<endl;
    }
    void display(){

        cout<<name<<" "<<account_number<<" "<<balance<<" "<<age<<endl;
    }

    

};



int main(){

    Customer A1("Sakshi",1,1000,15);
    Customer A2("Swapnil",2,2000,17);
    Customer A3("manisha",3,3000,15);
    A3.updateAge(-24);
    A3.display();

    cout<<pow(2,4);
}