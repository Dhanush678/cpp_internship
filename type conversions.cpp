#include<iostream>
using namespace std
 void main(){
//implicit conversion
float a=2.3;
int b=a;

//explicit conversion
double d=4.55;
int a=(int)d+1;

// using static cast operator
float f = 3.5;  
int b = static_cast<int>(f);//static_cast <new_type> (expression);

//using dynamic conversion 

float a=45;
int b dynamic_cast<int>(a);//used for down conversions,check for compatibility automatially and returns null pointer


}