#include<iostream>
using namespace std;
 class A
{
    private:int r;//only the members can acess the data

    
    public://can be accesssed by anyone 
    int func(int ru){
        r=ru;
        int area=3.14*r*r;
       
        return area;
    }



};
int main(){
    A a;
    
    cout<<a.func(3);
}



//protected


#include<iostream>
using namespace std;
class par{
    protected: int  id_pro;//can be accesed only through child
    
};
class child: public par{
    
    public:
    void func(int id){
        id_pro=id;
        cout<<id_pro;
        
    }
    
};
int main(){
    child ob;
    ob.func(4);
}

