//funcion overloading
#include <iostream>
using namespace std;

class pranshul{
    public:
    void func(){
        cout<<"function with no argument"<<endl;
    }
    void func(int n){
        cout<<"function with int argument"<<endl;
    }
    void func(double n){
        cout<<"function wuth doouble argument"<<endl;
    }
};

int main(){
    pranshul obj;
    obj.func();
    obj.func(4);
    obj.func(5.67);

}