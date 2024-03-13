#include<iostream>
using namespace std;

class A{
    private:
    int var1;
    protected:
    int var2;
    public:
          void unc(){ var1=1;
             var2=2;};
    friend class f;
    
    
    
};
class f{//using frind class for accesing the global variables
    public:
    void print(A& t){
        cout<<t.var1;
        cout<<t.var2;
    }
};
int main(){
    A a;
    a.unc();
    f fri;
    fri.print(a);
}