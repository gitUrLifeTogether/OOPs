#include<iostream>
#include<vector>

using namespace std;

class Animal{

    public:

    virtual void speak(){
        cout<<"HUHU"<<endl;
    }
};

class Dog:public Animal{

    public:

    void speak(){
        cout<<"wof wof"<<endl;
    }

   /*  void roti(){
        cout<<"hello";
    } */
};

class Cat:public Animal{

    public:

    void speak(){
        cout<<"meow"<<endl;
    }

   
};
int main(){
    
   /*  Animal *p;
    p = new Dog;
    p->speak(); */

    //p->roti(); not allowed cuz there is no fn named roti in animal class that can be overridden
Animal *p;

    vector<Animal*> animals;
    animals.push_back(new Dog());
    animals.push_back(new Cat());
    animals.push_back(new Animal());
    animals.push_back(new Dog());
    animals.push_back(new Cat());
   
    for(int i=0;i<animals.size();i++){
        p=animals[i];
        p->speak();
    }

}

/* pure virtual fn--

class Animal{

    public:

    virtual void speak()=0;

};

rule--- you cannot make object of this class
*/