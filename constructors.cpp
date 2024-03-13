#include<iostream>
using namespace std;
class demo{
  
  public:
  demo();//can be defined here itself
  //all so default constructor
  
};
demo::demo(){
    cout<<"constructor outside called";
}

int main(){
    demo f;
   
    
    
    
}


//parameterized constructor and copy constructors
#include<iostream>
using namespace std;
class A{
    public :
    A(int a){
        cout<<"parameterized constructor called";
    }
    A(){
        cout<<"default constructor called";
    }
     A(int a,int b); 
      A( A& obj){
        cout<<"copy constructor using explicit\n";
    }}
};
A::A(int a,int b){
    cout<<"outside the class"
}
int  main(){
    A a;//calls defualt
    A b(4);
    A v(2,4);
    A d(a);//explicit constructors calling

}