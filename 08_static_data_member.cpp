#include <iostream>
using namespace std;

class Customer
{

    string name;
    int account_number, balance;
    static int total_customer;

public:
    Customer(string name, int account_number, int balance)
    {

        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
        total_customer++ ;
    }

    void display(){

        cout<<name<<" "<<account_number<<" "<<balance<<" "<<total_customer<<endl;
    }

    void display_customer(){
        cout<<total_customer<<endl;
    }
};

int Customer::total_customer=0;

int main(){

    Customer A1("Sakshi",1,1000);
    Customer A2("Swapnil",2,2000);
    A1.display();
    A2.display();
    Customer A3("manisha",3,3000);
    A1.display();
    A2.display();
    A3.display();
    // customer::total_customer=5; 
    // directly accessing without object, only if it is in public
    A2.display_customer();
}