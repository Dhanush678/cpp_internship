#include<iostream>
using namespace std;

class A{
private: int a=10;


public:
void func(int a){//the parameter value will change to a=2
cout<<this->a;//using this function to change the value to a=10,this keyword will access the local variable
}
void print(){
cout<<a;}

};
int main(){
A a;
a.func(2);//this value will be changed 
a.print();

//PRINTS 1010

}


