#include <iostream>
using namespace std;

class dog{
    public:
    string colour;
    string bread;
    bool gender;

    dog(string c,string b, bool g){
        colour =c;
        bread =b;
        gender =g;
    }//parametrized constructor

    dog(){
        cout<<"default constructor"<<endl;
    }//default constructor

    ~dog(){
        cout <<"destructor"<<endl;
    }//destructor

    void printInfo(){
        cout <<"colour=";
        cout <<colour<<endl;
        cout <<"bread=";
        cout <<bread<<endl;
        cout <<"gender=";
        cout <<gender<<endl;
    }

};

int main(){
    dog a("black", "lebra", 0);
    a.printInfo();
    dog b;
}