#include<iostream>
using namespace std;
int function(int a,int b,int c=2){//default values in the parameters

return a+b+c;
}
int main(){


cout<<function(1,2);
cout<<function(1,2,3);
}