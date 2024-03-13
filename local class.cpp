//parameterized constructor and copy constructors
#include<iostream>
using namespace std;
class A{
    public:
   static int a;
   A(){
       a=a+1;
       cout<<a;
       
   }
   static void func(){
    cout<<"before the main";
    
}
   
};

int A::a=0;
   
class B{
    
};
int  main(){
    A a;//prints 1
    A b;//print 2 because the variable is sharred by all the objects
    A::func();

}