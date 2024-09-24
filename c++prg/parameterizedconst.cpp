//parameterized constructor.
#include<iostream>
using namespace std;
class Square{
    private:
    int num;
    public:
    Square(int n){ //parameterized constructor
        num=n;
    }
    void get_num(){
        cout<<"Enter number";
        cin>>num;
    }
    void show(){
        cout<<"Result="<<num*num<<endl;
    }
};
int main(){
    Square sq(9);
    sq.get_num();
    sq.show();
}
