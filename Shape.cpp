#include <iostream>
using namespace std;

class Shape {
public:
    int area(int l, int w){      
        return l*w;
    }

    int area(int s){                   
        return s*s;
    }

    float area(float b,float h){       
        return (b*h)/2;
    }

    float area(float r){                 
        return 3.14*r*r;
    }
};

int main() {
    Shape calc;

    cout<<"Rectangle Area: "<<calc.area(60,20)<<endl;
    cout<<"Square Area: "<<calc.area(10)<<endl;
    cout<<"Circle Area: " <<calc.area(10)<<endl;
    cout<<"Triangle Area: "<<calc.area(10,15)<<endl;

    return 0;
}
