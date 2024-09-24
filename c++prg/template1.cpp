// function template 
#include<iostream>
using namespace std;
template <typename t>
t myswap(t x,t y){
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<"x="<<x << "\n" <<"Y="<<y<<endl;
}
int main(){
    myswap<int>(85,12);
    myswap<double>(10.2,52.3);
} 