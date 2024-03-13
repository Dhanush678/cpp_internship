//parameterized constructor and copy constructors
#include<iostream>
using namespace std;
class A{
    public: ~A(){
        cout<<"private destructor called";
    }

};
int  main(){

A a;
return 0;//calls the destructors
}

//parameterized constructor and copy constructors
#include<iostream>
using namespace std;
class A{
    public: ~A(){
        cout<<"private destructor called";
    }

};
int  main(){

A a;
exit(0);//doesn't call the destructors

}