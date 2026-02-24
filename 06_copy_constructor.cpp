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

    void display()
    {
        cout << name << " " << account_number << " " << balance << endl;
    }
    // copy constructor
    Customer(Customer &B)
    {
        name = B.name;
        account_number = B.account_number;
        balance = B.balance;
    }
};

int main()
{
    Customer A1;
    Customer A3("Manisha", 46,1000);
    A1.display();
    A3.display();
    Customer A4(A3);
    A4.display();
    // amother way of assigning values
    Customer A5;
    A5 = A3;
    A5.display();
}
