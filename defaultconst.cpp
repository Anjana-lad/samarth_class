//Default constructor : If the user create a default constructor memory will be allocated but if the default constructor is created by compiler then no memory will be allocated.
#include<iostream>
using namespace std;
class Test{
    private:
        int maths,science,total;
    public:
        Test(){  // default constructor
            cout<<"Enter marks for maths and science:";
            cin>>maths>>science;
            total=maths+science;
            cout<<"Total marks="<<total<<endl;
    }
};
int main(){
  Test t;  // className object name;
}