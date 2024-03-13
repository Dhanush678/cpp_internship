#include<iostream>
using namespace std;

class A{
static int a;


public:
void func(int a){//the parameter value will change to a=2
cout<<A::a;//using this function to change the value to a=10,this keyword will access the local variable
}

void print(){
cout<<a;}

};
int A::a=10;
int main(){
A a;
a.func(2);//this value will be changed 
a.print();

//PRINTS 1010

}


