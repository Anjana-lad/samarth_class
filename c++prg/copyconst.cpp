//copy constructor : here we have to give one reference object to the constructor.
#include<iostream>
using namespace std;
class value{
    private:
    int a,b;
    public:
    value(int a1,int b1){ // parameterized constructor
        a=a1;
        b=b1;
    }
    value (const value &ob){ // copy constructor
        a=ob.a;
        b=ob.b;
    }
    void show(){
        cout<<"A="<<a<<"\n B="<<b<<endl;
    }
};
int main(){
  value v1(10,50);  //parameterized constructor object
  //value v2=v1;
  value v2(v1);  // copy constructor object
  v2.show();  
}