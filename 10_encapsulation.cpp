#include <iostream>
using namespace std;

class Customer
{

    string name;
    int account_number, balance;
    
public:

    Customer(string name, int account_number, int balance)
    {

        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
        
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
    void display(){

        cout<<name<<" "<<account_number<<" "<<balance<<" "<<endl;
    }

    

};



int main(){

    Customer A1("Sakshi",1,1000);
    Customer A2("Swapnil",2,2000);
    Customer A3("manisha",3,3000);
    
    
}