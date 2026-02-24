#include <iostream>
using namespace std;

class Customer
{
    string name;
    int account_number;
    int balance;

public:
    // default constructor
    Customer()
    {
        name = "sakshi";
        account_number = 5;
        balance = 100;
    }

    // parameterized constructor
    Customer(string name, int account_number, int balance)
    {
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
    }
    //constructor overloading 

    Customer(string a,int b){
        name= a;
        account_number=b;
        balance=50;
    }
    void display()
    {
        cout << name << " " << account_number << " " << balance << endl;
    }
};

int main()
{
    Customer A1;
    Customer A2("swapnil", 10, 4000);
    Customer A3("Manisha",46);
    A1.display();
    A2.display();
    A3.display();
}
