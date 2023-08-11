//Inheritance
#include <iostream>
using namespace std;

class man{
    public:
    int hands;
    int legs;
    int eyes;

   void printInfo(){
        cout<<"hands=";
        cout<<hands<<endl;
        cout<<"legs=";
        cout<<legs<<endl;
        cout<<"eyes=";
        cout<<eyes<<endl;
    }
};
//Single Inheritance 
class pranshul : public man{
    public :
    int brain;
};

//multilevel inheritance
class naman : public pranshul{
    public   :
    bool cricket;
};

int main(){
    // pranshul p;
    // p.hands=2;
    // p.legs=2;
    // p.eyes=2 ;
    // p.printInfo();

    naman n;
    n.hands =2;
    n.legs=2;
    n.eyes =2;
    n.printInfo();

return 0;

}