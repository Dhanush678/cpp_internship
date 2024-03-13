#include<iostream>
using namespace std;

class A{
    public:
    void df(){
        cout<<"defualt function oerloading\n";
        
    }
     void df(int a){
         cout<<"paramterized function overloading\n";
        
    } void df(double a){
        cout<<"type float called\n";
        
    } void df(int a,double v){
        cout<<"multiple aurgment called\n";
        
    }
};
int main(){
    A a;
    a.df();
    a.df(2);
    a.df(2.3);
    a.df(2,3.4);
    return 0;
}