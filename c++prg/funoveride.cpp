// function overriding : 
#include<iostream>
using namespace std;
class A{
    public:
  virtual int show(){
        cout<<"I am in class A"<<endl;
    }
};
class B:public A{
    public:
    int show(){
        A::show();
        cout<<"I am in class B";
    }
};

int main(){
   A *ab;  // for class A pointer variable.
   B ob;  //class b object
   ab=&ob; 
   ab->show();
  // ob.show();
//  B ob;
//  ob.show();

}