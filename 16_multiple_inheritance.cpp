#include <iostream>

using namespace std;

class Engineer{
    
    public:
    string spec;
    void work(){
        cout<<" i study "<<spec<<endl;
    }
    Engineer(){
        cout<<"hello eng"<<endl;
    }
    };

    class Youtuber{
        public:
        int subscribe;

        Youtuber(){
            cout<<"hello yt"<<endl;
        }

        void content(){
            cout<<" sub no: "<<subscribe<<endl;
        }
    };
// aap jiski parent class ki properties pehle inherit karte ho(in this case engg)
// uska constructor call hota hai
    class codeTeacher: public Engineer, public Youtuber{

        public:
        string name;

        codeTeacher(string name, string spec, int subscribe){
          this->name=name;
          this->spec=spec;
          this->subscribe=subscribe;  
        }

        void showcase(){
            cout<<"my name is: "<<name<<endl;
            work();
            content();
        }
    };
int main(){
    
    codeTeacher A1("rohit","CSE",49000);
    A1.showcase();
}