// overloading square[] bracket .
#include<iostream>
using namespace std;
class square{
    public:
    int arr[3];
    public:
    square(int i,int j,int k){
        arr[0]=i;
        arr[1]=j;
        arr[2]=k;
    }
    int operator [](int i){
        return arr[i];
    }
};
int main(){
    square sq(41,75,25);
    cout<<"Array index 1:"<<sq[1];
    cout<<"Array index 0:"<<sq[0];
    cout<<"Array index 2:"<<sq[2];
}