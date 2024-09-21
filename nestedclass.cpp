//nested class : class inside class
#include<iostream>
using namespace std;
class A{    // outer class
    public:
     void show1(){
        cout<<"I am in class A"<<endl;
     }
        class B{   //inner class
            public:
            void show(){
                cout<<"I am in class B"<<endl;
            }
        };
};
int main(){
    A a;
    a.show1();
    A::B b;  // outerclass :: innerclass object name;
    b.show();
}