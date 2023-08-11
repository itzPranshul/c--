#include <iostream>
using namespace std;

class pranshul{
    public:
    int hands;
    int legs;
    int eyes;

    pranshul(int h,int l,int e){
       hands=h;
       legs=l;
       eyes=e;
    }
    
    pranshul(){
        cout <<"default constructor"<<endl;
    }

    ~pranshul(){
    cout <<"destructor"<<endl;
    }

    void printInfo(){
        cout<<"hands= ";
        cout<<hands<<endl;
        cout<<"legs= ";
        cout<<legs<<endl;
        cout<<"eyes= ";
        cout<<eyes<<endl;
    }
};

int main(){
    pranshul a(2,2,2);
    a.printInfo();

    //default constructor
    pranshul b;

    return 0;

}