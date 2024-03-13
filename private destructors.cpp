//parameterized constructor and copy constructors
#include<iostream>
using namespace std;
class A{
    private: ~A(){
        cout<<"private destructor called";
    }

};
int  main(){

A* a=new A();
//or using malloc
A* v=(A*)malloc(sizeof(A));
return 0;
}