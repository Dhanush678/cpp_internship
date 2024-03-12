#include<iostream>
using namespace std;
int A=1;//global variable
void main(){

int a=10;//local variable
float a=1.2

//Type deduction:auto and decltype

//auto
int foo=1;
auto nol=fool;//same as int a

//decltype
int foo=0;
decltype(foo) nol;//same ass int a

}