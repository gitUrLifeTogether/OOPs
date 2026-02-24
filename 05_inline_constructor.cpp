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

    
    inline Customer(string a, int b, int c) : name(a),account_number(b),balance(c){

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
    A1.display();
    A2.display();
}
/*
one more use case of constructor is that it stops the execution of code when there is an error
for example if we are opening a file, but that file doesnt exist then 
the exexution stops and gives error instead running the entire code and giving an error 
which wastes resources 
another example- we need memory of var= new int[100]-- if we dont get array of 100 allocated in heap then exe stops --error
*/