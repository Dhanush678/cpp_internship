#include<iostream>
using namespace std;
int main(){int a=10;
void* ptr;

float c=2.3;

ptr=&a;

//(int*)ptr type casting the pointer from void to int
//*(int*)ptr converting into the pointer
cout<<*(int*)ptr;
ptr=&c;
cout<<*(float*)ptr;



}