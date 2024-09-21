// operator overloading : it gives special meaning to an existing operator in c++
//without changing its original meaning.
//syntax return type operator (operator symbol)(className &objectName)
#include<iostream>
using namespace std;
class  overload{
    public: int num;
    public:
    int get_num(){
        cout<<"Enter number:";
        cin>>num;
    }
    int operator >(overload &obj){
        if(num>=obj.num){
            return 1;
        }
        else{
            return 0;
        }
    }
    int operator ==(overload &obj1){
        if(num==obj1.num){
            return 1;
        }
        else{
            return 0;
        }
    }
};
int main(){
    overload ov,ov1;
    ov.get_num();
    ov1.get_num();
    int res=(ov>ov1)||(ov==ov1);
    cout<<"Result="<<res<<endl; 
}