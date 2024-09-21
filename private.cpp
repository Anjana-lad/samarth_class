//private data member
#include<iostream>
using namespace std;
class Shape{
    private:
        int length,breadth,area;
    public:
    int set_fun(int l,int b){
        length=l;
        breadth=b;
    }
    int Area(){
        area=length*breadth;
        cout<<"Area of rectangle="<<area<<endl;
    }
};
int main(){

    Shape rect;
    rect.set_fun(10,6);
    rect.Area();
}