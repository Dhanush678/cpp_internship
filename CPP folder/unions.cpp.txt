#include<iostream>
using namespace std;
  union name{
    int a;
    float b;
    double c;
    
};
int main()
{
   union name person ;
    person.a=4;
    person.b=4.5;
    person.c=4.2323;
    cout<<person.a<<"\n";
    cout<<person.c;
    
}
