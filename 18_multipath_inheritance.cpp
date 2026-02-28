#include <iostream>

using namespace std;

class Human
{
public:
    string name;

    void display()
    {
        cout << "my name is: " << name << endl;
    }
};
// virtual makes them take it as one not multiple variables 
class Engineer : public virtual Human
{

public:
    string spec;

    void work()
    {
        cout << " i study " << spec << endl;
    }
};

class Youtuber : public virtual Human
{
public:
    int subscribe;

    void content()
    {
        cout << " sub no: " << subscribe << endl;
    }
};

class codeTeacher : public Engineer, public Youtuber
{

public:
    int salary;
    codeTeacher(){

    }
    codeTeacher(string name, string spec, int subscribe, int salary)
    {
        this->name = name;
        this->spec = spec;
        this->subscribe = subscribe;
        this->salary = salary;
    }
};
int main()
{

    codeTeacher A1("rohit","CSE",100,99);
    A1.display();
    
}