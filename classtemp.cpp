// class template .
#include<iostream>
using namespace std;
template <class t>
class number{
    private:
    t num;
    public:
    number(t n){
        num=n;
    }
    t show_num(){
        return num;
    }
};
int main(){
    number<int> number_int(74);
    number<double> number_double(74.2);
    cout<<"Integer number="<<number_int.show_num();
        cout<<"double number="<<number_double.show_num();
}