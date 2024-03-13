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
    }
    //intialazing the move constructors
    A(A&& onj){
        cout<<"move constructor called";
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
    A c=move(a);//calling move constructors


}


//using th pointer resource to move to another location using move cosntrutors
//parameterized constructor and copy constructors
#include<iostream>
using namespace std;
class A{
    public :
    
    int* p=new int[10];
    A(int a){
        cout<<"parameterized constructor called";
    }
    A(){
        cout<<"default constructor called";
    }
     A(int a,int b); 
      A( A& obj){
        cout<<"copy constructor using explicit\n";
    }
    A(A&& obj):p(obj.p){//using the move cosntrutors
        cout<<"move constructor called";
    }}
;
A::A(int a,int b){
    cout<<"outside the class";
}
int  main(){
    A a;//calls defualt
    A b(4);
    A v(2,4);
    A d(a);//explicit constructors calling
    A c=move(a);

}