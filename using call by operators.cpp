#include<iostream>
#include<vector>
using namespace std;
void func1(int a){//call byy values
    
    cout<<a;
}
void func2(int* a){//call byy pointer
    
    cout<<*a;
    
}
void func3(int& a){//call byy reference
    
    cout<<a;
}
int main(){
    int t=2;
    int* ptr=&t;
    func1(t);//PRINTS 2
    func2(ptr);//PRINTS 2
    func3(*ptr);//PRINTS 2



}