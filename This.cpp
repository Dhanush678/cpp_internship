#include<iostream>
#include<vector>
using namespace std;

class Test{
private:
int x;
public:
int func(int x){
    this->x=x;
}
void print(){
    cout<<x;
}



}
;

int main(){
Test t;
int x=20;
t.func(x);
t.print();

return 0;


}



