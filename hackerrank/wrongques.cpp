#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Box{
    private:
    int l,b,h;
    
    public:
    Box(){
        l=0;
        b=0;
        h=0;
    }//default constructor
    
    Box(int a,int b,int c){
        l=a;
        b=b;
        h=c;
    
    }//paramaterized constructor
    
    Box(Box &B){
        l=B.l;
        b=B.b;
        h=B.h;
    }//copy constructor
    
    int getLength(){
        
        return l;
    }
    int getBreadth(){
        return b;
    }
    int getHeight(){
        return h;
    }
    long long CalculateVolume(){
        int volume=l*b*h;
        return volume;
    }
    bool operator<(const Box& other) const {
        return (l < other.l) ||
               (l == other.l && b < other.b) ||
               (l == other.l && b == other.b && h < other.b);
    }
    friend std::ostream& operator<<(std::ostream& os, const Box& box) {
        return os << box.l << " " << box.b << " " << box.h;
    }
};


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    Box A;
    Box B(2,3,4);
    B.getLength();
    B.getBreadth();
    B.getHeight();
    B.CalculateVolume();
    bool x=(A<B);
    cout << B;
    return 0;
}
