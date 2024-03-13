#include<iostream>
using namespace std
void main(){
int a = 6, b = 4;
//unary
a++;
b--;
//binary and relational
int c=a&b;
    cout << "a == b is " << (a & b) << endl;
    cout << "a > b is " << (a > b) << endl;
    cout << "a >= b is " << (a >= b) << endl;
    cout << "a < b is " << (a < b) << endl;
    cout << "a <= b is " << (a <= b) << endl;
    cout << "a != b is " << (a != b) << endl;

//logical op :&&,||,!
//bitwise op:&,|,^,>>,<<,~
//assignment op:+=,-=,*=,/=

//ternary

if(a==6 && b==4){

int res=(a<b)?a:b;

}



}