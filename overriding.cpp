#include<iostream>
using namespace std;
class Parent{
    public:
    void A(){
        cout<<"parent class invoked";
    }
};
class child: public Parent{
  public:
  void A(){
      cout<<"child class invoked";
  }
};
int main(){
    Parent a=child();
    a.A();
     child v=child();
    v.A();
}
