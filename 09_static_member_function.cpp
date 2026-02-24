#include <iostream>
using namespace std;

class Customer
{

    string name;
    int account_number, balance;
    static int total_customer;
    static int total_balance;

public:
    Customer(string name, int account_number, int balance)
    {

        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
        total_customer++ ;
        total_balance+=balance;
    }

    //it can only access static members not others
    //it becomes the part of the class, it belongs to the class
    static void accessStatic(){
        cout<<"total number of customers: "<<total_customer<<endl;
        cout<<"total balance: "<<total_balance<<endl;
    }

    void deposit(int amount){
        balance+=amount;
        total_balance+=amount;
    }

    void withdraw(int amount){
        balance-=amount;
        total_balance-=amount;
    }
    void display(){

        cout<<name<<" "<<account_number<<" "<<balance<<" "<<total_customer<<endl;
    }

    void display_customer(){
        cout<<total_customer<<endl;
    }


};

int Customer::total_customer=0;
int Customer::total_balance=0;

int main(){

    Customer A1("Sakshi",1,1000);
    Customer A2("Swapnil",2,2000);
    
    Customer A3("manisha",3,3000);
    Customer::accessStatic( );
    A1.deposit(1100);
    Customer::accessStatic();
    A2.withdraw(200);
    Customer::accessStatic();
    
}