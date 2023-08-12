#include <iostream>
using namespace std;

//Base class
class animal{
    public:
    bool speak;
    void motion(){
        cout<<"animals can move"<<endl;
    }
};

//single inheritance
class dog : public animal{
    private:
    void domestic(){
        cout <<"dog is a domestic animal"<<endl;
    }
    public:
    bool bark;
    bool bite;
    bool wagtail;

    void dogbark(bool bark){
        if(bark==1){
            cout<<"dog can bark"<<endl;
        }
        else{
            cout<<"this is not dog"<<endl;
        }
    }

    void eat(){
        cout <<"i am from dog class"<<endl;
        cout <<"dog eats bone"<<endl;
    }
};

//single inheritance 
class cat : public animal{
    private:
    void domestic(){
        cout<<"cat is a domestic animal"<<endl;
    }
    public:
    void drink(){
        cout <<"i am from cat class"<<endl;
        cout <<"cats drink milk"<<endl;
    }
};

//single inheritance
class man : public animal{
    public :
    void earn (){
        cout <<"i am from man class"<<endl;
        cout << "A man is a social animal because they can earn money "<< endl;
    }
};

//multiple inheritance
class mammals : public cat, public dog{
    public:
    void crawl(){
        cout <<"mammals can crawl"<<endl;
    }
};

//multilevel inheritance
class pranshul : public man {
    public :
    void good (){
        cout << " pranshul gupta is a good boy"<<endl;
    }
};

//multilevel inheritance
class bitch : public dog {
    public :
    void dogson(){
    cout <<"I am from bitch "<<endl;
}
};

//hierarchical inheritance 
class fuca : public bitch{
    public:
    void fullform(){
    cout<<"FUCA- first universal commmon ancestor"<<endl;
    }
};

int main(){
    fuca luca;
    luca.motion();
    bitch pluto;
    pluto.dogbark(1);
    pranshul p;
    p.motion();

    return 0;
}

